# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="11"></a> 11 Position

A reference to a coordinate in game.

See also:

*   [Statements](statements.md#3)
*   [Conditions](conditions.md#6)
*   [Objects](objects.md#8)
*   [Constants](constants.md#10)
*   [Expressions](expressions.md#12)

<a name="11.1">

### 11.1 Finding a specific position

</a>

Finding a specific position

1.  [{expression,expression,expression}](#11.1.1)
2.  [{expression,expression}](#11.1.2)
3.  [{object}](#11.1.3)
4.  [camera position](#11.1.4)
5.  [camera focus](#11.1.5)
6.  [stored camera position](#11.1.6)
7.  [stored camera focus](#11.1.7)
8.  [landing position of object velocity heading coord_expression speed expression](#11.1.8)
9.  [hand position](#11.1.9)
10.  [left_right clicked position](#11.1.10)
11.  [facing camera position distance expression](#11.1.11)
12.  [last player expression spell cast position](#11.1.12)
13.  [get target from position to position distance metres angle degrees](#11.1.13)
14.  [arse position of object](#11.1.14)
15.  [belly position of object](#11.1.15)
16.  [focus position of object](#11.1.16)
17.  [left_right hand position of object](#11.1.17)
18.  [destination of object](#11.1.18)
19.  [extra position expression of object](#11.1.19)
20.  [get relative position of object to coord_expression](#11.1.20)
21.  [get nearest position at object influence ring from coord_expression](#11.1.21)
22.  [get relative position from object to coord_expression](#11.1.22)
23.  [get relative position from coord_expression facing coord_expression to coord_expression](#11.1.23)
24.  [get extra position string from object](#11.1.24)
25.  [get extra position string focus from object](#11.1.25)
26.  [get future position of epic miracle object with time expression seconds](#11.1.26)
27.  [get future focus of epic miracle object with time expression seconds](#11.1.27)

<a name="11.2">

### 11.2 Coordinate Arithmetic

</a>

Operators that have been overloaded to accept positions.

1.  [position + position](#11.2.1)
2.  [position - position](#11.2.2)
3.  [expression * position](#11.2.3)
4.  [position / expression](#11.2.4)
5.  [-position](#11.2.5)
6.  [(position)](#11.2.6)

* * *

<a name="11.1.1"></a>

#### <a name="11.1.1">11.1.1 {</a>[expression](expressions.md#12)}

{X,Z,Y} coordinate.

<a name="11.1.2"></a>

#### <a name="11.1.2">11.1.2 {</a>[expression](expressions.md#12)}

{X,Y} coordinate.

<a name="11.1.3"></a>

#### <a name="11.1.3">11.1.3 {</a>[object](objects.md#8)}

Position of an [object](objects.md#8).

<a name="11.1.4">

#### 11.1.4 camera position

</a>

The camera current position.

<pre>Camera position</pre>

<a name="11.1.5">

#### 11.1.5 camera focus

</a>

The current camera focus position.

<pre>camera focus</pre>

<a name="11.1.6">

#### 11.1.6 stored camera position

</a>

The last stored camera position.

<pre>stored camera position</pre>

<a name="11.1.7">

#### 11.1.7 stored camera focus

</a>

The current stored camera focus position.

<pre>stored camera focus</pre>

<a name="11.1.8"></a>

#### <a name="11.1.8">11.1.8 landing position of</a> [object](objects.md#8)

If an [object](objects.md#8) is something with Physics when using the velocty script function it applies a velocity to it towards a position. This calcs the approximate position a projectile will land excluding the effect of wind, other collisions etc.

<pre>landing position of MyMan velocity heading [ThrowData] speed 10.1</pre>

<a name="11.1.9">

#### 11.1.9 hand position

</a>

Returns the last know multiplayer friendly position of the hand, or if single player the current hand position.

<pre>hand position</pre>

<a name="11.1.10">

#### 11.1.10 left_right clicked position

</a>

Returns the last known position the hand clicked. (0,0,0 if never clicked)

<pre>left clicked position</pre>

<a name="11.1.11"></a>

#### <a name="11.1.11">11.1.11 facing camera position distance</a> [expression](expressions.md#12)

Returns a position facing the camera position at a distance away.

<pre>facing camera position distance [expression](expressions.md#12)</pre>

<a name="11.1.12"></a>

#### <a name="11.1.12">11.1.12 last player</a> [expression](expressions.md#12) spell cast position

Returns the position the player last cast a spell.

<pre>last player 1 spell cast position</pre>

<a name="11.1.13">

#### 11.1.13 get target from position to position distance metres angle degrees

</a>

Gets a position in the direction from/to at a defined distance and relative angle to the from/to. A vector is created from from/to and then using this as direction vector, a relative angle to it in the x/z axis, and distance along this said angle (+/- 0-> 180 degrees), I return a position which holds the distances in the x, y, and z.

<pre>get target from {LostBrother} to {Sister} distance 5 angle 210</pre>

<a name="11.1.14"></a>

#### <a name="11.1.14">11.1.14 arse position of</a> [object](objects.md#8)

Returns the position of the [object](objects.md#8)s arse.

<pre>arse position of MyCreature</pre>

<a name="11.1.15"></a>

#### <a name="11.1.15">11.1.15 belly position of</a> [object](objects.md#8)

Returns the position of the [object](objects.md#8)s belly.

<pre>belly position of MyCreature</pre>

<a name="11.1.16"></a>

#### <a name="11.1.16">11.1.16 focus position of</a> [object](objects.md#8)

Returns the position of the [object](objects.md#8)s focus.

<pre>focus position of MyCreature</pre>

<a name="11.1.17"></a>

#### <a name="11.1.17">11.1.17 left_right hand position of</a> [object](objects.md#8)

Returns the position of the [object](objects.md#8)s hand (left or right).

<pre>left hand position of MyCreature</pre>

<a name="11.1.18"></a>

#### <a name="11.1.18">11.1.18 destination of</a> [object](objects.md#8)

Position of an [object](objects.md#8)s destination.

<a name="11.1.19"></a>

#### <a name="11.1.19">11.1.19 extra position</a> [expression](expressions.md#12)

Some [object](objects.md#8)s have extra positions (EPS) held in their mesh. This returns their position. There can be more than 1 ep in a mesh so you pass the offset starting at zero.

<pre>extra position 0 of [object](objects.md#8)</pre>

<a name="11.1.20"></a>

#### <a name="11.1.20">11.1.20 get relative position of</a> [object](objects.md#8)

Gives a relative position of a world position relative to a passed [object](objects.md#8)

<pre>MyPos=marker at get relative position of Villager1 to {MyWorldPos}</pre>

<a name="11.1.21"></a>

#### <a name="11.1.21">11.1.21 get nearest position at</a> [object](objects.md#8)

Gets the nearest position on the given towns influence ring, to the position specified.

<pre>get nearest position at MyTown influence ring from {1900, 100, 1036}</pre>

<a name="11.1.22"></a>

#### <a name="11.1.22">11.1.22 get relative position from</a> [object](objects.md#8)

Gets the world position from an [object](objects.md#8)

<pre>MyPos=marker at get world position from Villager1 to {MyRelPos}</pre>

<a name="11.1.23"></a>

#### <a name="11.1.23">11.1.23 get relative position from</a> [coord_expression](position.md#11)

Gets the world position from an [object](objects.md#8)

<pre>MyPos=marker at get world position from {MyPos} facing {MyPosfacing} to {MyRelPos}</pre>

<a name="11.1.24"></a>

#### <a name="11.1.24">11.1.24 get extra position string from</a> [object](objects.md#8)

Gets the extra position of a given [object](objects.md#8) by the given string

<pre>MyHouseDoor = get extra position "BWS_EP_DOOR" from MyHouse</pre>

<a name="11.1.25"></a>

#### <a name="11.1.25">11.1.25 get extra position string focus from</a> [object](objects.md#8)

Gets the extra position focus of a given [object](objects.md#8) by the given string

<pre>MyHouseDoor = get extra position "BWS_EP_DOOR" focus from MyHouse</pre>

<a name="11.1.26"></a>

#### <a name="11.1.26">11.1.26 get future position of epic miracle</a> [object](objects.md#8) seconds

Gets the future position of an epic miracle after a given time

<pre>MyEarthquakePos = marker at future position of epic miracle MyEarthquake with time 50 seconds</pre>

<a name="11.1.27"></a>

#### <a name="11.1.27">11.1.27 get future focus of epic miracle</a> [object](objects.md#8) seconds

Gets the future focus of an epic miracle after a given time

<pre>MyEarthquakePos = marker at future focus of epic miracle MyEarthquake with time 50 seconds</pre>

<a name="11.2.1">

#### 11.2.1 position + position

</a>

Adds the {X,Z,Y} components of the two positions.

<a name="11.2.2">

#### 11.2.2 position - position

</a>

Subtracts the {X,Z,Y} components of the two positions.

<a name="11.2.3"></a>

#### <a name="11.2.3">11.2.3</a> [expression](expressions.md#12) * position

Multiplies the {X,Z,Y} components of the position by the [expression](expressions.md#12) does not work.

<a name="11.2.4"></a>

#### <a name="11.2.4">11.2.4 position /</a> [expression](expressions.md#12)

Divides the {X,Z,Y} components of the position by the [expression](expressions.md#12) / position does not work.

<a name="11.2.5">

#### 11.2.5 -position

</a>

Opposite position. Hasn't been used for a long time, but should probably work.

<a name="11.2.6">

#### 11.2.6 (position)

</a>

calculates the position in the brackets before any other position

<pre>{House} + ({Offset}/OffsetRatio)</pre>
