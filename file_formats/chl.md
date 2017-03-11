## Description

The game uses the `chl` format to represent a script of the game logic such as
God AI, objectives, picking creatures, cinematics, everything.

These files are internally referred to as challenge files, they are compiled
from a [proprietary scripting language](https://github.com/HandsomeMatt/bw2-scripts)
into bytecode, this bytecode is then interpreted using the [LHVM](/lhvm/).

## File Format

### Header
The file has a header identifying the file format and version: ASCII 4 bytes
`LHVM` followed by a 4 byte integer representing the version, Black & White 2
is `12`.

### Global Variables

A `uint32` at the start of this section represents the number of global variables
to read. Each global variable is just a null terminated string representing the
global variable's name. You can create a dictionary mapping like so:

```
map <uint32_t, string> global_names;
for (uint32_t i = 0; i < length; i++)
  global_names[i] = read_null_terminated_string()
```

### Code

A `uint32` at the start of this section represents the number of instructions to
read. Each instruction can be represented as an array:

|             | Type     | Description                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------------|----------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Type        | uint32_t | Type defines the overall function of the instruction, such as add, sub,,etc. Note that there will be several instructions which share the same,main Type value. For example there are a number of “push” instructions,that all have a type of 2, since they all push data onto the stack.,However, their data types and parameters will differ.                                                                                                           |
| Sub Type    | uint32_t | Usually used to differentiate functions who's overall functions are the,same, but still differ slightly. This can be seein in the “pop”,instruction. One is used to simply pop a value from the stack,,effectively deleting it. Another is used to pop a value and store it,into a variable. Since these functions both pop a variable from the,stack, they share a Type, but since they handle the popped value,differently the have different SubTypes. |
| Data Type   | uint32_t | Usually used to specify what kind of data the instruction is going to be,working with. This is not a reliable way of determining operand data,types however. It can be useful for trying to figure out unknown,instructions.                                                                                                                                                                                                                              |
| Parameter   | var32*   | Data used by instruction, if applicable. Most instructions use the,stack as their source of data. Though, obviously, the data has to get,onto the stack some how, this is where this field comes into play.                                                                                                                                                                                                                                               |
| Line Number | uint32_t | This field holds the line number that was responsible for,generating this instruction. On occasion this field will be null due to,auto generated instructions that do not link directly to any one line in,the code. These, luckily, are very few.                                                                                                                                                                                                        |
[A complete list of opcodes can be found here.](/lhvm/opcodes.md)

**The total number of bytes to read here is 20 * instruction count**

### Auto Start Procedures

A `uint32` at the start of this section represents the number of procedures that
need to be auto started. Each procedure is represented as a `uint32` of the
procedure's id read in the next section.

### Procedures

A `uint32` at the start of this section represents the number of procedures that
need to be read.

#### Procedure Format


### Functions

named functions

### Data

string data and referred to via pointers.
