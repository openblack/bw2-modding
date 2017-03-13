# Lionhead Challenge Language Documentation

## Contents

### <a name="1"></a> 1 Introduction

The Black & White Challenge Language allows you to write scripts which control
various aspects of the game world. This document describes how to do just that.
The basic idea is that challenges are written in a pseudo-language which
actually works! The challenge DLL is able to either parse text files,
load compiled challenges, save challenges out as byte-code, start scripts, stop
tasks and so on.

### <a name="2"></a> 2 [File Format](file_format.md)

All valid Challenge Language files consist of four major sections, which must
occur in the order specified in this section.

### <a name="3"></a> 3 [Statements](statements.md)

Statements appear in the body section of scripts. There are many statements
available for you to use. Each of them results in something happening somewhere!
Statements do not return a result.

### <a name="4"></a> 4 [Exceptions](exceptions.md)

Exceptions let you break out of a code block as soon as something happens,
rather than checking something only at the beginning or end of a code block.
Most often used with loops.

### <a name="5"></a> 5 [Variable Assignment](variable_assignment.md)

Variables are where you store values or game [object](objects.md)s. Assignments
are followed by [expression](expressions.md)s.

### <a name="6"></a> 6 [Conditions](conditions.md)

A [condition](conditions.md) is something that is either true or false. It is
used primarily for [if block](statements.md#3.29.1)s,
[while loop](statements.md#3.29.2)s and [wait until](statements.md#3.25.1).

### <a name="7"></a> 7 [Expression Statements](expression_statements.md)

These can be used as either [expression](expressions.md#12)s or as
[statements](statements.md#3)

### <a name="8"></a> 8 [Objects](objects.md)

These functions always return an [object](objects.md#8) in the game. They mostly
deal with either creating an [object](objects.md#8) or finding an
[object](objects.md#8) in the world.

### <a name="9"></a> 9 [Object Statements](object_statements.md)

These can be used as either [statements](statements.md#3) or as
[object](objects.md#8)s.

### <a name="10"></a> 10 [Constants](constants.md)

When you're doing things like playing animations, setting or getting the states
of [object](objects.md#8)s and things like that, you'll need to know the names
of the [constant](constants.md#10)s which the game uses to refer to things.
There are absolutely hundreds of these, so we shan't enumerate them here. See a
programmer if you want to know the [constant](constants.md#10)s which are
available to you. As we have previously seen, you can define your own
[constant](constants.md#10)s, both locally and globally, to abbreviate these
unwieldy names, making your scripts more readable.

### <a name="11"></a> 11 [Position](position.md)

A reference to a coordinate in game.

### <a name="12"></a> 12 [Expressions](expressions.md)

Expressions have a numerical value. They may be just a number, a value gotten from an [object](objects.md#8) or the result of a complicated arithmetic equation. In this section we introduce all the different forms of [expression](expressions.md#12) available in the challenge language.

### <a name="13"></a> 13 [Spirit Type](spirit_type.md)

Differentiates between the evil spirit and the good spirit.

### <a name="14"></a> 14 variable

references an existing variable, or uses a reference to get to a variable.

### <a name="15"></a> 15 variable array

references an existing variable from an array.

`MyArray[3]`

### <a name="16"></a> 16 variable array

references an existing variable from an array.

`MyArray[MyVariable]`

### <a name="17"></a> 17 Identifier
