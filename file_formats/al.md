The format `al` is used to store information related to animation of a [.bwm](/file_formats/bwm.md) skin and most likely stands for animation library. 
The format is found inside the `Art\binary_anim_libs` and knowledge on the format is still quite limited.
Here is a rough overview of how the format is organized.

At the end of this page you can find an [ImHex](https://imhex.werwolv.net/) Pattern corresponding to this file format. 

# Header

The header of the file is as follow :
```
uint32_t magicNumber; //Magic number always equal to 0xFEC
uint32_t unknown; //always equal to FFFF0002
char[64] name;
uint32_t metadataOffset; //needs to add 0x60
uint32_t size; //size of the file minus 0x60
uint32_t animationMetadataCount;
uint32_t[2] unknown1;
uint32_t boneCount;
uint32_t unknown2; // Always 0?
```

# Armature
Define the relation of the different bones between each other as a list of bones.
The index of the bone inside the armature is the same as the bone inside a corresponding [.bwm](/file_formats/bwm.md).
It is not yet known how bwm are linked to their corresponding animation library, bones are organized as follow.
```
char[32] name;
uint32_t parent;
```

# Animation Metadata
A list containing the medata of an animation.
Each animation metadata are as follow :
```
  uint32_t magicNumber; //Magic number always equal to 0xFEC
  uint32_t animationVersion; // Always 9
  char name[64];
  uint32_t animationType; // 3 for hierarchical, no other animation type was met for now
  uint32_t animationEventStringSize // Size of the section where AnimationEvent names are stored, 0 in metadata
  uint32_t unknowns1[3]; // all values are always 0 asfaik.
  uint32_t animEventCount;
  // The second and third value vary from one animation to another
  uint32_t boneCount;
  uint32_t frameCount;
  float samplingRate; // Framerate of the animation in Hz
  float duration; // Animation usually samplingRate * frameCount
  // It can be different but this will lead to mismatch in the animation loop.
  uint32_t distance;
  bool isCyclic;
  bool isHierarchical;
  uint16_t empty; // always 0
  uint32_t unknowns2a[2];
  uint32_t unknown4;
  uint32_t unknowns2b[2]; // unknowns2a == ununknowns2b
  uint32_t unknown4;
  uint32_t animationOffset; // position of the animation data from the start of the file
```

# Animation Data
The majority of the information inside an animation library and right now the least understood part.
## Animation Header
Identical to the associated metadata except for the values inside the unknowns1 array.
```
  uint32_t magicNumber; //Magic number always equal to 0xFEC
  uint32_t animationVersion; // Always 9
  char name[64];
  uint32_t animationType; // 3 for hierarchical, no other animation type was met for now
  uint32_t animationEventStringSize // Size of the section where AnimationEvent names are stored
  uint32_t unknowns1[3]; // last two values are always 0 asfaik.
  uint32_t animEventCount;
  // The second and third value vary from one animation to another
  uint32_t boneCount;
  uint32_t frameCount;
  float samplingRate; // Framerate of the animation in Hz
  float duration; // Animation usually samplingRate * frameCount
  // It can be different but this will lead to mismatch in the animation loop.
  uint32_t distance;
  bool isCyclic;
  bool isHierarchical;
  uint16_t empty; // always 0
  uint32_t unknowns2a[2];
  uint32_t unknown4;
  uint32_t unknowns2b[2]; // unknowns2a == ununknowns2b
  uint32_t unknown4;
```
## Animation Event
An array of Animation Event followed by the name of its element.
### Animation Event
```
uint32_t boneOffset // Offset to the "bone name" from the beginning of the animation in the file
uint32_t nameOffset // Offset to the name of the event from the beginning of the animation in the file
float axis1[4] // First axis of the rotatio section of a transformation matrix
float axis1[4] // Second axis of the rotation section of a transformation matrix
float axis1[4] // Third axis of the rotatio section of a transformation matrix
float translation[4] // Transformation vector of a transformation matrix
```
### Animation Event Strings
The names pointed by `boneOffset` and `nameOffset` are stored right after the end of the array of animation event as a list of null terminated strings.
They are organised in the following order :
- Name of bone before name of event
- From first Animation Event to last

Example from the a_bear_die animation in bear.al, you can find the following strings (`�` are null character).
```
LHAnimEvent04�::FOOTSTEPS.99�LHAnimEvent03�::FOOTSTEPS.99�LHAnimEvent05�::POLARHITGROUND.99�LHAnimEvent01�::POLAR1.99�
```
You then have `LHAnimEvent04` as bone name and `::FOOTSTEPS.99` as event name for the first event,
`LHAnimEvent03` as bone name and `::FOOTSTEPS.99` as event name for the second event,
and so on for the rest.

## Animation Data
Most likely contains keyframes but i don't know how they are organized

# A pattern to use with ImHex

```C
#pragma pattern_limit 10000000
#include <std/ptr.pat>

struct header {
    u32 magicnumber;
    u32 unknown1;
    char name[64];
    u32 metadataOffset;
    u32 size;
    u32 animationOffset;
    u32 animationCount;
    float unknowns2[2];
};

header fileHeader @0x0;

struct bone{
    char name[32];
    s32 parentBone;
};

struct armature {
    u32 boneCount;
    u32 unknown;
    bone skeleton[boneCount];
};

armature skeleton @0x60;

struct animationHeader {
    u32 magicNumber;
    u32 version;
    char name[64];
    u32 animationType;
    u32 animationEventStringSize;
    u32 offsetBlockSize;
    u32 unknown1[2];
    u32 animationEventCount;
    u32 boneCount;
    u32 frameCount;
    float samplingRate;
    float duration;
    float distance;
    bool isCyclic;
    bool isHierarchical;
    u16 flags;
    u32 unknowns[6];
};

using metadata;

struct animationEvent {
    u32 boneOffset;
    u32 nameOffset;
    float transitionMatrix[16];
};

struct unk {
	u32 index[2];
};

struct tuple{	
	u32 data[2];
	//float val[size] @ 0x828 + (offset*size);
};

struct CompressedQuaternion {
	s16 xyz[3];
};

struct Quaternion{
	float rotation[4];
};

struct Point{
	float position[3];
};

struct animation {
    animationHeader header;
    //Animation Event block
    animationEvent events[header.animationEventCount];
    padding[header.animationEventStringSize];
    u32 something;
    padding[12];
    char unk[something];
    // Offset Block
    tuple offsetArray[header.frameCount];
    padding[header.offsetBlockSize - header.frameCount*8];
    // Unknown Data Block
    u32 unk2[2];
    char unk3[32];
    Point posComp;
	// KeyFrame Block
    Point point;
    Quaternion frameZeroRotations[header.boneCount];
    Point frameZeroPosition[header.boneCount];;
    CompressedQuaternion first[(header.frameCount-1)*((unk2[0]))];
    CompressedQuaternion second[(header.frameCount-1)*((unk2[1]))];
};

struct animationMetadata {
    animationHeader info;
    u32 offset;
	animation anim @ offset;
};

animationMetadata metadata[fileHeader.animationCount] @fileHeader.metadataOffset+0x60;
```
