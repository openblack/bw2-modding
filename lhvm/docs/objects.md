# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="8"></a> 8 Objects

These functions always return an [object](objects.md#8) in the world.

See also:

*   [Statements](statements.md#3)
*   [Conditions](conditions.md#6)
*   [Constants](constants.md#10)
*   [Position](position.md#11)
*   [Expressions](expressions.md#12)

<a name="8.1">

### 8.1 Misc Objects

</a>

Getting and creating miscellaneous [object](objects.md#8) types.

1.  [get WEATHER_INFO climate at coord_expression radius expression](#8.1.1)
2.  [create video window with left expression top expression width expression height expression](#8.1.2)
3.  [create highlight challenge_id constant at position](#8.1.3)
4.  [create dyk at coord_expression title text_string description text_string](#8.1.4)
5.  [create timer for expression second[s]](#8.1.5)
6.  [object pilgrimage constant to town object with expression pilgrims](#8.1.6)
7.  [create terminal object at position with a duration of expression seconds](#8.1.7)
8.  [create rubble type expression scale expression at position velocity position](#8.1.8)
9.  [create mixer](#8.1.9)

<a name="8.2">

### 8.2 Generic Objects

</a>

Creating and getting [object](objects.md#8)s of any kind *

1.  [address of](#8.2.1)
2.  [variable array](#8.2.2)
3.  [variable array](#8.2.3)
4.  [get <constant>constant at position</constant>](#8.2.4)
5.  [get object called string](#8.2.5)
6.  [get types at position radius expression](#8.2.6)
7.  [get types in object not near coord_expression radius coord_expression](#8.2.7)
8.  [get types in object](#8.2.8)
9.  [get poisoned types in object](#8.2.9)
10.  [get non-poisoned types in object](#8.2.10)
11.  [get types in object at position radius expression](#8.2.11)
12.  [get types flying at position radius expression exclude_scripted](#8.2.12)
13.  [convert object using constant](#8.2.13)
14.  [create types at coord_expression opt_radius](#8.2.14)
15.  [create with radius expression types at coord_expression opt_radius](#8.2.15)
16.  [create with angle expression and scale expression types at position](#8.2.16)
17.  [get held by object](#8.2.17)
18.  [get dropped by object](#8.2.18)
19.  [get object hand is over](#8.2.19)
20.  [get object object leashed to](#8.2.20)
21.  [get object left_right_middle clicked](#8.2.21)
22.  [get object held](#8.2.22)
23.  [get target object for object](#8.2.23)
24.  [get first in object](#8.2.24)
25.  [get next in object after object](#8.2.25)
26.  [get object in creature hand](#8.2.26)
27.  [get flock object leader](#8.2.27)
28.  [object hit object](#8.2.28)

<a name="8.3">

### 8.3 Miracle Objects

</a>

Creating or getting Miracle related [object](objects.md#8)s *

1.  [get spell icon constant in object](#8.3.1)
2.  [get object creator](#8.3.2)
3.  [create volcano at coord_expression](#8.3.3)
4.  [create volcano at coord_expression](#8.3.4)
5.  [create earthquake start coord_expression end coord_expression player expression](#8.3.5)
6.  [create siren at coord_expression player expression](#8.3.6)

<a name="8.4">

### 8.4 Dance Objects

</a>

Creating or getting Dance [object](objects.md#8)s *

1.  [make object dance constant around position time](#8.4.1)
2.  [get object dance](#8.4.2)

<a name="8.5">

### 8.5 Flock Objects

</a>

Creating or getting Flock [object](objects.md#8)s *

1.  [flock at position](#8.5.1)
2.  [get object flock](#8.5.2)
3.  [create flock constant at coord_expression opt_radius](#8.5.3)
4.  [create flock container](#8.5.4)

<a name="8.6">

### 8.6 Town Objects

</a>

Creating or getting Town [object](objects.md#8)s *

1.  [create player expression town at coord_expression type constant](#8.6.1)
2.  [get nearest town at position for player expression radius expression](#8.6.2)
3.  [get town with id expression](#8.6.3)
4.  [get town object is migrating to](#8.6.4)
5.  [get town migrating to player 0 expression](#8.6.5)
6.  [get last town migrated to player 0](#8.6.6)
7.  [get town object is migrating to](#8.6.7)
8.  [get next town object to migrate to town object](#8.6.8)

<a name="8.7">

### 8.7 Marker Objects

</a>

Creating Marker [object](objects.md#8)s *

1.  [marker at position](#8.7.1)
2.  [marker at camera_enum](#8.7.2)

<a name="8.8">

### 8.8 Influence Objects

</a>

Creating Influence [object](objects.md#8)s *

1.  [create influence on object radius](#8.8.1)
2.  [create influence at position radius expression](#8.8.2)
3.  [create anti influence on object radius](#8.8.3)
4.  [create anti influence at position position radius](#8.8.4)

<a name="8.9">

### 8.9 Creature Objects

</a>

Creating and getting Creature related [object](objects.md#8)s *

1.  [get player expression creature](#8.9.1)
2.  [create types at coord_expression using only alignment opt_good_neutral_evil](#8.9.2)

<a name="8.10">

### 8.10 Villager Objects

</a>

Getting Villager related [object](objects.md#8)s *

1.  [get adult at coord_expression radius 100 excluding disciple constant](#8.10.1)
2.  [get types in state constant at position radius expression](#8.10.2)
3.  [get disciple constant at position radius expression](#8.10.3)
4.  [create random villager of tribe constant at position](#8.10.4)
5.  [get dead at position radius expression](#8.10.5)
6.  [get constant living in abode object](#8.10.6)

<a name="8.11">

### 8.11 Building Objects

</a>

Creating and getting Building related [object](objects.md#8)s *

1.  [get planned types near coord_expression radius expression exclude_scripted](#8.11.1)
2.  [build town object buildings of type constant in group expression](#8.11.2)
3.  [get planned types in town near coord_expression radius expression exclude_scripted](#8.11.3)
4.  [build town object epic wonders of type constant in group expression](#8.11.4)
5.  [build town object embellishments of type constant in group expression](#8.11.5)
6.  [build building at position desire expression](#8.11.6)
7.  [get building constant in object min built expression exclude_scripted](#8.11.7)
8.  [get building constant in object max built expression exclude_scripted](#8.11.8)
9.  [get building resource constant in house](#8.11.9)
10.  [get town object storage pit with most constant](#8.11.10)
11.  [get random abode in town object](#8.11.11)
12.  [get random home in town object](#8.11.12)
13.  [get random abode of type constant in town object](#8.11.13)
14.  [get wall segment nearest position radius expression](#8.11.14)
15.  [get prison of object](#8.11.15)

<a name="8.12">

### 8.12 Army Objects

</a>

Creating and getting Army related [object](objects.md#8)s *

1.  [create platoon constant at coord_expression with expression men and expression women](#8.12.1)
2.  [split expression soldiers from platoon object](#8.12.2)
3.  [get platoon nearest coord_expression radius expression](#8.12.3)
4.  [get platoon of player expression nearest coord_expression radius expression](#8.12.4)
5.  [get siege weapon of player expression nearest coord_expression radius expression](#8.12.5)
6.  [get platoon of tribe constant nearest coord_expression radius expression](#8.12.6)
7.  [get idle platoon of player expression nearest coord_expression radius expression](#8.12.7)
8.  [get idle platoon nearest coord_expression radius expression](#8.12.8)
9.  [get idle platoon of tribe nearest coord_expression radius expression](#8.12.9)
10.  [get platoon of type nearest coord_expression radius expression](#8.12.10)
11.  [get platoon of type tribe nearest coord_expression radius expression](#8.12.11)
12.  [get platoon of type of player expression nearest coord_expression radius expression](#8.12.12)
13.  [get idle platoon of type nearest coord_expression radius expression](#8.12.13)
14.  [get idle platoon of type constant of tribe constant nearest coord_expression radius expression](#8.12.14)
15.  [get idle platoon of type constant of player expression nearest coord_expression radius expression](#8.12.15)
16.  [get platoon on wall of type nearest coord_expression radius expression](#8.12.16)
17.  [get platoon on wall of type tribe nearest coord_expression radius expression](#8.12.17)
18.  [get platoon on wall of type of player expression nearest coord_expression radius expression](#8.12.18)
19.  [get platoon on wall nearest coord_expression radius expression](#8.12.19)
20.  [get platoon on wall of player expression nearest coord_expression radius expression](#8.12.20)
21.  [get platoon of type constant of town object](#8.12.21)
22.  [get idle platoon type constant of town object](#8.12.22)
23.  [get army from platoon object](#8.12.23)
24.  [get army nearest coord_expression radius expression](#8.12.24)
25.  [get army of player object nearest coord_expression radius expression](#8.12.25)
26.  [get random villager from platoon object](#8.12.26)
27.  [get villager from platoon object nearest coord](#8.12.27)
28.  [get living villager from at coord_expression](#8.12.28)
29.  [create siege weapon constant belonging to object at coord_expression](#8.12.29)
30.  [get siege weapon constant of town object at coord_expression<opt_radius></opt_radius>](#8.12.30)
31.  [get siege weapon constant of player expression at coord_expression<opt_radius></opt_radius>](#8.12.31)
32.  [create missiles constant launch constant size expression from position to position opt_speed](#8.12.32)
33.  [recruit constant town object platoon of size expression](#8.12.33)
34.  [recruit constant town object siege weapon](#8.12.34)

<a name="8.13">

### 8.13 Spells

</a>

Creating and getting spell [object](objects.md#8)s *

1.  [make player expression pour miracle constant at coord_expression](#8.13.1)
2.  [make player expression throw miracle constant from coord_expression heading coord_expression](#8.13.2)
3.  [get spell constant at coord_expression radius expression](#8.13.3)

<a name="8.14">

### 8.14 Tooltips

</a>

These allow you to create tooltips in various ways

1.  [create tooltip on object with text text_string opt_amount](#8.14.1)
2.  [create tooltip at coord_expression with text text_string opt_amount](#8.14.2)
3.  [create tooltip on hand with text text_string opt_amount](#8.14.3)

<a name="8.15">

### 8.15 Visual Effects

</a>

Adam Langridge has created a number of spot visuals in Black and White.

1.  [create visual effect constant at coord_expression time](#8.15.1)
2.  [create visual effect constant to object time](#8.15.2)
3.  [create visual effect string at position time expression](#8.15.3)
4.  [create visual effect string on object time](#8.15.4)
5.  [create visual effect string strength expression scale expression on creature object left_right hand](#8.15.5)

* * *

<a name="8.1.1"></a>

#### <a name="8.1.1">8.1.1 get WEATHER_INFO climate at</a> [coord_expression](position.md#11)

Gets a MicroClimate [object](objects.md#8) near the given position

<pre>MyClimate = get WEATHER_INFO_LARGE_CLOUD climate at {MyPos} radius 4</pre>

<a name="8.1.2"></a>

#### <a name="8.1.2">8.1.2 create video window with left</a> [expression](expressions.md#12)

creates a video window at the given position with the given dimensions. Note that when your video stops playing, your video window pointers are no longer valid (use 'is video playing' to check for this)

<pre>MyVid = create video window with left 0 top 0 width 1 height 1</pre>

<a name="8.1.3"></a>

#### <a name="8.1.3">8.1.3 create highlight challenge_id</a> [constant](constants.md#10) at position

Creates a highlight/scoreboard at a position.

<pre>create highlight SCRIPT_HIGHLIGHT_INFO_SCRIPT_SILVER for "Lost Brother script name" at {FlockPos}
create highlight SCRIPT_HIGHLIGHT_INFO_SCRIPT_SILVER for "Lost Brother script name" at {FlockPos} tribute 100
create highlight SCRIPT_HIGHLIGHT_INFO_SCRIPT_SILVER for "Lost Brother script name" at {FlockPos} tribute 100 impressiveness tribute 200</pre>

<a name="8.1.4"></a>

#### <a name="8.1.4">8.1.4 create dyk at</a> [coord_expression](position.md#11) title text_string description text_string

creates a did you know sign at a position with given title and description

<pre>Sign = create dyk at {SignPios} title "BW2T_blah" description "BW2T_blah"</pre>

<a name="8.1.5"></a>

#### <a name="8.1.5">8.1.5 create timer for</a> [expression](expressions.md#12) second[s]

This timer is not displayed. Use it for triggers dependant on time, or optimising doing searches it is often worth starting a timer [object](objects.md#8) within the script.

<pre>create timer for 2.4 seconds</pre>

<a name="8.1.6"></a>

#### <a name="8.1.6">8.1.6</a> [object](objects.md#8) pilgrims

makes a given [object](objects.md#8) (which must be a container) pay a form of pilgrimage to another town

<pre>YourTown pilgrimage PILGRIMAGE_TYPE_HOMAGE to town MyTown with 4 pilgrims</pre>

<a name="8.1.7"></a>

#### <a name="8.1.7">8.1.7 create terminal</a> [object](objects.md#8) seconds

creates a terminal [object](objects.md#8) at at given position for a given time

<pre>create terminal [object](objects.md#8) at {MyPos} with duration of 5 seconds</pre>

<a name="8.1.8"></a>

#### <a name="8.1.8">8.1.8 create rubble type</a> [expression](expressions.md#12) at position velocity position

creates rubble at a given position

<pre>MyRubble = create rubble type 1 scale 1.2 at {MyRubblePos} velocity {0, 10, 0}</pre>

<a name="8.1.9">

#### 8.1.9 create mixer

</a>

creates a script mixer

<pre>MyMixer = create mixer</pre>

<a name="8.2.1">

#### 8.2.1 address of

</a>

passes a pointer to the variable.

<pre>address of MyVillager</pre>

<a name="8.2.2">

#### 8.2.2 variable array

</a>

references an existing variable from an array.

<a name="8.2.3">

#### 8.2.3 variable array

</a>

pushes the address of an existing variable from an array.

<a name="8.2.4"></a>

#### <a name="8.2.4">8.2.4 get <</a>[constant](constants.md#10) at position

Gets an [object](objects.md#8) of type at a position from the game, and an optional sub_type.

<pre>MyHouse = get HOUSE HOUSE_A at {MyBuildingSite}</pre>

<a name="8.2.5"></a>

#### <a name="8.2.5">8.2.5 get</a> [object](objects.md#8) called string

Gets an [object](objects.md#8) with the given name

<pre>MyHouse = get [object](objects.md#8) called "MyHouse"</pre>

<a name="8.2.6"></a>

#### <a name="8.2.6">8.2.6 get types at position radius</a> [expression](expressions.md#12)

Gets an [object](objects.md#8) of type within a radius of a position.

<pre>MyHouse = get HOUSE at {MyEstate} radius 20</pre>

<a name="8.2.7"></a>

#### <a name="8.2.7">8.2.7 get types in</a> [object](objects.md#8)

Looks in a conatiner for an [object](objects.md#8) not near the defined position.

<pre>get ANIMAL COW in Flock not near [LostBrother] radius 10</pre>

<a name="8.2.8"></a>

#### <a name="8.2.8">8.2.8 get types in</a> [object](objects.md#8)

gets [object](objects.md#8)s of type in a container.

<pre>get ANIMAL COW in Flock</pre>

<a name="8.2.9"></a>

#### <a name="8.2.9">8.2.9 get poisoned types in</a> [object](objects.md#8)

gets a poisoned [object](objects.md#8) from a container.

<pre>get poisoned ANIMAL in MyFlock</pre>

<a name="8.2.10"></a>

#### <a name="8.2.10">8.2.10 get non-poisoned types in</a> [object](objects.md#8)

gets a non-poisoned [object](objects.md#8) from a container.

<pre>get non-poisoned ANIMAL in MyFlock</pre>

<a name="8.2.11"></a>

#### <a name="8.2.11">8.2.11 get types in</a> [object](objects.md#8)

Gets an [object](objects.md#8) of type in a container within a redius from a position.

<pre>get ANIMAL in MyFlock at {MyField} radius 20</pre>

<a name="8.2.12"></a>

#### <a name="8.2.12">8.2.12 get types flying at position radius</a> [expression](expressions.md#12) exclude_scripted

Gets an [object](objects.md#8) flying of type within a radius of a position.

<a name="8.2.13"></a>

#### <a name="8.2.13">8.2.13 convert</a> [object](objects.md#8)

returns the [object](objects.md#8), converted to the type specified (ScriptEnums.h)

<pre>MyDodgyHouse = convert MyHouse using SCRIPT_CONVERT_ROCK</pre>

<a name="8.2.14"></a>

#### <a name="8.2.14">8.2.14 create types at</a> [coord_expression](position.md#11) opt_radius

Creates a game [object](objects.md#8) at a position.

<pre>create ANIMAL BOVINE at {FlockPos}</pre>

<a name="8.2.15"></a>

#### <a name="8.2.15">8.2.15 create with radius</a> [expression](expressions.md#12) opt_radius

Creates a game [object](objects.md#8) at a position.

<pre>create ANIMAL BOVINE at {FlockPos}</pre>

<a name="8.2.16"></a>

#### <a name="8.2.16">8.2.16 create with angle</a> [expression](expressions.md#12) types at position

creates a game [object](objects.md#8) at a position with an angle and scale

<pre>create with angle 0 and scale 2.5 ANIMAL BOVINE at {FlockPos}</pre>

<a name="8.2.17"></a>

#### <a name="8.2.17">8.2.17 get held by</a> [object](objects.md#8)

Gets the currently held [object](objects.md#8) (A creature only currently).

<a name="8.2.18"></a>

#### <a name="8.2.18">8.2.18 get dropped by</a> [object](objects.md#8)

Gets the last [object](objects.md#8) (A creature only currently).

<a name="8.2.19"></a>

#### <a name="8.2.19">8.2.19 get</a> [object](objects.md#8) hand is over

Gets the [object](objects.md#8) the interface hand is over.

<pre>Object=get [object](objects.md#8) hand is over</pre>

<a name="8.2.20"></a>

#### <a name="8.2.20">8.2.20 get</a> [object](objects.md#8) leashed to

get what an [object](objects.md#8) is leashed to.

<pre>get [object](objects.md#8) MyCreature leashed to</pre>

<a name="8.2.21"></a>

#### <a name="8.2.21">8.2.21 get</a> [object](objects.md#8) left_right_middle clicked

Gets the [object](objects.md#8) clicked

<pre>Object=get [object](objects.md#8) left clicked</pre>

<a name="8.2.22"></a>

#### <a name="8.2.22">8.2.22 get</a> [object](objects.md#8) held

Gets the [object](objects.md#8) held by the hand.

<pre>Object=get [object](objects.md#8) held</pre>

<a name="8.2.23"></a>

#### <a name="8.2.23">8.2.23 get target</a> [object](objects.md#8)

gets the [object](objects.md#8) the creature is interacting with or thinking about. Has not been used in a long time and may not work.

<a name="8.2.24"></a>

#### <a name="8.2.24">8.2.24 get first in</a> [object](objects.md#8)

Gets the first [object](objects.md#8) in a container (Eg. Flock).

<pre>FlockMember=get first in Flock</pre>

<a name="8.2.25"></a>

#### <a name="8.2.25">8.2.25 get next in</a> [object](objects.md#8)

Gets the next [object](objects.md#8) in a container after the one passed. If it doesn't find the one passed it returns the first one. This function is very slow for towns.

<pre>FlockMember=get next in Flock after FlockMember</pre>

<a name="8.2.26"></a>

#### <a name="8.2.26">8.2.26 get</a> [object](objects.md#8) in creature hand

gets the [object](objects.md#8) the creature is currently holding

<pre>CreatureHolding = get [object](objects.md#8) in MyCreature hand</pre>

<a name="8.2.27"></a>

#### <a name="8.2.27">8.2.27 get flock</a> [object](objects.md#8) leader

gets a flocks leader

<pre>LeaderManTid = get flock TidsFriends leader</pre>

<a name="8.2.28"></a>

#### <a name="8.2.28">8.2.28</a> [object](objects.md#8)

Checks what the [object](objects.md#8).

<a name="8.3.1"></a>

#### <a name="8.3.1">8.3.1 get spell icon</a> [constant](constants.md#10)

gets the spell icon from the temple [object](objects.md#8) using a magic_type.

<pre>get spell icon MAGIC_TYPE_WOOD in MyTemple</pre>

<a name="8.3.2"></a>

#### <a name="8.3.2">8.3.2 get</a> [object](objects.md#8) creator

Gets the [object](objects.md#8)s creator if it has one.

<pre>Wonder=get MySpell creator</pre>

<a name="8.3.3"></a>

#### <a name="8.3.3">8.3.3 create volcano at</a> [coord_expression](position.md#11)

creates a volcano to the landscape without any spell being cast

<pre>create volcano at hand position player 1</pre>

<a name="8.3.4"></a>

#### <a name="8.3.4">8.3.4 create volcano at</a> [coord_expression](position.md#11)

creates a volcano to the landscape without any spell being cast

<pre>create hurricane at hand position player 1 direction {0, 0, 25}</pre>

<a name="8.3.5"></a>

#### <a name="8.3.5">8.3.5 create earthquake start</a> [coord_expression](position.md#11)

create earthquake from a start position to an end position

<pre>create earthquake start {QuakeStartPos} end {QuakeEndPos} player 1</pre>

<a name="8.3.6"></a>

#### <a name="8.3.6">8.3.6 create siren at</a> [coord_expression](position.md#11)

create a siren without a wonder

<pre>create siren at {SirenPos} player 1</pre>

<a name="8.4.1"></a>

#### <a name="8.4.1">8.4.1 make</a> [object](objects.md#8) around position time

Makes an [object](objects.md#8) perform a specific dance at a position for a time.

<a name="8.4.2"></a>

#### <a name="8.4.2">8.4.2 get</a> [object](objects.md#8) dance

Gets the [object](objects.md#8) dance if it has one.

<pre>MyDance=get MyEpicWonder dance</pre>

<a name="8.5.1">

#### 8.5.1 flock at position

</a>

Creates a flock at the position.

<a name="8.5.2"></a>

#### <a name="8.5.2">8.5.2 get</a> [object](objects.md#8) flock

Gets the [object](objects.md#8) flock if it has one.

<pre>Flock=get Sheep2 flock</pre>

<a name="8.5.3"></a>

#### <a name="8.5.3">8.5.3 create flock</a> [constant](constants.md#10) opt_radius

creates a flock container at the given pos, with the given radius. NB: The radius is an angle for some flock types

<pre>MyFlockContainer = create flock PROTEST_VIGILANT at {ProtestPos} radius 10</pre>

<a name="8.5.4">

#### 8.5.4 create flock container

</a>

creates a flock container

<pre>MyFlockContainer = create flock container</pre>

<a name="8.6.1"></a>

#### <a name="8.6.1">8.6.1 create player</a> [expression](expressions.md#12)

creates a town. NB. Script created towns are uninhabitable by default. Hasn't been used in a long time and may not work.

<pre>create player 0 town at {TownPos} type TRIBE_TYPE_CELTIC</pre>

<a name="8.6.2"></a>

#### <a name="8.6.2">8.6.2 get nearest town at position for player</a> [expression](expressions.md#12)

Gets the nearest town of a players near a position within a radius.

<pre>get nearest town at {LostBorther} for player 1 radius 20</pre>

<a name="8.6.3"></a>

#### <a name="8.6.3">8.6.3 get town with id</a> [expression](expressions.md#12)

Gets the town which has a particular id.

<pre>get town with id 24</pre>

<a name="8.6.4"></a>

#### <a name="8.6.4">8.6.4 get town</a> [object](objects.md#8) is migrating to

Gets the town, the given town is migrating too

<pre>Town = get town MyTown is migrating to</pre>

<a name="8.6.5"></a>

#### <a name="8.6.5">8.6.5 get town migrating to player 0</a> [expression](expressions.md#12)

Gets the town which is migrating to the given player

<pre>get town migrating to player 0</pre>

<a name="8.6.6">

#### 8.6.6 get last town migrated to player 0

</a>

Gets the last town which migrated to a player

<pre>get last town migrated to player 0</pre>

<a name="8.6.7"></a>

#### <a name="8.6.7">8.6.7 get town</a> [object](objects.md#8) is migrating to

Gets the town, the given town is migrating too

<pre>Town = get town MyTown has migrated to</pre>

<a name="8.6.8"></a>

#### <a name="8.6.8">8.6.8 get next town</a> [object](objects.md#8)

finds the next town to migrate

<pre>NextTown = get next town [object](objects.md#8) to migrate to town MyTown</pre>

See also:

*   get next town percent to migrate to town object

<a name="8.7.1">

#### 8.7.1 marker at position

</a>

creates a position marker.

<pre>marker at {LostBrother}</pre>

<a name="8.7.2">

#### 8.7.2 marker at camera_enum

</a>

Get a marker at a camera? This hasn't been used for a long time, and may not work.

<a name="8.8.1"></a>

#### <a name="8.8.1">8.8.1 create influence on</a> [object](objects.md#8) radius

creates an influence on an [object](objects.md#8).

<pre>create influence on Rock radius 10</pre>

<a name="8.8.2"></a>

#### <a name="8.8.2">8.8.2 create influence at position radius</a> [expression](expressions.md#12)

creates an influence at a position.

<pre>create influence at {House} radius 10</pre>

<a name="8.8.3"></a>

#### <a name="8.8.3">8.8.3 create anti influence on</a> [object](objects.md#8) radius

Creates a void of influence an on [object](objects.md#8) with a radius.

<a name="8.8.4">

#### 8.8.4 create anti influence at position position radius

</a>

Creates a void of influence at a position with a radius.

<a name="8.9.1"></a>

#### <a name="8.9.1">8.9.1 get player</a> [expression](expressions.md#12) creature

Gets the players creature.

<pre>get player 2 creature</pre>

<a name="8.9.2"></a>

#### <a name="8.9.2">8.9.2 create types at</a> [coord_expression](position.md#11) using only alignment opt_good_neutral_evil

creates a creature at a position using only certain alignment textures. Will not work on things that are not creatures. Any of the optional keywords 'good', 'neutral', 'evil' must appear in that order.

<pre>CreatureArray[CLION] = create DUMB_CREATURE CREATURE_TYPE_LION at {1575.928, 111.473, 838.692} using only alignment good neutral</pre>

<a name="8.10.1"></a>

#### <a name="8.10.1">8.10.1 get adult at</a> [coord_expression](position.md#11)

Gets an adult excluding a disciple type

<pre>MyVillager = get adult at hand position radius 100 excluding disciple VILLAGER_DISCIPLE_FARMER
OtherVillager = get adult at hand position radius 100 excluding disciple VILLAGER_DISCIPLE_NONE</pre>

<a name="8.10.2"></a>

#### <a name="8.10.2">8.10.2 get types in state</a> [constant](constants.md#10)

Gets an [object](objects.md#8) of type that is in a specified state, within a radius of a position.

<pre>MyCorpse = get VILLAGER in state DEAD at {MyGraveyard} radius 20</pre>

<a name="8.10.3"></a>

#### <a name="8.10.3">8.10.3 get disciple</a> [constant](constants.md#10)

gets a disciple of that type near the position

<pre>get disciple VILLAGER_DISCIPLE_BREEDER at {MyHouse} radius 10.0 excluding scripted</pre>

<a name="8.10.4"></a>

#### <a name="8.10.4">8.10.4 create random villager of tribe</a> [constant](constants.md#10) at position

creates a random villager type of the selected tribe at young adult age

<pre>Child = create random villager of tribe TRIBE_TYPE_NORSE at [CaveFlock]</pre>

<a name="8.10.5"></a>

#### <a name="8.10.5">8.10.5 get dead at position radius</a> [expression](expressions.md#12)

Gets the first game living (Animal or Villager) which is dead within the radius.

<pre>get dead at {StoneCircle} radius 20</pre>

<a name="8.10.6"></a>

#### <a name="8.10.6">8.10.6 get</a> [constant](constants.md#10)

gets a villager of the specified type living in the specified abode

<pre>get SCRIPT_VILLAGER_TYPE_CHILD living in abode ThatHouseWithTheHair</pre>

<a name="8.11.1"></a>

#### <a name="8.11.1">8.11.1 get planned types near</a> [coord_expression](position.md#11) exclude_scripted

Gets a planned building near the given position

<pre>MyBuilding = get planned building near {MyPos} radius 10</pre>

<a name="8.11.2"></a>

#### <a name="8.11.2">8.11.2 build town</a> [object](objects.md#8)

Starts the building of planned buildings of the given type in the group

<pre>build town MyTown buildings of type CRECHE in group 0</pre>

<a name="8.11.3"></a>

#### <a name="8.11.3">8.11.3 get planned types in town near</a> [coord_expression](position.md#11) exclude_scripted

Gets a planned building near the given position in the given town

<pre>MyBuilding = get planned building in MyTown near {MyPos} radius 10</pre>

<a name="8.11.4"></a>

#### <a name="8.11.4">8.11.4 build town</a> [object](objects.md#8)

Starts the building of planned epic wonders of the given type in the group

<pre>build town MyTown epic wonders of type CRECHE in group 0</pre>

<a name="8.11.5"></a>

#### <a name="8.11.5">8.11.5 build town</a> [object](objects.md#8)

Starts the building of planned embellishments of the given type in the group

<pre>build town MyTown embellishments of type CRECHE in group 0</pre>

<a name="8.11.6"></a>

#### <a name="8.11.6">8.11.6 build building at position desire</a> [expression](expressions.md#12)

if a building is planned in the landscape you can trigger the associated town to have a desire to build the planned building. Be careful with putting the desire (0->1) too high, as it will look strange having the town building a building. Also the number of buildings per building is defined in the spreadsheet.

<pre>Building = build building at {BuildingSite} desire 0.6</pre>

<a name="8.11.7"></a>

#### <a name="8.11.7">8.11.7 get building</a> [constant](constants.md#10) exclude_scripted

gets a building of a certain type in a town.

<pre>get building ABODE_NUMBER_WORKSHOP in Town min built 1.0 excluding scripted</pre>

<a name="8.11.8"></a>

#### <a name="8.11.8">8.11.8 get building</a> [constant](constants.md#10) exclude_scripted

gets a building of a certain type in a town.

<pre>get building ABODE_NUMBER_WORKSHOP in Town max built 1.0 excluding scripted</pre>

<a name="8.11.9"></a>

#### <a name="8.11.9">8.11.9 get building resource</a> [constant](constants.md#10) in house

get the specified resource at a given buildings building site

<pre>Woodpile = get building resource RESOURCE_TYPE_WOOD in MyHouse</pre>

<a name="8.11.10"></a>

#### <a name="8.11.10">8.11.10 get town</a> [object](objects.md#8)

gets the storage pit with the most of a given resource

<pre>get town NorseTown storage pit with most RESOURCE_TYPE_FOOD</pre>

<a name="8.11.11"></a>

#### <a name="8.11.11">8.11.11 get random abode in town</a> [object](objects.md#8)

returns a random abode in a given town

<pre>MyAbode = get random abode in town MyTown</pre>

<a name="8.11.12"></a>

#### <a name="8.11.12">8.11.12 get random home in town</a> [object](objects.md#8)

returns a random home in a given town

<pre>MyHouse = get random home in town MyTown excluding scripted</pre>

<a name="8.11.13"></a>

#### <a name="8.11.13">8.11.13 get random abode of type</a> [constant](constants.md#10)

returns a random abode of a particular type in a given town

<pre>MyHouse = get random abode of type GREEK_ABODE_A in town MyTown</pre>

<a name="8.11.14"></a>

#### <a name="8.11.14">8.11.14 get wall segment nearest position radius</a> [expression](expressions.md#12)

gets the wall segment nearest the given position and within the given radius

<pre>get wall segment nearest {MyWallPos} radius 5</pre>

<a name="8.11.15"></a>

#### <a name="8.11.15">8.11.15 get prison of</a> [object](objects.md#8)

returns a pointer to the prison the given villager is within

<pre>get prison of MyLittleThievingTwat</pre>

<a name="8.12.1"></a>

#### <a name="8.12.1">8.12.1 create platoon</a> [constant](constants.md#10) women

Creates a platoon from PlatoonInfoEnum.h. It will be filled with given a number of men and women

<pre>create platoon PLATOON_INFO_GREEK_RANGED_SHORT at {MyPos} with 6 men and 6 women</pre>

<a name="8.12.2"></a>

#### <a name="8.12.2">8.12.2 split</a> [expression](expressions.md#12)

Splits a number of soldiers from their platoon into the new platoon

<pre>MyNewPlatoon = split 4 soldiers from platoon GreekArchers1</pre>

<a name="8.12.3"></a>

#### <a name="8.12.3">8.12.3 get platoon nearest</a> [coord_expression](position.md#11)

Gets the platoon nearest to the given position and within a radius in metres

<pre>get platoon nearest {MyTownCentre} radius 10</pre>

<a name="8.12.4"></a>

#### <a name="8.12.4">8.12.4 get platoon of player</a> [expression](expressions.md#12)

Gets the platoon of a particular player nearest to the given position and within a radius in metres

<pre>get platoon of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.5"></a>

#### <a name="8.12.5">8.12.5 get siege weapon of player</a> [expression](expressions.md#12)

Gets the siege weapon of a particular player nearest to the given position and within a radius in metres

<pre>get siege weapon of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.6"></a>

#### <a name="8.12.6">8.12.6 get platoon of tribe</a> [constant](constants.md#10)

Gets the platoon of a particular tribe nearest to the given position and within a radius in metres

<pre>get platoon of tribe GREEK nearest {MyTownCentre} radius 10</pre>

<a name="8.12.7"></a>

#### <a name="8.12.7">8.12.7 get idle platoon of player</a> [expression](expressions.md#12)

Gets the idle platoon of a particular player nearest to the given position and within a radius in metres

<pre>get idle platoon of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.8"></a>

#### <a name="8.12.8">8.12.8 get idle platoon nearest</a> [coord_expression](position.md#11)

Gets the idle platoon nearest to the given position and within a radius in metres

<pre>get idle platoon nearest {MyTownCentre} radius 10</pre>

<a name="8.12.9"></a>

#### <a name="8.12.9">8.12.9 get idle platoon of tribe nearest</a> [coord_expression](position.md#11)

Gets the idle platoon of a particular tribe nearest to the given position and within a radius in metres

<pre>get idle platoon of tribe TRIBE_TYPE_NORSE nearest {MyTownCentre} radius 10</pre>

<a name="8.12.10"></a>

#### <a name="8.12.10">8.12.10 get platoon of type nearest</a> [coord_expression](position.md#11)

Gets the platoon of type ARMY_UNIT_TYPE nearest to the given position and within a radius in metres

<pre>get platoon of type ARMY_UNIT_TYPE_RANGED_1 nearest {MyTownCentre} radius 10</pre>

<a name="8.12.11"></a>

#### <a name="8.12.11">8.12.11 get platoon of type tribe nearest</a> [coord_expression](position.md#11)

Gets the platoon of type ARMY_UNINT_TYPE of a particular tribe nearest to the given position and within a radius in metres

<pre>get platoon of tribe TRIBE_TYPE_NORSE of type ARMY_UNIT_TYPE_RANGED_1 nearest {MyTownCentre} radius 10</pre>

<a name="8.12.12"></a>

#### <a name="8.12.12">8.12.12 get platoon of type of player</a> [expression](expressions.md#12)

Gets the platoon of a type ARMY_UNIT_TYPE of a particular player nearest to the given position and within a radius in metres

<pre>get platoon of type ARMY_UNIT_TYPE_RANGED_1 of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.13"></a>

#### <a name="8.12.13">8.12.13 get idle platoon of type nearest</a> [coord_expression](position.md#11)

Gets the idle platoon of type ARMY_UNIT_TYPE nearest to the given position and within a radius in metres

<pre>get idle platoon of type ARMY_UNIT_TYPE_RANGED_1 nearest {MyTownCentre} radius 10</pre>

<a name="8.12.14"></a>

#### <a name="8.12.14">8.12.14 get idle platoon of type</a> [constant](constants.md#10)

Gets the idle platoon of type ARMY_UNINT_TYPE of a particular tribe nearest to the given position and within a radius in metres

<pre>get idle platoon of type ARMY_UNIT_TYPE_RANGED_1 of tribe TRIBE_TYPE_NORSE nearest {MyTownCentre} radius 10</pre>

<a name="8.12.15"></a>

#### <a name="8.12.15">8.12.15 get idle platoon of type</a> [constant](constants.md#10)

Gets the idle platoon of a type ARMY_UNIT_TYPE of a particular player nearest to the given position and within a radius in metres

<pre>get idle platoon of type ARMY_UNIT_TYPE_RANGED_1 of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.16"></a>

#### <a name="8.12.16">8.12.16 get platoon on wall of type nearest</a> [coord_expression](position.md#11)

Gets the platoon of type ARMY_UNIT_TYPE nearest to the given position and within a radius in metres

<pre>get platoon on wall of type ARMY_UNIT_TYPE_RANGED_1 nearest {MyTownCentre} radius 10</pre>

<a name="8.12.17"></a>

#### <a name="8.12.17">8.12.17 get platoon on wall of type tribe nearest</a> [coord_expression](position.md#11)

Gets the platoon of type ARMY_UNINT_TYPE of a particular tribe nearest to the given position and within a radius in metres

<pre>get platoon on wall of type ARMY_UNIT_TYPE_RANGED_1 of tribe TRIBE_TYPE_NORSE nearest {MyTownCentre} radius 10</pre>

<a name="8.12.18"></a>

#### <a name="8.12.18">8.12.18 get platoon on wall of type of player</a> [expression](expressions.md#12)

Gets the platoon of a type ARMY_UNIT_TYPE of a particular player nearest to the given position and within a radius in metres

<pre>get platoon on wall of type ARMY_UNIT_TYPE_RANGED_1 of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.19"></a>

#### <a name="8.12.19">8.12.19 get platoon on wall nearest</a> [coord_expression](position.md#11)

Gets the platoon nearest to the given position and within a radius in metres

<pre>get platoon on wall nearest {MyTownCentre} radius 10</pre>

<a name="8.12.20"></a>

#### <a name="8.12.20">8.12.20 get platoon on wall of player</a> [expression](expressions.md#12)

Gets the platoon of a particular player nearest to the given position and within a radius in metres

<pre>get platoon on wall of player CompPlayer nearest {MyTownCentre} radius 10</pre>

<a name="8.12.21"></a>

#### <a name="8.12.21">8.12.21 get platoon of type</a> [constant](constants.md#10)

gets a ramdom platoon of a type attached to a town

<pre>get platoon of type ARMY_UNIT_TYPE_RANGED_1 of town GreekTown excluding scripted</pre>

<a name="8.12.22"></a>

#### <a name="8.12.22">8.12.22 get idle platoon type</a> [constant](constants.md#10)

gets a ramdom idle platoon of a type attached to a town

<pre>get idle platoon of type ARMY_UNIT_TYPE_RANGED_1 town GreekTown</pre>

<a name="8.12.23"></a>

#### <a name="8.12.23">8.12.23 get army from platoon</a> [object](objects.md#8)

Gets the army a platoon belongs to

<pre>get army from platoon NorsePlatoon</pre>

<a name="8.12.24"></a>

#### <a name="8.12.24">8.12.24 get army nearest</a> [coord_expression](position.md#11)

Gets the army nearest to coord in radius

<pre>get army nearest {HandPos} radius 10</pre>

<a name="8.12.25"></a>

#### <a name="8.12.25">8.12.25 get army of player</a> [object](objects.md#8)

Gets the army of player nearest to coord in radius

<pre>get army of player CompPlayer nearest {HandPos} radius 10</pre>

<a name="8.12.26"></a>

#### <a name="8.12.26">8.12.26 get random villager from platoon</a> [object](objects.md#8)

gets a random villager from a platoon

<pre>MyVillager = get random villager from platoon MyPlatoon</pre>

<a name="8.12.27"></a>

#### <a name="8.12.27">8.12.27 get villager from platoon</a> [object](objects.md#8) nearest coord

gets a villager from a platoon nearest to a position

<pre>MyVillager = get villager from platoon MyPlatoon nearest {ClickedPos}</pre>

<a name="8.12.28"></a>

#### <a name="8.12.28">8.12.28 get living villager from at</a> [coord_expression](position.md#11)

gets a villager who is not dead (living/ alive/ breathing)

<pre>MyVillager = get living villager at {MyPosition} radius 15</pre>

<a name="8.12.29"></a>

#### <a name="8.12.29">8.12.29 create siege weapon</a> [constant](constants.md#10)

creates a siege weapon at the given position and assigns it to the given town (NOTE: There is no longer a distinction between a manned and unmanned seige weapon)

<pre>create siege weapon SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_1 belonging to GreekTown at {MyNewPos}</pre>

<a name="8.12.30"></a>

#### <a name="8.12.30">8.12.30 get siege weapon</a> [constant](constants.md#10)<opt_radius></opt_radius>

Gets a siege weapon of type at a position, belonging to a town

<pre>TheirWeapon = get siege weapon SIEGEWEAPON_TYPE_CATAPULT_LEVEL_1 of town TheirTown at {TheirPos} radius 10</pre>

<a name="8.12.31"></a>

#### <a name="8.12.31">8.12.31 get siege weapon</a> [constant](constants.md#10)<opt_radius></opt_radius>

Gets a siege weapon of type at a position, belonging to a player

<pre>TheirWeapon = get siege weapon SIEGEWEAPON_TYPE_CATAPULT_LEVEL_1 of player 1 at {TheirPos} excluding scripted</pre>

<a name="8.12.32"></a>

#### <a name="8.12.32">8.12.32 create missiles</a> [constant](constants.md#10) from position to position opt_speed

Creates a missile group of type (MissileTypeEnum.h) with launch type (MissileLauchEnum.h).

<pre>create missiles MISSILE_ARROW_FLAMING launch MISSILE_LAUNCH_FORTY_FIVE size 5 from MyArcherBloke to {PoorLittleHouse} speed 1.5</pre>

<a name="8.12.33"></a>

#### <a name="8.12.33">8.12.33 recruit</a> [constant](constants.md#10)

Makes a town recruit [expression](expressions.md#12)

<pre>MyPlatoon = recruit ARMY_UNIT_TYPE_MELEE_1 town MyTown platoon of size 100</pre>

<a name="8.12.34"></a>

#### <a name="8.12.34">8.12.34 recruit</a> [constant](constants.md#10) siege weapon

Makes a town recruit a siege weapon

<pre>MyCatapult = recruit SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_1 town MyTown siege weapon</pre>

<a name="8.13.1"></a>

#### <a name="8.13.1">8.13.1 make player</a> [expression](expressions.md#12)

Pours a miracle of the given type at the position specified (MiracleTypeEnum.h)

<pre>make player 0 pour spell MIRACLE_TYPE_DEATH at {MyPos}</pre>

<a name="8.13.2"></a>

#### <a name="8.13.2">8.13.2 make player</a> [expression](expressions.md#12)

Throws a miracle of the given type from the position specified, with a heading (MiracleTypeEnum.h)

<pre>make player 0 throw miracle MIRACLE_TYPE_DEATH from {MyPos} heading {OverThere}</pre>

<a name="8.13.3"></a>

#### <a name="8.13.3">8.13.3 get spell</a> [constant](constants.md#10)

Returns if a spell was cast at a position within a radois, if it was a shield then returns if a position is protected by spells NOT USING THE RADIUS.

<pre>get spell SPELL_HEAL_LEVEL_1 at {LostBrother} radius 5</pre>

<a name="8.14.1"></a>

#### <a name="8.14.1">8.14.1 create tooltip on</a> [object](objects.md#8) with text text_string opt_amount

create tooltip on an [object](objects.md#8)

<pre>BigManTT = create tooltip on MyBigMan with text "BW2T_SCRIPTS_LAND15_BIGMANSCRIPT_TOOLTIP_10"</pre>

<a name="8.14.2"></a>

#### <a name="8.14.2">8.14.2 create tooltip at</a> [coord_expression](position.md#11) with text text_string opt_amount

create tooltip at a location

<pre>TurtleLookTT = create tooltip on {TurtleLookSpot} with text "BW2T_SCRIPTS_LAND15_TURTLERACE_TOOLTIP_30"</pre>

<a name="8.14.3">

#### 8.14.3 create tooltip on hand with text text_string opt_amount

</a>

create tooltip on the hand

<pre>NotHereTT = create tooltip on hand with text "BW2T_SCRIPTS_LAND15_HANDMAZE_TOOLTIP_80"</pre>

<a name="8.15.1"></a>

#### <a name="8.15.1">8.15.1 create visual effect</a> [constant](constants.md#10)></direction>

Creates an in game visual effect at a position with a duration. See visualeffecttypeenum.h

<pre>create visual effect VISUAL_EFFECT_PLASMA_RAY at {MyPos} time 10 direction {Dir} target {Targ}</pre>

<a name="8.15.2"></a>

#### <a name="8.15.2">8.15.2 create visual effect</a> [constant](constants.md#10) time

Creates an in game visual effect on an [object](objects.md#8) with a duration.

<pre>create visual effect VISUAL_EFFECT_PLASMA_RAY on ARock time 0.5</pre>

<a name="8.15.3"></a>

#### <a name="8.15.3">8.15.3 create visual effect string at position time</a> [expression](expressions.md#12)

Creates an in game visual effect at a position with a duration. Takes a string

<pre>FX = create visual effect "TestEffect" strength 0.1 scale 0.4 at {MyPos} time -1 direction {Dir} target {Targ}</pre>

<a name="8.15.4"></a>

#### <a name="8.15.4">8.15.4 create visual effect string on</a> [object](objects.md#8) time

Creates an in game visual effect on an [object](objects.md#8) with a duration. Takes a string

<pre>create visual effect "TestEffect" strength 0.2 scale 0.7 on BertieBigBollocks time -1</pre>

<a name="8.15.5"></a>

#### <a name="8.15.5">8.15.5 create visual effect string strength</a> [expression](expressions.md#12) left_right hand

Creates an in game visual effect on the creatures hand with a duration. Takes a string

<pre>create visual effect "TestEffect" strength 0.2 scale 0.7 on creature MyCreature left hand time -1</pre>
