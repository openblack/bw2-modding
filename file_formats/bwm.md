## Description

The format `bwm` is an abbreviation for `Black & White Model`. As is the name
the format is used to describe in-game 3D models, it is built up of many
different data definitions such as: vertices, faces, materials, meshes, bones,
entities, etc..

A lot of this format is still unknown to me, but enough is known to read and
render static meshes.

![A model file imported into blender](images/bwm-blender.png)
![A model file visualized in wireframe](images/bwm-program.png)

## File Format

### Header
The file has a header identifying the file format and version: ASCII
`LiOnHeAdMODEL`, followed by `27 bytes` of null padding. Followed by a `uint32`
possibly describing the version. Then followed again by another `uint32` that
must be set to `0x2B00B1E5`. :smirk:

A lot of the header is completely unknown to me, but enough is known to read
a model's geometry. The following is the structure after `0x2B00B1E5`:

```
char[40] magicFileIdentifier; //'LiOnHeAdMODEL' followed by 27 bytes of padding
uint32_t size; //Size of the file minus the size of this value and of magicFileIdentifier
uint32_t magicNumber; // Must always be 0x2B00B1E5
uint32_t version; // Version of the file format only encoutered version 5 or 6
char[72] unknown1;
uint32_t numMaterialDefinitions;
uint32_t numMeshDescriptions;
uint32_t numBones;
uint32_t numEnts;
uint32_t numUnknown1; // Count the number of an entity whose purpose is unknown
uint32_t numUnknown2; // Count the number of an entity whose purpose is unknown
char[20] unknown;
uint32_t numVertex;
uint32_t numStrides;
uint32_t type; //Tell if the file is a model or a skin (model for people and animal) it determines the step to make for each faces (if 3 then 1, if 2 then 3) in the table of indes to build a face.
uint32_t numIndices;
```

### Material Definition
A series of 8 table of 64 char containing the name of the texture used.
The table can be an empty string meaning material won't use it (no normals if normalMap 
is empty).

```
char[64] diffuseMap;
char[64] lightMap;
char[64] unknown1; // Can't confirm but it seems link to be a growthmap for blossoming tree
char[64] specularMap;
char[64] unknown2; //Can't confirm but it seems to be a growthmap for vegetation in general
// including alignemnet related vines and plant on building.
char[64] normalMap;
char[64] type;
```

### Mesh Description Definition
```
uint_32 facesCount;
uint_32 indiciesOffset;
char[128] unknown1;
uint_32 materialRefsCount;
char[4] unknown2;
uint_32 id;
char[64] name;
```

### Material Reference Definition
```
uint_32 materialDefinition;
uint_32 indiciesOffset;
uint_32 indiciesSize;
uint_32 vertexOffset;
uint_32 facesOffset;
uint_32 facesSizes;
char[4] unknown2;
```

### Bone Definition
```
float[3] axis1; //First axis of a rotation matrix
float[3] axis2; //Second axis of a rotation matrix
float[3] axis3; //Thirs axis of a rotation matrix
float[3] position;
```

### Entity definition
```
float[3] axis1; //First axis of a rotation matrix
float[3] axis2; //Second axis of a rotation matrix
float[3] axis3; //Thirs axis of a rotation matrix
float[3] position;
char[256] name
```

### Entity Unknown1:
```
float[3] point;
```

### Entity Unknown2:
```
float[3] point;
```

### Stride

```
uint_32 count;
uint_32 idSize[2*count];
uint_32 unknown[136 - (2*count)]; //Presumed to be garbage
````
### Stride organized data

#### Vertex
```
float[3] position;
float[3] normal;
float[2] uv;
float[2] unknown1;
float[2] unknown2;
```

#### Unknown Data
If the number of Stride is over 1 multiple Array will be stored there, as it happens only on skins it is presumed that this data is there for animation purpose

### Indices
A table of `uint_16` containing index for the vertex array. The way to extract faces differs if your file contain a model or a skin (you'll need to move by 3 for each face for a model and by one for a skin).
```
uint_16[numIndices]
```

### Model Cleaves
Named like this in bwmTool reader, don't know what it's used for
```
uint_32 modelCleaveCount;
float[3] modelCleave[modelCleaveCount]
```
