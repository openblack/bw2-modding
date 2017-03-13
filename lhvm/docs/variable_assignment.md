# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="5"></a> 5 Variable Assigment

Variables are where you store values or game [object](objects.md#8 "return a game object")s. Assignments are followed by [expression](expressions.md#12)s.

### <a name="5.1"></a> 5.1 Variables

A variable is the token you use to refer to something in the script, which you can then use in [statements](statements.md#3 "A statement is a command which causes something to happen.") to perform tasks etc on the said reference stored in the token..

1.  [identifier](#5.1.1 "The token the script programmer uses as a reference to script references.")
2.  [constant of object](#5.1.2 "Getting or setting the property of an object.")



### <a name="5.2"></a> 5.2 Assigns

Operators that assign values to variables.

1.  [= expression](#5.2.1 "Assigns a value to a variable.")
2.  [+= expression](#5.2.2 "Adds a value to a variable.")
3.  [-= expression](#5.2.3 "Subtracts a value from a variable.")
4.  [*= expression](#5.2.4 "Multiplies a variable by a value.")
5.  [/= expression](#5.2.5 "Divides a variable by a value.")
6.  [%= expression](#5.2.6 "Assigns the remainder of a division.")
7.  [++](#5.2.7 "Increments a variable.")
8.  [--](#5.2.8 "Decrements a variable.")

#### <a name="5.1.1"></a> 5.1.1 [identifier](README.md#17 "An identifier is an immediate value.")

The user defined token the script programmer uses as a reference to script references.

#### <a name="5.1.2"></a> 5.1.2 [constant](Constants.htm#10 "A constant is used to refer to a game enumeration.") of [object](objects.md#8 "return a game object")

At the time of this document a game [object](objects.md#8 "return a game object") can have a property enquired or set, depending on what makes sense. The implemented choices are found in `scriptenums.h` NB. If you are setting the SPEED of an [object](objects.md#8 "return a game object") you should do it before you set it moving.

`SCRIPT_OBJECT_PROPERTY_TYPE_AGE of LostBrother = 21`

#### <a name="5.2.1"></a> 5.2.1 = [expression](expressions.md#12)

Assigns the [expression](expressions.md#12) on the right of the operator to the variable on the left.

#### <a name="5.2.2"></a> 5.2.2 += [expression](expressions.md#12)

Adds the [expression](expressions.md#12) on the right of the operator to the variable on the left and assigns this value to the variable on the left. A += B is the same as writing A = (A + B)

#### <a name="5.2.3"></a> 5.2.3 -= [expression](expressions.md#12)

Subtracts the [expression](expressions.md#12) on the right of the operator from the variable of the left and assigns this value to the variable on the left. A -= B is the same as writing A = (A - B)

#### <a name="5.2.4"></a> 5.2.4 *= [expression](expressions.md#12)

Multiples the variable on the left of the operator by the [expression](expressions.md#12) on the right then assigns the value to the variable on the left. A *= B is the same as writing A = (A*B)

#### <a name="5.2.5"></a> 5.2.5 /= [expression](expressions.md#12)

Divides the variable on the left of the operator by the [expression](expressions.md#12) on the right then assigns the value to the variable on the left. A /= B is the same as writing A = (A/B)

#### <a name="5.2.6"></a> 5.2.6 %= [expression](expressions.md#12)

Divides the variable on the left of the operator by the [expression](expressions.md#12) on the right and assigns the remainder to the variable on the left. A %= B is the same as writing A = (A%B)

#### <a name="5.2.7"></a> 5.2.7 ++

Increases the value to the left of the operator by one. A++ is the same as writing A = (A + 1)

#### <a name="5.2.8"></a> 5.2.8 --

Decreases the value to the left of the operator by one. A-- is the same as writing A = (A - 1)
