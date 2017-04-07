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
uint32_t modelType: this is either 5 or 6 depending on if the model has bones
uint32_t headerSize;
char[68] unknown;
uint32_t numMaterialDefinitions;
uint32_t numMeshDescriptions;
uint32_t numBones;
uint32_t numEnts;
uint32_t numUnknown
uint32_t numUnknown;
char[20] unknown;
uint32_t numVertex;
uint32_t numStrides;
uint32_t unknown;
uint32_t numIndices;
```
