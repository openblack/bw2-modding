The format `al` is used to store information related to animation of a [.bwm](/file_formats/bwm.md) skin and most likely stands for animation library. 
The format is found inside the `Art\binary_anim_libs` and knowledge on the format is still quite limited.
Here is a rough overview of how the format is organized.

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
  uint32_t unknowns1[2]; // Always the same values across file
  char name[64];
  uint32_t unknowns2[7]; // Always the same values for one file
  uint32_t unknowns3[11];
  uint32_t animationOffset; // Where to find the data of the animation in the file
```

# Animation Data
The majority of the information inside an animation library and right now the least understood part.
