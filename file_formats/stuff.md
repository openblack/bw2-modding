## Description

The game only uses this format once for a large archive file called
`Everything.stuff`. It's a very simple archive format that contains all the
games assets.

## File Format

Very basic file format with no header. File data is located at the beginning of
the file with a dictionary of files at the end of the file.

The last 4 bytes of the file represent a 32 bit integer pointer to the local
position of the dictionary.

#### Directory Entry
```
256 bytes - char[256] - Name of the file (null terminated)
  4 bytes - int32     - File Offset
  4 bytes - int32     - File Size
  4 bytes - int32     - Unknown
```

The total number of dictionary entries can be found by dividing the size of the
dictionary block by the size of each dictionary entry:
`nEntries = (sizeof(file) - &dict - 4) / 268`

**All file offsets are relative to the start of the file.**
