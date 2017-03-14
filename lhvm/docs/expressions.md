# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="12"></a> 12 Expressions

Expressions have a numerical value. They may be just a number, a value gotten from an [object](objects.md#8) available in the challenge language.

See also:

*   [Statements](statements.md#3)
*   [Conditions](conditions.md#6)
*   [Objects](objects.md#8)
*   [Constants](constants.md#10)
*   [Position](position.md#11)

<a name="12.1">

#### 12.1 real

</a>

A real number is nothing more than an immediate numerical value. It is the simplest form of [expression](expressions.md#12).

<pre>3.14159</pre>

<a name="12.2">

#### 12.2 variable

</a>

You may use a variable as an [expression](expressions.md#12). The current value of the variable will be used.

<pre>Value</pre>

<a name="12.3">

### 12.3 Expression Arithmetic

</a>

These are simple arithmatic operators you can use on [expression](expressions.md#12)s.

1.  [expression + expression](#12.3.1)
2.  [expression - expression](#12.3.2)
3.  [expression * expression](#12.3.3)
4.  [expression / expression](#12.3.4)
5.  [expression ^ expression](#12.3.5)
6.  [expression ¬& expression](#12.3.6)
7.  [expression % expression](#12.3.7)
8.  [-expression](#12.3.8)
9.  [variable constant](#12.3.9)
10.  [tan expression](#12.3.10)
11.  [sin expression](#12.3.11)
12.  [cos expression](#12.3.12)
13.  [arctan expression](#12.3.13)
14.  [arctan2 expression over exression](#12.3.14)
15.  [arcsin expression](#12.3.15)
16.  [arccos expression](#12.3.16)
17.  [sqrt expression](#12.3.17)
18.  [abs expression](#12.3.18)
19.  [(expression)](#12.3.19)
20.  [number from expression to expression](#12.3.20)

<a name="12.4">

### 12.4 Expressions dealing with creatures

</a>

These [expression](expressions.md#12)s get a real number from a creature.

1.  [get last platoon attacked by object](#12.4.1)
2.  [get last siege weapon attacked by object](#12.4.2)
3.  [get creature object CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE](#12.4.3)
4.  [get creature objetc role](#12.4.4)
5.  [get object interaction magnitude](#12.4.5)
6.  [get object desire constant for object](#12.4.6)
7.  [get creature object energy](#12.4.7)
8.  [get creature object feedback](#12.4.8)
9.  [get number of constant for object](#12.4.9)
10.  [get object played percentage](#12.4.10)

<a name="12.5">

### 12.5 Time Expressions

</a>

These [expression](expressions.md#12) deal with time, both as it progresses in the game and out.

1.  [get moon percentage](#12.5.1)
2.  [get game time](#12.5.2)
3.  [get real time](#12.5.3)
4.  [get real day](#12.5.4)
5.  [get real weekday](#12.5.5)
6.  [get real month](#12.5.6)
7.  [get real year](#12.5.7)
8.  [time](#12.5.8)
9.  [get object time remaining](#12.5.9)
10.  [get object time since set](#12.5.10)
11.  [get countdown timer time](#12.5.11)

<a name="12.6">

### 12.6 Position Expressions

</a>

Getting Position and Distance information

1.  [land height at position](#12.6.1)
2.  [get distance from coord_expresison to coord_expression](#12.6.2)

<a name="12.7">

### 12.7 Miracle Expressions

</a>

Getting Miracle information both normal spells and epics.

1.  [get mana for spell constant](#12.7.1)
2.  [get player expression mana](#12.7.2)
3.  [get player expression time since last spell cast](#12.7.3)
4.  [get object star constant](#12.7.4)
5.  [get star villager near position](#12.7.5)
6.  [get star abode near position](#12.7.6)

<a name="12.8">

### 12.8 Screen Position Expressions

</a>

Getting Screen Position information

1.  [mouse percentage across](#12.8.1)
2.  [mouse percentage down](#12.8.2)
3.  [coord position across](#12.8.3)
4.  [coord position down](#12.8.4)

<a name="12.9">

### 12.9 Camera Expressions

</a>

Getting Camera information

1.  [get distance ahead of camera](#12.9.1)
2.  [get inclusion distance](#12.9.2)
3.  [get camera altitude](#12.9.3)
4.  [get camera stage](#12.9.4)
5.  [get camera stage percentage complete](#12.9.5)
6.  [get camera path percentage complete](#12.9.6)

<a name="12.10">

### 12.10 Building Expressions

</a>

Getting information dealing with a Building

1.  [get population for constant](#12.10.1)
2.  [get current number of users in object](#12.10.2)
3.  [get total number of users in object](#12.10.3)
4.  [get abode object base productivity](#12.10.4)
5.  [get number of constant living in abode object](#12.10.5)
6.  [get ore in mine object](#12.10.6)

<a name="12.11">

### 12.11 Influence Expressions

</a>

Getting Influence information

1.  [influence at position](#12.11.1)
2.  [get player expression influence at position](#12.11.2)

<a name="12.12">

### 12.12 Alignment Expressions

</a>

Getting Alignment information

1.  [alignment of player](#12.12.1)
2.  [get player expression alignment](#12.12.2)
3.  [get ground alignment at coord_expression](#12.12.3)

<a name="12.13">

### 12.13 Game Expressions

</a>

Getting Game information

1.  [get land number](#12.13.1)
2.  [number of mouse buttons](#12.13.2)
3.  [persistent data constant](#12.13.3)
4.  [get current tribute](#12.13.4)
5.  [interface action constant available](#12.13.5)
6.  [get water height](#12.13.6)

<a name="12.14">

### 12.14 Impressiveness Expressions

</a>

Getting Impressiveness information

1.  [get player expression impressiveness](#12.14.1)
2.  [get town object impressiveness](#12.14.2)

<a name="12.15">

### 12.15 Text Database Expressions

</a>

Getting Text Database information

1.  [get id of group string](#12.15.1)
2.  [get number of lines in expression](#12.15.2)

<a name="12.16">

### 12.16 Resource Expressions

</a>

Getting resource information

1.  [get amount of constant carried by villager object](#12.16.1)
2.  [get town object constant total](#12.16.2)
3.  [get resource constant in object](#12.16.3)

<a name="12.17">

### 12.17 Generic Expressions

</a>

Get functions for Generic [object](objects.md#8)s

1.  [get constant of object](#12.17.1)
2.  [get object temperature](#12.17.2)
3.  [get object player](#12.17.3)
4.  [get object altitude](#12.17.4)
5.  [get object help](#12.17.5)
6.  [get number of times object fisted](#12.17.6)
7.  [get number of player who killed object](#12.17.7)
8.  [get slowest speed in object](#12.17.8)

<a name="12.18">

### 12.18 Music Expressions

</a>

Expressions dealing with Music

1.  [get object music distance](#12.18.1)
2.  [get music string event string time](#12.18.2)

<a name="12.19">

### 12.19 Army Expressions

</a>

Get functions for army [object](objects.md#8)s

1.  [get number of villagers in army object](#12.19.1)
2.  [get number of villagers in a platoon](#12.19.2)
3.  [get number of platoons in army object](#12.19.3)
4.  [get number of constant in army object](#12.19.4)
5.  [get army size in town object](#12.19.5)
6.  [get army unit type ARMY_UNIT_TYPE number in town object](#12.19.6)
7.  [get idle platoons in town object](#12.19.7)
8.  [get platoon object experience](#12.19.8)
9.  [get town object platoon type constant at ratio expression](#12.19.9)
10.  [get villagers of tribe constant nearest position radius expression](#12.19.10)
11.  [get platoon object member at offset expression](#12.19.11)
12.  [get platoon stat constant of MyPlatoon](#12.19.12)
13.  [get movement stat constant of object](#12.19.13)
14.  [get army unit type of platoon object](#12.19.14)
15.  [get player expression most experienced platoon](#12.19.15)
16.  [get player expression most experienced melee platoon](#12.19.16)
17.  [get player expression most experienced ranged platoon](#12.19.17)
18.  [get player expression most experienced siege weapon](#12.19.18)
19.  [get army object most experienced platoon](#12.19.19)
20.  [get number of men in platoon object](#12.19.20)
21.  [get number of women in platoon object](#12.19.21)
22.  [get number of action constant in platoon action queue](#12.19.22)
23.  [get size of platoon action queue](#12.19.23)
24.  [get current platoon action](#12.19.24)
25.  [get first index of action constant in platoon action queue](#12.19.25)
26.  [get number of action constant in siege weapon object action queue](#12.19.26)
27.  [get size of siege weapon object action queue](#12.19.27)
28.  [get current siege weapon object action](#12.19.28)
29.  [get first index of action constant in siege weapon object action queue](#12.19.29)
30.  [get town object siege weapon type constant number](#12.19.30)
31.  [get number of soldiers in town object](#12.19.31)
32.  [get number of platoon of constant in town object](#12.19.32)
33.  [get number of platoons belonging to player expression](#12.19.33)
34.  [get number of platoon warriors belonging to player expression](#12.19.34)
35.  [get amount of constant for platoon constant of size expression](#12.19.35)
36.  [get amount of constant for siege weapon constant](#12.19.36)
37.  [get number of platoon of player expression at coord_expression radius expression](#12.19.37)
38.  [get default size for platoon constant](#12.19.38)
39.  [how many soldiers can get on wall object](#12.19.39)
40.  [get time since player expression attacked object](#12.19.40)

<a name="12.20">

### 12.20 Town Expressions

</a>

Towns are [object](objects.md#8)s, have some very specific functionality

1.  [get object desire constant](#12.20.1)
2.  [get research ARTEFACT available](#12.20.2)
3.  [get number of type types in object](#12.20.3)
4.  [get number of built constant in object](#12.20.4)
5.  [get number of unbuilt constant in object](#12.20.5)
6.  [get player expression town total](#12.20.6)
7.  [size of object](#12.20.7)
8.  [adult size of object](#12.20.8)
9.  [capacity of object](#12.20.9)
10.  [adult capacity of object](#12.20.10)
11.  [poisoned size of object](#12.20.11)
12.  [get building and villager health total in object](#12.20.12)
13.  [get town object desire for constant](#12.20.13)
14.  [get town object desire activation for constant](#12.20.14)
15.  [get tech level of town object](#12.20.15)

<a name="12.21">

### 12.21 Expressions dealing with depth of field

</a>

These [statements](statements.md#3) are mostly used for saving/restoring the depth of field after changing it.

See also:

*   [Statements controlling the depth of field](statements.md#3.20)

1.  [get depth of field strength multiplier](#12.21.1)
2.  [get depth of field distance multiplier](#12.21.2)

<a name="12.22">

### 12.22 Statistics events

</a>

Gets the statistics/event details.

1.  [get total of stat constant](#12.22.1)
2.  [get number of disciple constant in town object](#12.22.2)

<a name="12.23">

### 12.23 Town stauts

</a>

Gets info regarding the towns stauts

1.  [get town object previous player](#12.23.1)
2.  [get player capturing town](#12.23.2)
3.  [get time since town object last captured](#12.23.3)
4.  [get time since last migration started from town object](#12.23.4)
5.  [get time since last migration arrived at town object](#12.23.5)
6.  [get time since last migration accepted at town object](#12.23.6)
7.  [get number of migrations accepted by town object](#12.23.7)

<a name="12.24">

### 12.24 Toolbar and Icon events

</a>

Gets toolbar and icon info

1.  [get toolbar menu](#12.24.1)
2.  [get toolbar root menu](#12.24.2)
3.  [get toolbar state](#12.24.3)
4.  [create world icon consant on object with arrow constant (x offset expression) (y offset expression)](#12.24.4)
5.  [get time since last toolbar button clicked](#12.24.5)

<a name="12.25">

### 12.25 Migration events

</a>

Gets migration info

1.  [get migration threshold for town object and town object](#12.25.1)
2.  [get town object migrating](#12.25.2)
3.  [get migration between object and object](#12.25.3)
4.  [get next town percentage to migrate to town object](#12.25.4)

* * *

<a name="12.3.1"></a>

#### <a name="12.3.1">12.3.1</a> [expression](expressions.md#12)

Add two [expression](expressions.md#12)s together.

<pre>Value + 3.14149</pre>

<a name="12.3.2"></a>

#### <a name="12.3.2">12.3.2</a> [expression](expressions.md#12)

Subtract an [expression](expressions.md#12) from another value

<pre>alignment of player - SCRIPT_OBJECT_PROPERTY_TYPE_HEALTH of Sister</pre>

<a name="12.3.3"></a>

#### <a name="12.3.3">12.3.3</a> [expression](expressions.md#12)

Mulitplies two [expression](expressions.md#12)s together.

<a name="12.3.4"></a>

#### <a name="12.3.4">12.3.4</a> [expression](expressions.md#12)

Divides an [expression](expressions.md#12).

<a name="12.3.5"></a>

#### <a name="12.3.5">12.3.5</a> [expression](expressions.md#12)

raises an [expression](expressions.md#12)

<a name="12.3.6"></a>

#### <a name="12.3.6">12.3.6</a> [expression](expressions.md#12)

bitwise AND

<a name="12.3.7"></a>

#### <a name="12.3.7">12.3.7</a> [expression](expressions.md#12)

Get the modulas of the two values. As we work with floats the remainder includes the decimal point info. eg. 10.54 %8 gives a value of 2.54 exm: 1.54%8

<a name="12.3.8"></a>

#### <a name="12.3.8">12.3.8 -</a>[expression](expressions.md#12)

mulitplies the [expression](expressions.md#12) by -1

<a name="12.3.9"></a>

#### <a name="12.3.9">12.3.9 variable</a> [constant](constants.md#10)

converts a [constant](constants.md#10)

<a name="12.3.10"></a>

#### <a name="12.3.10">12.3.10 tan</a> [expression](expressions.md#12)

Get the tangent of the [expression](expressions.md#12) in degrees.

<pre>tan MyAngle</pre>

<a name="12.3.11"></a>

#### <a name="12.3.11">12.3.11 sin</a> [expression](expressions.md#12)

Get the Sine of the [expression](expressions.md#12) in degrees.

<pre>sin MyAngle</pre>

<a name="12.3.12"></a>

#### <a name="12.3.12">12.3.12 cos</a> [expression](expressions.md#12)

Get the Cosine of the [expression](expressions.md#12) in degrees.

<pre>cos MyAngle</pre>

<a name="12.3.13"></a>

#### <a name="12.3.13">12.3.13 arctan</a> [expression](expressions.md#12)

Get the arctangent of the [expression](expressions.md#12) in degrees.

<pre>arctan MyAngle</pre>

<a name="12.3.14"></a>

#### <a name="12.3.14">12.3.14 arctan2</a> [expression](expressions.md#12) over exression

Get the arctangent of the [expression](expressions.md#12) in degrees. Like atan2 in c you pass the dy and dx arctan2 of y/x returned -180 ->+180 as it looks at which quadrant

<pre>arctan2 Dy and Dx</pre>

<a name="12.3.15"></a>

#### <a name="12.3.15">12.3.15 arcsin</a> [expression](expressions.md#12)

Get the Arcsine of the [expression](expressions.md#12) in degrees.

<pre>arcsin MyAngle</pre>

<a name="12.3.16"></a>

#### <a name="12.3.16">12.3.16 arccos</a> [expression](expressions.md#12)

Get the Arccosine of the [expression](expressions.md#12) in degrees.

<pre>arccos MyAngle</pre>

<a name="12.3.17"></a>

#### <a name="12.3.17">12.3.17 sqrt</a> [expression](expressions.md#12)

Get the square root of the [expression](expressions.md#12) in degrees.

<pre>sqrt MyValue</pre>

<a name="12.3.18"></a>

#### <a name="12.3.18">12.3.18 abs</a> [expression](expressions.md#12)

Abs of a value means it returns the value guarenteed back as positive. eg. -10 -> 10 and 10 -> 10

<pre>abs MyValue</pre>

<a name="12.3.19"></a>

#### <a name="12.3.19">12.3.19 (</a>[expression](expressions.md#12))

calculate whats in the brackets first

<pre>(5 + 5)/10</pre>

<a name="12.3.20"></a>

#### <a name="12.3.20">12.3.20 number from</a> [expression](expressions.md#12)

Gets a random number between two values.

<a name="12.4.1"></a>

#### <a name="12.4.1">12.4.1 get last platoon attacked by</a> [object](objects.md#8)

Gets the last platoon attacked by the given creature

<pre>LastPlatoon = get last platoon attacked by MyCreature</pre>

<a name="12.4.2"></a>

#### <a name="12.4.2">12.4.2 get last siege weapon attacked by</a> [object](objects.md#8)

Gets the last siege weapon attacked by the given creature

<pre>LastWeapon = get last siege weapon attacked by MyCreature</pre>

<a name="12.4.3"></a>

#### <a name="12.4.3">12.4.3 get creature</a> [object](objects.md#8) CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE

Finds out what the current value of a transitional attribute is. Used mostly to save an an attribute before modifying it so that you can later reset it. The values it can use are:
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_ALIGNMENT
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_FATNESS
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_STRENGTH
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_SIZE

<pre>OldAlignment = get creature MyCreature CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_ALIGNMENT</pre>

See also:

*   [set creature object CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE expression opt_time](statements.md#3.17.48)

<a name="12.4.4">

#### 12.4.4 get creature objetc role

</a>

gets the current role of the specified creature

<pre>get creature AztecCreature role</pre>

<a name="12.4.5"></a>

#### <a name="12.4.5">12.4.5 get</a> [object](objects.md#8) interaction magnitude

Gets the interaction value on an [object](objects.md#8), (Creature) > 0 is Nice stroke, < 0 is slap! Hasn't been used in a long time. May not work.

<pre>get [object](objects.md#8) interaction magnitude</pre>

<a name="12.4.6"></a>

#### <a name="12.4.6">12.4.6 get</a> [object](objects.md#8)

Gets [object](objects.md#8)

<pre>get MyCreature desire HUNGER for Cow</pre>

<a name="12.4.7"></a>

#### <a name="12.4.7">12.4.7 get creature</a> [object](objects.md#8) energy

Gets the creatures energy

<pre>CurrentEnergy = get creature MyCreature energy</pre>

<a name="12.4.8"></a>

#### <a name="12.4.8">12.4.8 get creature</a> [object](objects.md#8) feedback

Gets the creatures net feedback this session

<pre>NetFeedback = get creature MyCreature feedback</pre>

<a name="12.4.9"></a>

#### <a name="12.4.9">12.4.9 get number of</a> [constant](constants.md#10)

Get number of times the creature has preformed the specified action.

<a name="12.4.10"></a>

#### <a name="12.4.10">12.4.10 get</a> [object](objects.md#8) played percentage

gets the [object](objects.md#8) played percentage for the current anim it is doing

<pre>get MyCreature played percentage</pre>

<a name="12.5.1">

#### 12.5.1 get moon percentage

</a>

gets the in game phase of the moon. hasn't been used for a long time and may not work.

<a name="12.5.2">

#### 12.5.2 get game time

</a>

Gets the in game worlds time.

<pre>get game time</pre>

<a name="12.5.3">

#### 12.5.3 get real time

</a>

gets the time of day on the computer's clock. This hasn't been used in a long time and may not work.

<a name="12.5.4">

#### 12.5.4 get real day

</a>

gets the day on the computer calendar. This hasn't been used in a long time and may not work.

<a name="12.5.5">

#### 12.5.5 get real weekday

</a>

gets what day of the week it is from teh computers calendar. This hasn't been used in a long time and may not work.

<a name="12.5.6">

#### 12.5.6 get real month

</a>

gets the month from the computers calendar. This hasn't been used in a long time and may not work.

<a name="12.5.7">

#### 12.5.7 get real year

</a>

gets the year from the computers calendar. This hasn't been used in a long time and may not work.

<a name="12.5.8">

#### 12.5.8 time

</a>

The global number of game turns the script has been processed through.

<a name="12.5.9"></a>

#### <a name="12.5.9">12.5.9 get</a> [object](objects.md#8) time remaining

This timer is not displayed. This function tells you how much time is left on the countdown

<pre>Time=get [object](objects.md#8) time remaining</pre>

<a name="12.5.10"></a>

#### <a name="12.5.10">12.5.10 get</a> [object](objects.md#8) time since set

This timer is not displayed. This function tells you how much time since it was set/created.

<pre>Time=get [object](objects.md#8) time since set</pre>

<a name="12.5.11">

#### 12.5.11 get countdown timer time

</a>

gets the countdown time time as displayed

<pre>get countdown timer time</pre>

<a name="12.6.1">

#### 12.6.1 land height at position

</a>

Gets the height the land is above sea level.

<pre>land height at {LostBrother}</pre>

<a name="12.6.2"></a>

#### <a name="12.6.2">12.6.2 get distance from coord_expresison to</a> [coord_expression](position.md#11)

Gets the distance from one position to another position.

<pre>get distance from camera position to [Mother]</pre>

<a name="12.7.1"></a>

#### <a name="12.7.1">12.7.1 get mana for spell</a> [constant](constants.md#10)

Gets the mana required for a spell

<pre>get mana for spell SPELL_HEAL_LEVEL_1</pre>

<a name="12.7.2"></a>

#### <a name="12.7.2">12.7.2 get player</a> [expression](expressions.md#12) mana

Gets the mana of a player

<pre>Get player 0 mana total</pre>

<a name="12.7.3"></a>

#### <a name="12.7.3">12.7.3 get player</a> [expression](expressions.md#12) time since last spell cast

gets the time since the player last cast a spell

<pre>get player 1 time since last spell cast</pre>

<a name="12.7.4"></a>

#### <a name="12.7.4">12.7.4 get</a> [object](objects.md#8)

returns the [object](objects.md#8) best placed for cutscenes in an epic spell script

<pre>Nymph1 = get MySiren star EPIC_OBJECT_NYMPH</pre>

<a name="12.7.5">

#### 12.7.5 get star villager near position

</a>

returns the star villager for the current cast miracle nearest the given position

<pre>MyStar = get star villager for MyEarthquake near {MyPos}</pre>

<a name="12.7.6">

#### 12.7.6 get star abode near position

</a>

returns the star abode for the current cast miracle nearest the given position

<pre>MyStar = get star abode near {MyPos}</pre>

<a name="12.8.1">

#### 12.8.1 mouse percentage across

</a>

gets the 0->1 amount the mouse pointer is across the screen

<pre>mouse percentage across</pre>

<a name="12.8.2">

#### 12.8.2 mouse percentage down

</a>

gets the 0->1 amount the mouse pointer is down the screen

<pre>mouse percentage down</pre>

<a name="12.8.3">

#### 12.8.3 coord position across

</a>

gets how far across the screen an [object](objects.md#8) is. Scale is 0-1

<pre>{MyPos} position across</pre>

<a name="12.8.4">

#### 12.8.4 coord position down

</a>

gets how far across the screen an [object](objects.md#8) is. Scale is 0-1

<pre>{MyPos} position down</pre>

<a name="12.9.1">

#### 12.9.1 get distance ahead of camera

</a>

Gets the distance between the camera and the world point at the center of the screen

<pre>get distance ahead of camera</pre>

<a name="12.9.2">

#### 12.9.2 get inclusion distance

</a>

The game limits your camera area (inclusion) at different times, this function tells you how near the edge you are.

<pre>get inclusion distance</pre>

<a name="12.9.3">

#### 12.9.3 get camera altitude

</a>

gets the altitude of the camera

<pre>get camera altitude</pre>

<a name="12.9.4">

#### 12.9.4 get camera stage

</a>

gets the stage of the camera path

<pre>MyVar = get camera stage</pre>

<a name="12.9.5">

#### 12.9.5 get camera stage percentage complete

</a>

gets the percent completion of the current camera stage

<pre>MyVar = get camera stage percentage complete</pre>

<a name="12.9.6">

#### 12.9.6 get camera path percentage complete

</a>

gets the percent completion of the camera path

<pre>MyVar = get camera path percentage complete</pre>

<a name="12.10.1"></a>

#### <a name="12.10.1">12.10.1 get population for</a> [constant](constants.md#10)

Gets the population requirement for a tech level (GameBalanceBuilding.h)

<pre>VillagersNeeded = get population for BUILDINGPREREQ_BALANCE_TYPE_AZTEC_CITY_CENTRE</pre>

<a name="12.10.2"></a>

#### <a name="12.10.2">12.10.2 get current number of users in</a> [object](objects.md#8)

returns the current number of users for a given [object](objects.md#8)

<pre>MyVal = get current number of users in MonsterMine</pre>

<a name="12.10.3"></a>

#### <a name="12.10.3">12.10.3 get total number of users in</a> [object](objects.md#8)

returns the total number of users for a given [object](objects.md#8)

<pre>MyVal = get total number of users in MonsterMine</pre>

<a name="12.10.4"></a>

#### <a name="12.10.4">12.10.4 get abode</a> [object](objects.md#8) base productivity

gets the base productibity of the given abode

<pre>get abode MyHouse base productivity</pre>

<a name="12.10.5"></a>

#### <a name="12.10.5">12.10.5 get number of</a> [constant](constants.md#10)

gets the number of people living in a house

<pre>get number of CHILDREN living in abode MyHouse</pre>

<a name="12.10.6"></a>

#### <a name="12.10.6">12.10.6 get ore in mine</a> [object](objects.md#8)

returns the amount of ore in a mine

<pre>get ore in mine MM_Mine</pre>

<a name="12.11.1">

#### 12.11.1 influence at position

</a>

You can find out the strength of the player's influence at a particular position. influence can be 'influence' or 'raw influence' the raw version means excluding the player allies influence.

<pre>influence at {Sister}</pre>

<a name="12.11.2"></a>

#### <a name="12.11.2">12.11.2 get player</a> [expression](expressions.md#12) influence at position

You can find out the strength of the given player's influence at a particular position.

<pre>get player 1 influence at {Sister}</pre>

<a name="12.12.1">

#### 12.12.1 alignment of player

</a>

The current alignment of the player is a number from -1 to 1.

<pre>alignment of player</pre>

<a name="12.12.2"></a>

#### <a name="12.12.2">12.12.2 get player</a> [expression](expressions.md#12) alignment

The current alignment any player is a number from -1 to 1.

<pre>get player 1 alignment</pre>

<a name="12.12.3"></a>

#### <a name="12.12.3">12.12.3 get ground alignment at</a> [coord_expression](position.md#11)

The current alignment of the ground at a position. Range is -1 to 1.

<pre>MyGroundAlignment = get ground alignment at {MyPos}</pre>

<a name="12.13.1">

#### 12.13.1 get land number

</a>

gets the land number, as defined in the bwe

<pre>get land number</pre>

<a name="12.13.2">

#### 12.13.2 number of mouse buttons

</a>

gets the number of mouse buttons

<pre>number of mouse buttons</pre>

<a name="12.13.3"></a>

#### <a name="12.13.3">12.13.3 persistent data</a> [constant](constants.md#10)

gets the value of persistent data, created by scripters. Hasn't been used for a long time. May not work.

<pre>persistent data PERSISTANT_VALUE_EXAMPLE</pre>

<a name="12.13.4">

#### 12.13.4 get current tribute

</a>

gets current amount of reward given to the player

<pre>Reward = get current tribute</pre>

<a name="12.13.5"></a>

#### <a name="12.13.5">12.13.5 interface action</a> [constant](constants.md#10) available

returns whether or not the given interface action is available. See GameBalanceGeneral.h (MANACOST_BALANCE_TYPE) for a list of interface actions

<pre>CanChangeTimeOfDay = interface action MANACOST_BALANCE_TYPE_ENTERTIMECHANGE available</pre>

<a name="12.13.6">

#### 12.13.6 get water height

</a>

returns the height of the water

<pre>get water height</pre>

<a name="12.14.1"></a>

#### <a name="12.14.1">12.14.1 get player</a> [expression](expressions.md#12) impressiveness

Get the total impressiveness of all towns owned by the player

<pre>get player 1 impressiveness</pre>

<a name="12.14.2"></a>

#### <a name="12.14.2">12.14.2 get town</a> [object](objects.md#8) impressiveness

Get the impressiveness of the town

<pre>Impress = get town MyTown impressiveness</pre>

<a name="12.15.1">

#### 12.15.1 get id of group string

</a>

Gets the number of available text entries in the given group

<pre>GroupID = get id of group "BW2T_SCRIPT_04FINAL_ADVISORS_OUTRO"</pre>

<a name="12.15.2"></a>

#### <a name="12.15.2">12.15.2 get number of lines in</a> [expression](expressions.md#12)

Gets the number of available text entries in the given group

<pre>get number of lines in GroupID</pre>

<a name="12.16.1"></a>

#### <a name="12.16.1">12.16.1 get amount of</a> [constant](constants.md#10)

gets the amount of a given resource that a villager is carrying

<pre>get amount of RESOURCE_TYPE_FOOD carried by villager MyVillager</pre>

<a name="12.16.2"></a>

#### <a name="12.16.2">12.16.2 get town</a> [object](objects.md#8) total

gets the total value of a given resource type from the given town

<pre>get town NorseTown RESOURCE_TYPE_FOOD total</pre>

<a name="12.16.3"></a>

#### <a name="12.16.3">12.16.3 get resource</a> [constant](constants.md#10)

Objects can have food and wood, this function returns the amount of food/wood an [object](objects.md#8) has.

<pre>get resource RESOURCE_TYPE_WOOD in Pit</pre>

<a name="12.17.1"></a>

#### <a name="12.17.1">12.17.1 get</a> [constant](constants.md#10)

Game [object](objects.md#8)s.

<pre>get SCRIPT_OBJECT_PROPERTY_TYPE_HEALTH of Sister</pre>

<a name="12.17.2"></a>

#### <a name="12.17.2">12.17.2 get</a> [object](objects.md#8) temperature

returns a given [object](objects.md#8)s temperature

<pre>MyTemp = get MyVillager temperature</pre>

<a name="12.17.3"></a>

#### <a name="12.17.3">12.17.3 get</a> [object](objects.md#8) player

returns a given [object](objects.md#8)s player

<pre>MyPlayer = get MyVillager player</pre>

<a name="12.17.4"></a>

#### <a name="12.17.4">12.17.4 get</a> [object](objects.md#8) altitude

gets the altitude of the given [object](objects.md#8)

<pre>get MyBall altitude</pre>

<a name="12.17.5"></a>

#### <a name="12.17.5">12.17.5 get</a> [object](objects.md#8) help

gets the [object](objects.md#8)s help. Hasn't been used in a long time. May not work.

<pre>get LostBrother help</pre>

<a name="12.17.6"></a>

#### <a name="12.17.6">12.17.6 get number of times</a> [object](objects.md#8) fisted

gets the number of times the given [object](objects.md#8) has been fisted

<pre>get number of times Stone fisted</pre>

<a name="12.17.7"></a>

#### <a name="12.17.7">12.17.7 get number of player who killed</a> [object](objects.md#8)

returns the number of the player that killed the given [object](objects.md#8)

<pre>FilthyMurderer = get number of player who killed MyLittleFella</pre>

<a name="12.17.8"></a>

#### <a name="12.17.8">12.17.8 get slowest speed in</a> [object](objects.md#8)

Gets the slowest speed in the container.

<pre>get slowest speed in Flock</pre>

<a name="12.18.1"></a>

#### <a name="12.18.1">12.18.1 get</a> [object](objects.md#8) music distance

Gets the distance some music can be heard from a music thing.

<pre>get [object](objects.md#8) music distance</pre>

<a name="12.18.2">

#### 12.18.2 get music string event string time

</a>

returns the time an event occurs in a tune in seconds

<pre>time_val = get music "tunename" event "eventname" time</pre>

<a name="12.19.1"></a>

#### <a name="12.19.1">12.19.1 get number of villagers in army</a> [object](objects.md#8)

Gets the total number of villagers in a given army

<pre>get number of villagers in army MyArmy</pre>

<a name="12.19.2">

#### 12.19.2 get number of villagers in a platoon

</a>

takes a passed platoon and returns the number of villagers

<pre>get number of villagers in platoon GreekArchers1</pre>

<a name="12.19.3"></a>

#### <a name="12.19.3">12.19.3 get number of platoons in army</a> [object](objects.md#8)

Gets the total number of platoons in a given army

<pre>get number of platoons in army MyArmy</pre>

<a name="12.19.4"></a>

#### <a name="12.19.4">12.19.4 get number of</a> [constant](constants.md#10)

Gets the total number of a particular type (ArmyUnitTypeEnum.h) in an army

<pre>get number of ARMY_UNIT_TYPE_RANGED in army MyArmy</pre>

<a name="12.19.5"></a>

#### <a name="12.19.5">12.19.5 get army size in town</a> [object](objects.md#8)

Gets the actual number of warriors in a town

<pre>get army size in town NorseTown1</pre>

<a name="12.19.6"></a>

#### <a name="12.19.6">12.19.6 get army unit type ARMY_UNIT_TYPE number in town</a> [object](objects.md#8)

Gets the number of warriors of ARMY_UNIT_TYPE in a town

<pre>get army unit type ARMY_UNIT_TYPE_MELEE number in town NorseTown1</pre>

<a name="12.19.7"></a>

#### <a name="12.19.7">12.19.7 get idle platoons in town</a> [object](objects.md#8)

Takes a town and returns the number of platoons that are unassigned within it

<pre>IdlePlatoons = get platoons in town NorseTown</pre>

<a name="12.19.8"></a>

#### <a name="12.19.8">12.19.8 get platoon</a> [object](objects.md#8) experience

returns the experience value of a given platoon

<pre>BigEvilPlatoonXP = get platoon BigEvilPlatoon experience</pre>

<a name="12.19.9"></a>

#### <a name="12.19.9">12.19.9 get town</a> [object](objects.md#8)

gets a towns conscript rate to a given value and troop type

<pre>get town MyTown platoon type ARMY_UNIT_TYPE_MELEE ratio</pre>

<a name="12.19.10"></a>

#### <a name="12.19.10">12.19.10 get villagers of tribe</a> [constant](constants.md#10)

gets the number of soldiers of a given tribe within an area

<pre>get villagers of tribe TRIBE_TYPE_GREEKS nearest {MyPos} radius 40</pre>

<a name="12.19.11"></a>

#### <a name="12.19.11">12.19.11 get platoon</a> [object](objects.md#8)

takes a platoon and an offset and returns the villager in the platoon at that offset

<pre>MyVillager = get platoon MyPlatoon member at offset 3</pre>

<a name="12.19.12"></a>

#### <a name="12.19.12">12.19.12 get platoon stat</a> [constant](constants.md#10) of MyPlatoon

gets the value of a particular platoon stat

<pre>get platoon stat PLATOON_STAT_MOVE_TO_ATTACK_DIST of MyPlatoon</pre>

<a name="12.19.13"></a>

#### <a name="12.19.13">12.19.13 get movement stat</a> [constant](constants.md#10)

gets the value of a platoons given movement stat

<pre>get movement stat FORMATION_MOVEMENT_STAT_AGENT_SPEED_MAX of MyPlatoon</pre>

<a name="12.19.14"></a>

#### <a name="12.19.14">12.19.14 get army unit type of platoon</a> [object](objects.md#8)

gets the type of the given platoon

<pre>get army unit type of platoon MyPlatoon</pre>

<a name="12.19.15"></a>

#### <a name="12.19.15">12.19.15 get player</a> [expression](expressions.md#12) most experienced platoon

gets the most experienced platoon of a given player

<pre>get player 0 most experienced platoon</pre>

<a name="12.19.16"></a>

#### <a name="12.19.16">12.19.16 get player</a> [expression](expressions.md#12) most experienced melee platoon

gets the most experienced melee platoon of a given player

<pre>get player 0 most experienced melee platoon</pre>

<a name="12.19.17"></a>

#### <a name="12.19.17">12.19.17 get player</a> [expression](expressions.md#12) most experienced ranged platoon

gets the most experienced ranged platoon of a given player

<pre>get player 0 most experienced ranged platoon</pre>

<a name="12.19.18"></a>

#### <a name="12.19.18">12.19.18 get player</a> [expression](expressions.md#12) most experienced siege weapon

gets the most experienced siege weapon of a given player

<pre>get player 0 most experienced siege weapon</pre>

<a name="12.19.19"></a>

#### <a name="12.19.19">12.19.19 get army</a> [object](objects.md#8) most experienced platoon

gets the most experienced platoon of a given player

<pre>get army HomeGuard most experienced platoon</pre>

<a name="12.19.20"></a>

#### <a name="12.19.20">12.19.20 get number of men in platoon</a> [object](objects.md#8)

gets the number of men in a given platoon

<pre>get number of men in platoon [object](objects.md#8)</pre>

<a name="12.19.21"></a>

#### <a name="12.19.21">12.19.21 get number of women in platoon</a> [object](objects.md#8)

gets the number of women in a given platoon

<pre>get number of women in platoon [object](objects.md#8)</pre>

<a name="12.19.22"></a>

#### <a name="12.19.22">12.19.22 get number of action</a> [constant](constants.md#10) in platoon action queue

returns the index number of the given action in the given platoons action queue

<pre>MyVal = get number of action PLATOON_AGENDA_ACTION_RETREAT in MyPlatoon action queue</pre>

<a name="12.19.23">

#### 12.19.23 get size of platoon action queue

</a>

returns the number of actions in the given platoons action queue

<pre>MyVal = get size of MyPlatoon action queue</pre>

<a name="12.19.24">

#### 12.19.24 get current platoon action

</a>

returns the action that the given platoon is currently doing

<pre>MyPlatoonAction = get current MyPlatoon action</pre>

<a name="12.19.25"></a>

#### <a name="12.19.25">12.19.25 get first index of action</a> [constant](constants.md#10) in platoon action queue

returns the first index number of the given action in the given platoons action queue

<pre>MyVal = get first index of action PLATOON_AGENDA_ACTION_RETREAT in MyPlatoon action queue</pre>

<a name="12.19.26"></a>

#### <a name="12.19.26">12.19.26 get number of action</a> [constant](constants.md#10) action queue

returns the index number of the given action in the given siege weapons action queue

<pre>MyVal = get number of action SIEGEWEAPON_AGENDA_ACTION_FACE_POSITION in siege weapon MySiegeWeapon action queue</pre>

<a name="12.19.27"></a>

#### <a name="12.19.27">12.19.27 get size of siege weapon</a> [object](objects.md#8) action queue

returns the number of actions in the given siege weapons action queue

<pre>MyVal = get size of siege weapon MySiegeWeapon action queue</pre>

<a name="12.19.28"></a>

#### <a name="12.19.28">12.19.28 get current siege weapon</a> [object](objects.md#8) action

returns the action that the given siege weapon is currently doing

<pre>MyPlatoonAction = get current siege weapon MySiegeWeapon action</pre>

<a name="12.19.29"></a>

#### <a name="12.19.29">12.19.29 get first index of action</a> [constant](constants.md#10) action queue

returns the first index number of the given action in the given siege weapons action queue

<pre>MyVal = get first index of action SIEGEWEAPON_AGENDA_ACTION_FACE_POSITION in siege weapon MySiegeWeapon action queue</pre>

<a name="12.19.30"></a>

#### <a name="12.19.30">12.19.30 get town</a> [object](objects.md#8) number

gets a towns number of the given siege weapon

<pre>get town MyTown siege weapon type SIEGE_BALANCE_TYPE_CATAPULT number</pre>

<a name="12.19.31"></a>

#### <a name="12.19.31">12.19.31 get number of soldiers in town</a> [object](objects.md#8)

gets the number of soldiers belonging to a town

<pre>get number of soldiers in town MyTown</pre>

<a name="12.19.32"></a>

#### <a name="12.19.32">12.19.32 get number of platoon of</a> [constant](constants.md#10)

gets the number of platoons of a type in a town

<pre>get number of platoon of ARMY_UNIT_TYPE_RANGED_1 in town TheTownOnTheHill</pre>

<a name="12.19.33"></a>

#### <a name="12.19.33">12.19.33 get number of platoons belonging to player</a> [expression](expressions.md#12)

gets the number of platoons belonging to a player

<pre>NumPlatoons = get number of platoons belonging to player 1</pre>

<a name="12.19.34"></a>

#### <a name="12.19.34">12.19.34 get number of platoon warriors belonging to player</a> [expression](expressions.md#12)

gets the number of platoon warriors belonging to a player

<pre>NumPlatoons = get number of platoon warriors belonging to player 1</pre>

<a name="12.19.35"></a>

#### <a name="12.19.35">12.19.35 get amount of</a> [constant](constants.md#10)

get the amount of resource require for platoon recruitment

<pre>get amount of RESOURCE_TYPE_IRE for platoon PLATOON_INFO_GREEK_MELEE_1 of size 20</pre>

<a name="12.19.36"></a>

#### <a name="12.19.36">12.19.36 get amount of</a> [constant](constants.md#10)

get the amount of resource required for siege weapon recruitment

<pre>get amount of RESOURCE_TYPE_IRE for siege weapon SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_1</pre>

<a name="12.19.37"></a>

#### <a name="12.19.37">12.19.37 get number of platoon of player</a> [expression](expressions.md#12)

Gets the number of platoons of a particular player near to the given position and within a radius in metres

<pre>get number of platoon of player CompPlayer near {MyTownCentre} radius 10</pre>

<a name="12.19.38"></a>

#### <a name="12.19.38">12.19.38 get default size for platoon</a> [constant](constants.md#10)

get the default size of this type of platoon

<pre>get default size for platoon PLATOON_INFO_JAPANESE_MELEE_3</pre>

<a name="12.19.39"></a>

#### <a name="12.19.39">12.19.39 how many soldiers can get on wall</a> [object](objects.md#8)

Returns the maximum number of soldiers who can get on a wall

<pre>RecruitSize = how many soldiers can get on wall MyWall</pre>

<a name="12.19.40"></a>

#### <a name="12.19.40">12.19.40 get time since player</a> [expression](expressions.md#12)

gets the time since a player attacked a town. If the player never attacked a town the time since the attack is a very huge amount of time. Not currently working.

<pre>get time since player 1 attacked KhazarTown1</pre>

<a name="12.20.1"></a>

#### <a name="12.20.1">12.20.1 get</a> [object](objects.md#8)

gets the percentage desire a town has for something (See Enums.h)

<pre>get Town desire TOWN_DESIRE_INFO_FOR_FOOD</pre>

<a name="12.20.2">

#### 12.20.2 get research ARTEFACT available

</a>

Returns an enum with the current state of this artefact: RESEARCH_AVAILABILITY_NOT_AVAILABLE
RESEARCH_AVAILABILITY_AVAILABLE
RESEARCH_AVAILABILITY_RESEARCHED

<pre>AvailabilityState = get research ARTEFACT_ABODE_NUMBER_ALTAR available</pre>

<a name="12.20.3"></a>

#### <a name="12.20.3">12.20.3 get number of type types in</a> [object](objects.md#8)

gets the number of the specified types in the container.

<pre>get number of type HOUSE ABODE_NUMBER_A in MyTown min built 1.0</pre>

<a name="12.20.4"></a>

#### <a name="12.20.4">12.20.4 get number of built</a> [constant](constants.md#10)

gets the number of built types in the town.

<pre>get number of built ABODE_NUMBER_A in MyTown</pre>

<a name="12.20.5"></a>

#### <a name="12.20.5">12.20.5 get number of unbuilt</a> [constant](constants.md#10)

gets the number of the unbuilt types in the town.

<pre>get number of unbuilt ABODE_NUMBER_A in MyTown</pre>

<a name="12.20.6"></a>

#### <a name="12.20.6">12.20.6 get player</a> [expression](expressions.md#12) town total

Returns the number of towns a player owns

<pre>get player 1 town total</pre>

<a name="12.20.7"></a>

#### <a name="12.20.7">12.20.7 size of</a> [object](objects.md#8)

Gets the amount of [object](objects.md#8)s in a container (Flock/Dance/Town).

<pre>size of Town</pre>

<a name="12.20.8"></a>

#### <a name="12.20.8">12.20.8 adult size of</a> [object](objects.md#8)

Gets the amount of adults in a container (Town).

<pre>adult size of Town</pre>

<a name="12.20.9"></a>

#### <a name="12.20.9">12.20.9 capacity of</a> [object](objects.md#8)

Gets capacity of an [object](objects.md#8), (Town) eg. The amount of room for adults and children

<pre>capacity of Town</pre>

<a name="12.20.10"></a>

#### <a name="12.20.10">12.20.10 adult capacity of</a> [object](objects.md#8)

Gets adult capacity of an [object](objects.md#8), (Town) eg. The amount of room for adults

<pre>adult capacity of Town</pre>

<a name="12.20.11"></a>

#### <a name="12.20.11">12.20.11 poisoned size of</a> [object](objects.md#8)

Gets the amount of [object](objects.md#8)s poisoned in a container (Flock/Dance/Town).

<a name="12.20.12"></a>

#### <a name="12.20.12">12.20.12 get building and villager health total in</a> [object](objects.md#8)

This returns a health total of a towns buildings and people. This is not a general value 0->1 it is a sum of the health of each individual building and person.

<pre>get building and villager health totoal in MyTown</pre>

<a name="12.20.13"></a>

#### <a name="12.20.13">12.20.13 get town</a> [object](objects.md#8)

returns the desire weight value for a given desire type

<pre>MyVal = get town GreekTown desire for GET_WOOD</pre>

<a name="12.20.14"></a>

#### <a name="12.20.14">12.20.14 get town</a> [object](objects.md#8)

returns the desire activation state

<pre>MyVal = get town GreekTown desire activation for GET_WOOD</pre>

<a name="12.20.15"></a>

#### <a name="12.20.15">12.20.15 get tech level of town</a> [object](objects.md#8)

returns the tech level of the given town

<pre>MyVal = get tech level of town NorseTown</pre>

<a name="12.21.1">

#### 12.21.1 get depth of field strength multiplier

</a>

gets the strength of the depth of field

<pre>get depth of field strength multiplier</pre>

See also:

*   [set depth of field strength multiplier to expression](statements.md#3.20.1)

<a name="12.21.2">

#### 12.21.2 get depth of field distance multiplier

</a>

gets the distance of the depth of field

<pre>get depth of field distance multiplier</pre>

See also:

*   [set depth of field distance multiplier to expression](statements.md#3.20.2)

<a name="12.22.1"></a>

#### <a name="12.22.1">12.22.1 get total of stat</a> [constant](constants.md#10)

gets the total number of times a particular statistic has happened (on this land)

<pre>get total of stat STATS_EVT_TOWNS_GAINED</pre>

<a name="12.22.2"></a>

#### <a name="12.22.2">12.22.2 get number of disciple</a> [constant](constants.md#10)

gets the total number of disciples of the type in the town

<pre>get number of disciple VILLAGER_DISCIPLE_BREEDER in town MyTown</pre>

<a name="12.23.1"></a>

#### <a name="12.23.1">12.23.1 get town</a> [object](objects.md#8) previous player

returns the previous owner of this town

<pre>LastOwner = get town MyTown previous player</pre>

<a name="12.23.2">

#### 12.23.2 get player capturing town

</a>

gets the player who is currently capturing this town

<pre>NaughtyPlayer = get player capturing town MyTown</pre>

<a name="12.23.3"></a>

#### <a name="12.23.3">12.23.3 get time since town</a> [object](objects.md#8) last captured

gets the time since this town was last captured

<pre>TimedSinceCapture = get time since town MyTown last captured</pre>

<a name="12.23.4"></a>

#### <a name="12.23.4">12.23.4 get time since last migration started from town</a> [object](objects.md#8)

gets the time since the last migration started

<pre>TimedSinceMigration = get time since last migration started from town MyTown</pre>

<a name="12.23.5"></a>

#### <a name="12.23.5">12.23.5 get time since last migration arrived at town</a> [object](objects.md#8)

gets the time since the last migration arrived

<pre>TimedSinceMigration = get time since last migration arrived at town MyTown</pre>

<a name="12.23.6"></a>

#### <a name="12.23.6">12.23.6 get time since last migration accepted at town</a> [object](objects.md#8)

gets the time since the last migration accepted

<pre>TimedSinceMigration = get time since last migration accepted at town MyTown</pre>

<a name="12.23.7"></a>

#### <a name="12.23.7">12.23.7 get number of migrations accepted by town</a> [object](objects.md#8)

gets the number of migrations accepted by the player

<pre>Total = get number of migrations accepted by town MyTown</pre>

<a name="12.24.1">

#### 12.24.1 get toolbar menu

</a>

returns the current toolbar menu, there is also an enum for this..somewhere

<pre>CurrentMenu = get toolbar menu</pre>

<a name="12.24.2">

#### 12.24.2 get toolbar root menu

</a>

returns the current toolbar root menu, there is also an enum for this..somewhere

<pre>CurrentMenu = get toolbar root menu</pre>

<a name="12.24.3">

#### 12.24.3 get toolbar state

</a>

Returns the current toolbar state
MENU_TOOLBAR_STATE_CLOSED
MENU_TOOLBAR_STATE_OPEN_NORMAL
MENU_TOOLBAR_STATE_OPEN_FULL

<pre>BarState = get toolbar state</pre>

<a name="12.24.4"></a>

#### <a name="12.24.4">12.24.4 create world icon consant on</a> [object](objects.md#8))

enables or disables drawing of the hand icons. This returns a float which is a handle to the icon and can be sued to delete it. Optional arrow

<pre>MyIconHandle = create world icon BINDABLE_ACTION_TYPE_MOVE on MyRock with arrow ARROW_TYPE_NONE</pre>

<a name="12.24.5">

#### 12.24.5 get time since last toolbar button clicked

</a>

returns the number of seconds since the last toolbar button was clicked

<pre>TimeSinceLastButton = get time since last toolbar button clicked</pre>

See also:

*   [get last toolbar button clicked](constants.md#10.2.19)

<a name="12.25.1"></a>

#### <a name="12.25.1">12.25.1 get migration threshold for town</a> [object](objects.md#8)

Returns the migration threshold between the two given towns

<pre>Threshold = get migration threshold from JapaneseTown to AztecTown</pre>

<a name="12.25.2"></a>

#### <a name="12.25.2">12.25.2 get town</a> [object](objects.md#8) migrating

Returns the town that the given town is migrating too

<pre>Town = get town JapaneseTown migrating</pre>

<a name="12.25.3"></a>

#### <a name="12.25.3">12.25.3 get migration between</a> [object](objects.md#8)

Returns the migration party which is migrating

<pre>MigrationParty = get migration from JapaneseTown to AztecTown</pre>

<a name="12.25.4"></a>

#### <a name="12.25.4">12.25.4 get next town percentage to migrate to town</a> [object](objects.md#8)

finds the town most likely to migrate to the specified town and gives the percentage chance that it will migrate

<pre>CurrentHighMigrationPercent = get next town percentage to migrate to town MyTown</pre>

See also:

*   [get next town object to migrate to town object](objects.md#8.6.8)
