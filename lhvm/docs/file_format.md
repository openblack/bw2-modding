# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="2"></a> 2 File Format

All valid Challenge Language files consist of four major sections, which must
occur in the order specified in this section.

#### <a name="2.1"></a> 2.1 Comments

The Challenge Language file may contain comments, which are useful notes to
remind you what you were thinking of when you wrote that part of the challenge.
Comments come in two flavours; single-line and multi-line. You can nest comments
as much as you like!

```
// this is a single-line comment
/*
* And this is a /* nested */
* multi-line comment!
*/
```

#### <a name="2.2"></a>2.2 define script [identifier](README.md#17) arguments

In scripts you may wish to make calls to functions which have not been created yet, if so you need to declare them

```
define script Land7Control  
define script MyReminder(var1, var2, var3)</pre>
```

#### <a name="2.3">2.3 define value</a> [identifier](README.md#17) = real

Global defines (like defines in C++), are assigned a value immediately. Declaring global defines is useful if you'd like to use one point of edit for values in code, and for quick runtime use over a global variable. Global defines can not be assigned a game [constant](constants.md#10), only a number.

```
define SIZE_OF_HOUSE = 20.7   
define MAX_PEOPLE_IN_HOUSE = 4</pre>
```

See also:

* [global constant identifier = constant](file_format.md#2.4.2)

### <a name="2.4"></a> 2.4 Global Variable/Constant Declarations

These are values that can be accessed anywhere in your script.

1.  [global variable](#2.4.1)
2.  [global constant identifier = constant](#2.4.2)

### <a name="2.5"></a> 2.5 Scripts

A script contains local variables and [constant](constants.md#10)s, and [statements](statements.md#3) which cause something to happen in the game. They may also accept any number of arguments, allowing you to write one script which can do lots of different things depending on the arguments you pass it. The various parts of the script are described in this section.

See also:

*   [Running Scripts](statements.md#3.24)


1.  [run script identifier](#2.5.1)
2.  [begin script identifier](#2.5.2)
3.  [arguments](#2.5.3)
4.  [Local Variable/Constant Declarations and Initialisations](#2.5.4)
    1.  [identifier = expression](#2.5.4.1)
    2.  [constant identifier = constant](#2.5.4.2)
    3.  [identifier [integer]](#2.5.4.3)
5.  [Script Body](#2.5.5)
6.  [Script Exceptions](#2.5.6)
7.  [end script identifier](#2.5.7)

#### <a name="2.4.1"></a> 2.4.1 global variable

A global variable is a variable which can be accessed and changed from any script in the entire file.

```
global Sister
global TimeTillEnd = 300
global MaxCostValue = BlueCost
global CircleStones[12]
```

#### <a name="2.4.2"></a> 2.4.2 global [constant](constants.md#10) [identifier](README.md#17) = [constant](constants.md#10)

Global [constant](constants.md#10)s, unlike global variables, are assigned a value immediately, and that value may not be changed. Declaring global [constant](constants.md#10)s is useful if you'd like to use shorter names for game enumerations. Global [constant](constants.md#10)s can not be assigned a number, only a game [constant](constants.md#10).

`global HEALTH = SCRIPT_OBJECT_PROPERTY_TYPE_HEALTH`

See also:

*   [define value identifier = real](#2.3)

#### <a name="2.5.1"></a> 2.5.1 run script [identifier](README.md#17)

This can be called outside of the body of a script, in which case it is an 'auto-run' script. Auto-run declarations are used to specify any scripts which are to be run immediately upon start-up. You will probably want to run all of the challenges this way, as the challenge scripts may simply wait until a certain [condition](conditions.md#6) is satisfied before they begin proper.

`run script LostBrother`

#### <a name="2.5.2"></a> 2.5.2 begin script [identifier](README.md#17)

All scripts are begun by specifying their name in this way. After the name, you may give one or more arguments.

`begin script LostBrother`

#### <a name="2.5.3"></a> 2.5.3 arguments

You may pass any number of arguments you like to a script. The script treats these arguments as local variables, and assigns these variables the values you specify when you run the script using the run script command. If you want to use arguments in a script, simply put a comma-separated list of variables inside brackets immediately following the name of the script.

`begin script MyScript(Object,Speed)`

### <a name="2.5.4"></a> 2.5.4 Local Variable/Constant Declarations and Initialisations

You may optionally specify local variables and [constant](constants.md#10)s within scripts. These must all be declared before the start keyword

#### <a name="2.5.4.1"></a> 2.5.4.1 [identifier](README.md#17) = [expression](expressions.md#12)

You may declare and initialise local variables immediately following the beginning of the script, before the start keyword. These variables are visible only within the script itself, so you can have variables of the same name in different scripts.

`Cow = create ANIMAL_INFO_COW SCRIPT_OBJECT_TYPE_ANIMAL at {3463.24, 3458.05}`

#### <a name="2.5.4.2"></a> 2.5.4.2 [constant](constants.md#10) [identifier](README.md#17) = [constant](constants.md#10)

You may also define local [constant](constants.md#10)s, which are useful if you'd like to abbreviate long-winded enumerations.

`[constant](constants.md#10) ANIMAL = SCRIPT_OBJECT_TYPE_ANIMAL`

#### <a name="2.5.4.3"></a> 2.5.4.3 [identifier](README.md#17) [integer]

You may also define local arrays.

```
MyArrayName[10]
MyArrayName[ArraySize]
```

#### <a name="2.5.5"></a> 2.5.5 Script Body

The body section of the script begins with the start keyword, which declares that the local variable declarations are well and truly over. The script body is where all the processing occurs. There are heaps of [statements](statements.md#3) which you can use, and we'll come to them soon.

`start`

#### <a name="2.5.6"></a> 2.5.6 Script [Exception](exceptions.md#4)s

[Exception](exceptions.md#4)s are the really funky cool part of the Script Language. If any of the [exception](exceptions.md#4)s succeeds, the script stops what it's currently doing, processes the [exception](exceptions.md#4), and then either continues from exactly where it was interrupted, or exits, depending on the type of [exception](exceptions.md#4).  
[Exception](exceptions.md#4)s in the main script body haven't been used in a long time, and my not work.

#### <a name="2.5.7"></a> 2.5.7 end script [identifier](README.md#17)

All scripts must be ended by specifying the name of the script once more.

`end script LostBrother`
