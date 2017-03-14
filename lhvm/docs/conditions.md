# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="6"></a> 6 Conditions

A [condition](conditions.md#6) is something that is either true or false. It is used primarily for [if block](statements.md#3.29.1)s, [while loop](statements.md#3.29.2)s and [wait until](statements.md#3.25.1).

See also:

*   [Statements](statements.md#3)
*   [Objects](objects.md#8)
*   [Constants](constants.md#10)
*   [Position](position.md#11)
*   [Expressions](expressions.md#12)

<a name="6.1"></a>

### <a name="6.1">6.1 Conditions testing generic</a> [object](objects.md#8)s

A [condition](conditions.md#6) is doing something or is in a particular state.

1.  [get villagers ignore object resource](#6.1.1)
2.  [object active](#6.1.2)
3.  [object can view camera](#6.1.3)
4.  [object left_right clicked](#6.1.4)
5.  [object hit](#6.1.5)
6.  [object hit land](#6.1.6)
7.  [object hit land position](#6.1.7)
8.  [object locked interaction](#6.1.8)
9.  [object played](#6.1.9)
10.  [object decayed](#6.1.10)
11.  [object skeleton](#6.1.11)
12.  [object of type types](#6.1.12)
13.  [object on fire](#6.1.13)
14.  [object in object hand](#6.1.14)
15.  [object in limbo](#6.1.15)
16.  [object not in object hand](#6.1.16)
17.  [object is constant](#6.1.17)
18.  [object is not constant](#6.1.18)
19.  [object exists](#6.1.19)
20.  [object not exists](#6.1.20)
21.  [object frozen](#6.1.21)
22.  [object hit by arrow](#6.1.22)
23.  [object controlled by script](#6.1.23)
24.  [object is moving](#6.1.24)
25.  [object has damage decal](#6.1.25)
26.  [object has damage cleave](#6.1.26)

<a name="6.2">

### 6.2 Conditions testing navigation

</a>

These only work on navigable [object](objects.md#8)s. Namely, villagers, animals, creatures and army units.

1.  [object can navigate to coord_expression](#6.2.1)
2.  [object can navigate to object object](#6.2.2)
3.  [object preview nav ready](#6.2.3)
4.  [can object preview nav succeed](#6.2.4)
5.  [is navigation stable](#6.2.5)

<a name="6.3">

### 6.3 Conditions testing the sky

</a>

These [condition](conditions.md#6)s test what state the sky is in

1.  [sky is in transition](#6.3.1)
2.  [hand over sky](#6.3.2)

<a name="6.4">

### 6.4 Conditions testing miracles

</a>

These [condition](conditions.md#6)s test the state of miracles, both normal and epic.

1.  [spell constant in object](#6.4.1)
2.  [spell constant for player expression](#6.4.2)
3.  [player expresion spell charging](#6.4.3)
4.  [player expresion specific spell charging](#6.4.4)
5.  [wonder fire near coord_expression radius expression](#6.4.5)
6.  [wonder in hand](#6.4.6)

<a name="6.5">

### 6.5 Conditions testing dialogue and sound

</a>

These [condition](conditions.md#6)s test wheather dialogue, music and sound has been played, as well as tests on the advisors.

1.  [constant music played](#6.5.1)
2.  [spirit_type played](#6.5.2)
3.  [spirit_type speaks expressions](#6.5.3)
4.  [spirit_type speaks in expression](#6.5.4)
5.  [dialogue ready](#6.5.5)
6.  [spirit not ready](#6.5.6)
7.  [read](#6.5.7)
8.  [sound exists](#6.5.8)
9.  [sound string playing](#6.5.9)
10.  [music line expression](#6.5.10)

<a name="6.6">

### 6.6 Conditions testing containers

</a>

These [condition](conditions.md#6)s within them

1.  [object within flock distance](#6.6.1)
2.  [object in object](#6.6.2)
3.  [object not in object](#6.6.3)

<a name="6.7">

### 6.7 Conditions testing creatures

</a>

These [condition](conditions.md#6)s test what a creature is doing.

1.  [leash is in hand](#6.7.1)
2.  [object cast by object](#6.7.2)
3.  [creature constant is available](#6.7.3)
4.  [desire of object is constant](#6.7.4)
5.  [object leashed](#6.7.5)
6.  [object leashed to object](#6.7.6)
7.  [object knows action constant](#6.7.7)
8.  [object fighting](#6.7.8)
9.  [object is auto fighting](#6.7.9)
10.  [ask creature object to enter scripted learning for constant with object](#6.7.10)
11.  [creature object finished script action](#6.7.11)

<a name="6.8"></a>

### <a name="6.8">6.8 Conditions testing</a> [object](objects.md#8)ives

These [condition](conditions.md#6)ives are in.

1.  [get player expression objective constant status](#6.8.1)
2.  [player expression objective constant complete](#6.8.2)
3.  [land end objectives processed](#6.8.3)
4.  [player expression objective constant hidden](#6.8.4)

<a name="6.9">

### 6.9 Conditions testing towns

</a>

These [condition](conditions.md#6)s test what state a town is in.

1.  [is town object of size type constant](#6.9.1)
2.  [is town object settlement](#6.9.2)
3.  [town object is under takeover from player expression](#6.9.3)
4.  [can town object recruit constant platoon of size expression](#6.9.4)
5.  [can town object recruit constant siege weapon](#6.9.5)
6.  [object in hand can be placed](#6.9.6)
7.  [pilgrimage object ready](#6.9.7)

<a name="6.10">

### 6.10 Conditions testing hand demos and video playback

</a>

These [condition](conditions.md#6)s test what state videos and hand demos are in.

1.  [video is playing](#6.10.1)
2.  [hand demo played](#6.10.2)
3.  [hand demo trigger](#6.10.3)

<a name="6.11">

### 6.11 Conditions testing the whole game

</a>

These [condition](conditions.md#6)s test what state the game is in, as well as providing general true/false functionality

1.  [expression second[s]](#6.11.1)
2.  [help system on](#6.11.2)
3.  [creature help on](#6.11.3)
4.  [game is min spec](#6.11.4)

<a name="6.12">

### 6.12 Conditions testing villagers

</a>

These [condition](conditions.md#6)s test what state a villager is in

1.  [object is male](#6.12.1)
2.  [object is drowning](#6.12.2)
3.  [animation marker string on object played](#6.12.3)
4.  [villager object can be imprisoned](#6.12.4)
5.  [villager object can react](#6.12.5)
6.  [villager object available](#6.12.6)
7.  [villager object using alternative mesh](#6.12.7)

<a name="6.13">

### 6.13 Conditions testing armies

</a>

These [condition](conditions.md#6)s test what state a platoon or a catapult is in.

1.  [platoon object ranged](#6.13.1)
2.  [platoon object melee](#6.13.2)
3.  [platoon object melee fighting](#6.13.3)
4.  [platoon object ranged fighting](#6.13.4)
5.  [platoon object fighting](#6.13.5)
6.  [platoon object attacking platoon object](#6.13.6)
7.  [platoon object under fire](#6.13.7)
8.  [platoon object idle](#6.13.8)
9.  [army unit object is fighting](#6.13.9)
10.  [object interacting with object](#6.13.10)
11.  [object is on wall](#6.13.11)
12.  [army flag constant held](#6.13.12)
13.  [coord_expression is in range of object](#6.13.13)
14.  [object recruiting](#6.13.14)
15.  [object disbanding](#6.13.15)
16.  [does platoon respond to town attack](#6.13.16)
17.  [does platoon respond to local platoon attack](#6.13.17)
18.  [platoon object current action is constant using object](#6.13.18)
19.  [platoon object current action is constant using coord_expression](#6.13.19)
20.  [siege weapon object current action is constant using object](#6.13.20)
21.  [siege weapon object current action is constant using coord_expression](#6.13.21)

<a name="6.14">

### 6.14 Conditions testing gates

</a>

These [condition](conditions.md#6)s test what state a gate or wall is in

1.  [gate object open](#6.14.1)
2.  [gate object moving](#6.14.2)
3.  [does object connect to object](#6.14.3)

<a name="6.15">

### 6.15 Conditions testing the camera

</a>

These [condition](conditions.md#6)s test what state the camera is in, as well as whethere the game is in widescreen or not.

1.  [in widescreen](#6.15.1)
2.  [camera ready](#6.15.2)
3.  [cinema skipped](#6.15.3)
4.  [widescreen transistion complete](#6.15.4)
5.  [fade ready](#6.15.5)
6.  [camera not ready](#6.15.6)

<a name="6.16">

### 6.16 Conditions testing the interface

</a>

These [condition](conditions.md#6)s test what the player is doing, as well as what the menu and tooltips are doing.

1.  [if bindable action constant performed](#6.16.1)
2.  [key constant down](#6.16.2)
3.  [mouse left_right_middle button down](#6.16.3)
4.  [mouse left_right_middle opt_double clicked](#6.16.4)
5.  [within rotation](#6.16.5)
6.  [player has mouse wheel](#6.16.6)
7.  [toolbar handle held](#6.16.7)

<a name="6.17"></a>

### <a name="6.17">6.17 Conditions testing</a> [coord_expression](position.md#11)s

A [condition](conditions.md#6)s can be used to test whether or not a location is somewhere compared to another location.

1.  [coord_expression viewed](#6.17.1)
2.  [coord_expression ahead of camera](#6.17.2)
3.  [player expression cast miracle MY_MIRACLE near coord_expression radius expression](#6.17.3)
4.  [coord_expression valid for creature](#6.17.4)
5.  [coord_expression left_right clicked radius expression](#6.17.5)
6.  [fire near coord_expression radius expression](#6.17.6)
7.  [coord_expression near coord_expression radius](#6.17.7)
8.  [coord_expression not near coord_expression radius](#6.17.8)
9.  [coord_expression at coord_expression](#6.17.9)
10.  [coord_expression not at coord_expression](#6.17.10)
11.  [coord_expression near constant cast by player expression radius effect range expression](#6.17.11)
12.  [coord_expression is under landscape](#6.17.12)
13.  [coord_expression and coord_expression on same side of line between coord_expression and coord_expression](#6.17.13)
14.  [coord_expression on land](#6.17.14)
15.  [coord_expression under water](#6.17.15)
16.  [position coord_expression scrubbed radius epression](#6.17.16)

<a name="6.18">

### 6.18 Logical Operators

</a>

Operators that return BOOLEAN values.

1.  [not condition](#6.18.1)
2.  [condition and condition](#6.18.2)
3.  [condition or condition](#6.18.3)
4.  [expression == expression](#6.18.4)
5.  [expression != expression](#6.18.5)
6.  [expression >= expression](#6.18.6)
7.  [expression <= expression](#6.18.7)
8.  [expression > expression](#6.18.8)
9.  [expression < expression](#6.18.9)

* * *

<a name="6.1.1"></a>

#### <a name="6.1.1">6.1.1 get villagers ignore</a> [object](objects.md#8) resource

returns whether or not villagers are ignore the fact that the [object](objects.md#8) has a resource

<pre>Ignoring = get villagers ignore MyTree resource</pre>

<a name="6.1.2"></a>

#### <a name="6.1.2">6.1.2</a> [object](objects.md#8) active

If an [object](objects.md#8) is active - eg. ScriptHighlight is active, spell dispenser active or reward is opened

<pre>Reward active</pre>

<a name="6.1.3"></a>

#### <a name="6.1.3">6.1.3</a> [object](objects.md#8) can view camera

Returns if an [object](objects.md#8) can view the camera

<pre>LostBrother can view camera</pre>

<a name="6.1.4"></a>

#### <a name="6.1.4">6.1.4</a> [object](objects.md#8) left_right clicked

If an [object](objects.md#8) clicked and has been clicked in the last few seconds then this check is true.

<a name="6.1.5"></a>

#### <a name="6.1.5">6.1.5</a> [object](objects.md#8) hit

Checks what if an [object](objects.md#8).

<a name="6.1.6"></a>

#### <a name="6.1.6">6.1.6</a> [object](objects.md#8) hit land

Checks if an [object](objects.md#8).

<pre>Puck hit land</pre>

<a name="6.1.7"></a>

#### <a name="6.1.7">6.1.7</a> [object](objects.md#8) hit land position

Checks where the [object](objects.md#8).

<pre>Puck hit land position</pre>

<a name="6.1.8"></a>

#### <a name="6.1.8">6.1.8</a> [object](objects.md#8) locked interaction

If an [object](objects.md#8) is in locked interaction - eg. Totem moving up and down, creature stroking.

<a name="6.1.9"></a>

#### <a name="6.1.9">6.1.9</a> [object](objects.md#8) played

A check on if an [object](objects.md#8) has finished playing it's animation or if weather has finished it's current storm.

<pre>LostBrother played</pre>

<a name="6.1.10"></a>

#### <a name="6.1.10">6.1.10</a> [object](objects.md#8) decayed

A check on an [object](objects.md#8) to see if it is decayed

<pre>LostBrother decayed</pre>

<a name="6.1.11"></a>

#### <a name="6.1.11">6.1.11</a> [object](objects.md#8) skeleton

A check on an [object](objects.md#8) to see if it is a skeleton

<pre>LostBrother skeleton</pre>

<a name="6.1.12"></a>

#### <a name="6.1.12">6.1.12</a> [object](objects.md#8) of type types

A check on an [object](objects.md#8) to see if it is of a certain type

<pre>Animal of type ANIMAL COW</pre>

<a name="6.1.13"></a>

#### <a name="6.1.13">6.1.13</a> [object](objects.md#8) on fire

A check on an [object](objects.md#8) to see if it is on fire.

<pre>LostBrother on fire</pre>

<a name="6.1.14"></a>

#### <a name="6.1.14">6.1.14</a> [object](objects.md#8) hand

Checks if in an [object](objects.md#8).

<pre>MyToy in MyCreature hand</pre>

<a name="6.1.15"></a>

#### <a name="6.1.15">6.1.15</a> [object](objects.md#8) in limbo

Checks if in an [object](objects.md#8) is in limbo

<pre>Johhny in limbo</pre>

<a name="6.1.16"></a>

#### <a name="6.1.16">6.1.16</a> [object](objects.md#8) hand

Checks if in an [object](objects.md#8)s hand.

<pre>MyToy not in MyCreature hand</pre>

<a name="6.1.17"></a>

#### <a name="6.1.17">6.1.17</a> [object](objects.md#8)

Casts the result of a get property to BOOLEAN - Not sure if this function is used...

<pre>MyHouse is HOUSE_A</pre>

<a name="6.1.18"></a>

#### <a name="6.1.18">6.1.18</a> [object](objects.md#8)

Checks if an [object](objects.md#8).

<pre>MyHouse is not HOUSE_A</pre>

<a name="6.1.19"></a>

#### <a name="6.1.19">6.1.19</a> [object](objects.md#8) exists

checks a variable to see if it has a game thing.

<pre>LostBrother exists</pre>

<a name="6.1.20"></a>

#### <a name="6.1.20">6.1.20</a> [object](objects.md#8) not exists

Checks a variable to see if it has not been assigned a game thing.

<pre>LostBrother not exists</pre>

<a name="6.1.21"></a>

#### <a name="6.1.21">6.1.21</a> [object](objects.md#8) frozen

returns true if [object](objects.md#8) is frozen

<pre>if MyGoolies frozen</pre>

<a name="6.1.22"></a>

#### <a name="6.1.22">6.1.22</a> [object](objects.md#8) hit by arrow

returns true if the given [object](objects.md#8) has been hit by an arrow. must have physics tracking enabled.

<pre>if MyVillager hit by arrow</pre>

<a name="6.1.23"></a>

#### <a name="6.1.23">6.1.23</a> [object](objects.md#8) controlled by script

returns true if the [object](objects.md#8) is at the final position in its waypoint schedule

<pre>MonsterFood controlled by script</pre>

<a name="6.1.24"></a>

#### <a name="6.1.24">6.1.24</a> [object](objects.md#8) is moving

returns true if the [object](objects.md#8) is moving from one location to another (as opposed to moving on the spot or wanting to move somewhere)

<pre>Army324 is moving</pre>

<a name="6.1.25"></a>

#### <a name="6.1.25">6.1.25</a> [object](objects.md#8) has damage decal

returns true if the has a damage decal on it

<pre>RodleHouse has damage decal</pre>

<a name="6.1.26"></a>

#### <a name="6.1.26">6.1.26</a> [object](objects.md#8) has damage cleave

returns true if the has been cleaved

<pre>TorledHouse has damage cleave</pre>

<a name="6.2.1"></a>

#### <a name="6.2.1">6.2.1</a> [object](objects.md#8)

Does navigation think this [object](objects.md#8) can navigate succesfully to the indicated position. This may not be stable, even if 'is navigation stable' returns true... as the player may build a wall in the way after the navigation starts...

<pre>OverLord can navigate to {GodHome}</pre>

See also:

*   [is navigation stable](conditions.md#6.2.5)
*   [move object position to position](statements.md#3.1.1)

<a name="6.2.2"></a>

#### <a name="6.2.2">6.2.2</a> [object](objects.md#8)

Does navigation think this [object](objects.md#8). This may not be stable, even if 'is navigation stable' returns true... as the player may build a wall in the way after the navigation starts...

<pre>OverLord can navigate to [object](objects.md#8) GodHome</pre>

<a name="6.2.3"></a>

#### <a name="6.2.3">6.2.3</a> [object](objects.md#8) preview nav ready

has the preview nav finished calculating?

<pre>ReadyToCheck = MyPlatoon preview nav ready</pre>

<a name="6.2.4"></a>

#### <a name="6.2.4">6.2.4 can</a> [object](objects.md#8) preview nav succeed

can the platoon's preview nav succeed

<pre>CanGo = can MyPlatoon preview nav succeed</pre>

<a name="6.2.5">

#### 6.2.5 is navigation stable

</a>

is a call to '[object](objects.md#8)' guaranteed?

<pre>is navigation stable</pre>

See also:

*   [object can navigate to coord_expression](conditions.md#6.2.1)

<a name="6.3.1">

#### 6.3.1 sky is in transition

</a>

checks to see if the sky is in transition

<pre>[wait until](statements.md#3.25.1) sky is in transition</pre>

<a name="6.3.2">

#### 6.3.2 hand over sky

</a>

Is the hand over the sky?

<pre>[wait until](statements.md#3.25.1) hand over sky</pre>

<a name="6.4.1"></a>

#### <a name="6.4.1">6.4.1 spell</a> [constant](constants.md#10)

Has an [object](objects.md#8) got a spell. (Worship sites/towns/towncentres)

<pre>spell MAGIC_TYPE_WOOD in MyWorshipSite</pre>

<a name="6.4.2"></a>

#### <a name="6.4.2">6.4.2 spell</a> [constant](constants.md#10)

checks if a player has a specific spell

<pre>spell SPELL_HEAL_LEVEL_1 for player 1</pre>

<a name="6.4.3">

#### 6.4.3 player expresion spell charging

</a>

Check if a spell (any) is charging for a player

<pre>player 1 spell charging</pre>

<a name="6.4.4">

#### 6.4.4 player expresion specific spell charging

</a>

Check if a specific spell is charging for a player

<pre>player 1 spell SPELL_FOOD charging</pre>

<a name="6.4.5"></a>

#### <a name="6.4.5">6.4.5 wonder fire near</a> [coord_expression](position.md#11)

Returns true if a wonder has recently been fired near the specified location

<pre>if wonder fire near {ScriptLoc} radius 100</pre>

<a name="6.4.6">

#### 6.4.6 wonder in hand

</a>

Returns true if the player's hand is holding a wonder spell

<pre>if wonder in hand</pre>

<a name="6.5.1"></a>

#### <a name="6.5.1">6.5.1</a> [constant](constants.md#10) music played

Returns if the script music passed is no longer playing

<pre>MUSIC_TYPE_SCRIPT_MISSIONARIES_VERSE_1 music played</pre>

<a name="6.5.2"></a>

#### <a name="6.5.2">6.5.2</a> [spirit_type](spirit_type.md#13) played

A check on if a [spirit_type](spirit_type.md#13) has finished playing it's animation.

<pre>good spirit played</pre>

<a name="6.5.3"></a>

#### <a name="6.5.3">6.5.3</a> [spirit_type](spirit_type.md#13) speaks [expression](expressions.md#12)s

A check on if a [spirit_type](spirit_type.md#13) speaks the text? Hasn't been used in a long time. May not work.

<pre>good spirit speaks 102</pre>

<a name="6.5.4"></a>

#### <a name="6.5.4">6.5.4</a> [spirit_type](spirit_type.md#13) speaks in [expression](expressions.md#12)

Does the [spirit_type](spirit_type.md#13) speak in the text group? Hasn't been used in a long time. May not work.

<pre>good spirit speaks in GroupID</pre>

<a name="6.5.5">

#### 6.5.5 dialogue ready

</a>

Returns if we can have dialogue control.

<pre>dialogue ready</pre>

<a name="6.5.6">

#### 6.5.6 spirit not ready

</a>

Returns true if a spirit is not ready.

<pre>spirit not ready</pre>

<a name="6.5.7">

#### 6.5.7 read

</a>

Checks if text is being outputted to the screen. Often used after a say statement in the form: [wait until](statements.md#3.25.1) read.

<pre>read</pre>

<a name="6.5.8">

#### 6.5.8 sound exists

</a>

checks if a player has sound

<pre>sound exists</pre>

<a name="6.5.9">

#### 6.5.9 sound string playing

</a>

Is a say sound playing?

<pre>if say sound "HELP_TEXT_DEFINITELY_NEWEST_INTRO_01" playing</pre>

<a name="6.5.10"></a>

#### <a name="6.5.10">6.5.10 music line</a> [expression](expressions.md#12)

Look at the last line of music that was playing. Has not been used for a long time and may not work.

<pre>[wait until](statements.md#3.25.1) music line 6</pre>

<a name="6.6.1"></a>

#### <a name="6.6.1">6.6.1</a> [object](objects.md#8) within flock distance

Returns all members of a flock within their flock limits?

<pre>MyFlock within flock limits</pre>

<a name="6.6.2"></a>

#### <a name="6.6.2">6.6.2</a> [object](objects.md#8)

Checks if an [object](objects.md#8) is within a container ie. Dance, Flock or Town.

<pre>MySheep in MyFlock</pre>

<a name="6.6.3"></a>

#### <a name="6.6.3">6.6.3</a> [object](objects.md#8)

Checks that an [object](objects.md#8) is not within a container.

<pre>MySheep not in MyFlock</pre>

<a name="6.7.1">

#### 6.7.1 leash is in hand

</a>

Checks if the creature leash is in the hand

<pre>[wait until](statements.md#3.25.1) leash is in hand</pre>

<a name="6.7.2"></a>

#### <a name="6.7.2">6.7.2</a> [object](objects.md#8)

A check on if an [object](objects.md#8). Hasn't been used in a long time. May not work.

<pre>MySpell cast by MyCreature</pre>

<a name="6.7.3"></a>

#### <a name="6.7.3">6.7.3 creature</a> [constant](constants.md#10) is available

See if player has a creature type available.

<pre>creature CREATURE_TYPE_LEOPARD is available</pre>

<a name="6.7.4"></a>

#### <a name="6.7.4">6.7.4 desire of</a> [object](objects.md#8)

Compares the desire of an [object](objects.md#8) to a specified desire. Suitable for checking the desire of a creature.

<pre>desire of MyCreature is TO_REST</pre>

<a name="6.7.5"></a>

#### <a name="6.7.5">6.7.5</a> [object](objects.md#8) leashed

Returns if an [object](objects.md#8) is leashed or not.

<pre>[object](objects.md#8) leashed</pre>

<a name="6.7.6"></a>

#### <a name="6.7.6">6.7.6</a> [object](objects.md#8)

Returns if an [object](objects.md#8) or not.

<pre>MyCreature leashed to Rock</pre>

<a name="6.7.7"></a>

#### <a name="6.7.7">6.7.7</a> [object](objects.md#8)

Returns if an [object](objects.md#8) knows an action (see CREATURE_ACTION_KNOWN_ABOUT in enum.h)

<pre>MyCreature knows action CREATURE_ACTION_KNOWN_ABOUT_BUILD</pre>

<a name="6.7.8"></a>

#### <a name="6.7.8">6.7.8</a> [object](objects.md#8) fighting

Returns if a creature [object](objects.md#8) is fighting.

<pre>[object](objects.md#8) fighting</pre>

<a name="6.7.9"></a>

#### <a name="6.7.9">6.7.9</a> [object](objects.md#8) is auto fighting

checks if a creature is auto fighting whenin a fight. This hasn't been used for a long time and may not work.

<pre>[object](objects.md#8) is auto fighting</pre>

<a name="6.7.10"></a>

#### <a name="6.7.10">6.7.10 ask creature</a> [object](objects.md#8)

Asks the creature to enter scripted learning mode. This hasn't been used for a long time and may not work.

<pre>IsInLearning = ask creature MyCreature to enter scripted learning for CREATURE_THROW_BALL_AT_OBJECT with Mouth</pre>

<a name="6.7.11"></a>

#### <a name="6.7.11">6.7.11 creature</a> [object](objects.md#8) finished script action

returns true if the given creature has finished a script action

<pre>if creature MyCreature finished script action</pre>

<a name="6.8.1"></a>

#### <a name="6.8.1">6.8.1 get player</a> [expression](expressions.md#12) status

gets the status of an [object](objects.md#8)ive

<pre>ObjStat = variable get player 0 [object](objects.md#8)ive TRIBUTE_OBJECTIVE_COLLECT_WOOD status</pre>

<a name="6.8.2"></a>

#### <a name="6.8.2">6.8.2 player</a> [expression](expressions.md#12) complete

Check to see if an [object](objects.md#8)ive is complete

<pre>if player 0 [object](objects.md#8)ive TRIBUTE_OBJECTIVE_COLLECT_WOOD complete</pre>

<a name="6.8.3"></a>

#### <a name="6.8.3">6.8.3 land end</a> [object](objects.md#8)ives processed

Have the end of land [object](objects.md#8)ives been processed

<pre>[wait until](statements.md#3.25.1) land end [object](objects.md#8)ives processed</pre>

<a name="6.8.4"></a>

#### <a name="6.8.4">6.8.4 player</a> [expression](expressions.md#12) hidden

Check to see if an [object](objects.md#8)ive is hidden

<pre>if player 0 [object](objects.md#8)ive TRIBUTE_OBJECTIVE_COLLECT_WOOD hidden</pre>

<a name="6.9.1"></a>

#### <a name="6.9.1">6.9.1 is town</a> [object](objects.md#8)

how big is a town - village, town, city?

<pre>is town BigTown of size type SCRIPT_SETTLEMENT_SIZE_TOWN</pre>

<a name="6.9.2"></a>

#### <a name="6.9.2">6.9.2 is town</a> [object](objects.md#8) settlement

is the town [object](objects.md#8) actually a settlement?

<pre>is town MyTown settlement</pre>

<a name="6.9.3"></a>

#### <a name="6.9.3">6.9.3 town</a> [object](objects.md#8)

returns true if the town is being taken over by the player

<pre>[wait until](statements.md#3.25.1) town MyTown is under takeover from player 1</pre>

<a name="6.9.4"></a>

#### <a name="6.9.4">6.9.4 can town</a> [object](objects.md#8)

Returns true if the town can recruit x soldiers

<pre>CanRecruit = can town MyTown recruit ARMY_UNIT_TYPE_MELEE_1 platoon of size 100</pre>

<a name="6.9.5"></a>

#### <a name="6.9.5">6.9.5 can town</a> [object](objects.md#8) siege weapon

Returns true if the town can recruit the siege weapon

<pre>CanRecruit = can town MyTown recruit SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_1 siege weapon</pre>

<a name="6.9.6"></a>

#### <a name="6.9.6">6.9.6</a> [object](objects.md#8) in hand can be placed

returns whether the building placement in the hand can be placed

<pre>CanPlace = [object](objects.md#8) in hand can be placed</pre>

<a name="6.9.7"></a>

#### <a name="6.9.7">6.9.7 pilgrimage</a> [object](objects.md#8) ready

returns true if a pilgrimage [object](objects.md#8) is ready to be asked to accept or decline

<pre>if pilgrims [object](objects.md#8) ready</pre>

<a name="6.10.1">

#### 6.10.1 video is playing

</a>

checks to see if a video is playing

<pre>[wait until](statements.md#3.25.1) not video is playing</pre>

<a name="6.10.2">

#### 6.10.2 hand demo played

</a>

Checks to see if a hand demo is running

<pre>hand demo played</pre>

<a name="6.10.3">

#### 6.10.3 hand demo trigger

</a>

If the hand demo trigger has been set to TRUE. The hand demo can be created with triggers. Calling this will tell when a trigger is come across. Not that triggers are clear once this function is called.

<pre>hand demo trigger</pre>

<a name="6.11.1"></a>

#### <a name="6.11.1">6.11.1</a> [expression](expressions.md#12) second[s]

Waits for a number of second(s) to elapse from the moment the instruction is called.

<a name="6.11.2">

#### 6.11.2 help system on

</a>

Returns if the help system is on.

<pre>help system on</pre>

<a name="6.11.3">

#### 6.11.3 creature help on

</a>

Returns if the creature help system is on.

<pre>creature help on</pre>

<a name="6.11.4">

#### 6.11.4 game is min spec

</a>

returns true if the game is in min spec

<pre>if game is min spec</pre>

<a name="6.12.1"></a>

#### <a name="6.12.1">6.12.1</a> [object](objects.md#8) is male

Checks the sex of an [object](objects.md#8) for if it's male.

<a name="6.12.2"></a>

#### <a name="6.12.2">6.12.2</a> [object](objects.md#8) is drowning

Checks if the [object](objects.md#8) is drowning. May provide odd results for non-villagers.

<a name="6.12.3"></a>

#### <a name="6.12.3">6.12.3 animation marker string on</a> [object](objects.md#8) played

returns true if the animation marker has been reached

<pre>animation marker "MyMarker" on MyVillager played</pre>

<a name="6.12.4"></a>

#### <a name="6.12.4">6.12.4 villager</a> [object](objects.md#8) can be imprisoned

returns true if the villager [object](objects.md#8) can be imprisoned

<pre>villager MyLittleThief can be imprisoned</pre>

<a name="6.12.5"></a>

#### <a name="6.12.5">6.12.5 villager</a> [object](objects.md#8) can react

returns true if the villager [object](objects.md#8) can react

<pre>villager MyLittleThief can react</pre>

<a name="6.12.6"></a>

#### <a name="6.12.6">6.12.6 villager</a> [object](objects.md#8) available

returns false if the villager [object](objects.md#8) is doing anything easily testable for

<pre>villager MyBigBoy available</pre>

<a name="6.12.7"></a>

#### <a name="6.12.7">6.12.7 villager</a> [object](objects.md#8) using alternative mesh

returns true if the position is on land

<pre>villager Guy42 using alternative mesh</pre>

<a name="6.13.1"></a>

#### <a name="6.13.1">6.13.1 platoon</a> [object](objects.md#8) ranged

returns true if the given platoon is ranged

<pre>platoon MyPlatoon ranged</pre>

<a name="6.13.2"></a>

#### <a name="6.13.2">6.13.2 platoon</a> [object](objects.md#8) melee

returns true if the given platoon is melee

<pre>platoon MyPlatoon melee</pre>

<a name="6.13.3"></a>

#### <a name="6.13.3">6.13.3 platoon</a> [object](objects.md#8) melee fighting

returns true if the platoon is currently engaged in fisticuffs

<pre>platoon MyPlatoon melee fighting</pre>

<a name="6.13.4"></a>

#### <a name="6.13.4">6.13.4 platoon</a> [object](objects.md#8) ranged fighting

returns true if the platoon is currently ranged fighting

<pre>platoon MyPlatoon ranged fighting</pre>

<a name="6.13.5"></a>

#### <a name="6.13.5">6.13.5 platoon</a> [object](objects.md#8) fighting

returns true if the platoon is currently fighting

<pre>platoon MyPlatoon fighting</pre>

<a name="6.13.6"></a>

#### <a name="6.13.6">6.13.6 platoon</a> [object](objects.md#8)

returns true if the platoon is currently fighting with the second platoon

<pre>if platoon MyPlatoon attacking platoon TheirPlatoon</pre>

<a name="6.13.7"></a>

#### <a name="6.13.7">6.13.7 platoon</a> [object](objects.md#8) under fire

returns true if the platoon is currently being shot at

<pre>if platoon MyPlatoon under fire</pre>

<a name="6.13.8"></a>

#### <a name="6.13.8">6.13.8 platoon</a> [object](objects.md#8) idle

returns true if the platoon is idle

<pre>[wait until](statements.md#3.25.1) platoon MyPlatoon idle</pre>

<a name="6.13.9"></a>

#### <a name="6.13.9">6.13.9 army unit</a> [object](objects.md#8) is fighting

returns true if the unit is fighting

<pre>if army unit SwordGuy is fighting</pre>

<a name="6.13.10"></a>

#### <a name="6.13.10">6.13.10</a> [object](objects.md#8)

Is [object](objects.md#8). Works only on creatures and platoons.

<pre>MyCreature interacting with Totem</pre>

<a name="6.13.11"></a>

#### <a name="6.13.11">6.13.11</a> [object](objects.md#8) is on wall

Returns true if the [object](objects.md#8) is on a wall. Works for army units.

<pre>if MyGuy is on wall</pre>

<a name="6.13.12"></a>

#### <a name="6.13.12">6.13.12 army flag</a> [constant](constants.md#10) held

checks to see if the given type of army flag is held

<pre>[wait until](statements.md#3.25.1) army flag ARMY_FLAG_INFO_GREEK_MELEE held</pre>

<a name="6.13.13"></a>

#### <a name="6.13.13">6.13.13</a> [coord_expression](position.md#11)

checks to see if the position is within firing range of the [object](objects.md#8) (siege weapon or ranged platoon)

<pre>[wait until](statements.md#3.25.1) {TownCentre} is in range of MyTroops</pre>

<a name="6.13.14"></a>

#### <a name="6.13.14">6.13.14</a> [object](objects.md#8) recruiting

checks to see if a platoon or siegeweapon is recruiting

<pre>[wait until](statements.md#3.25.1) not MyPlatoon recruiting</pre>

<a name="6.13.15"></a>

#### <a name="6.13.15">6.13.15</a> [object](objects.md#8) disbanding

checks to see if platoon is disbanding

<pre>[wait until](statements.md#3.25.1) MyPlatoon disbanding</pre>

<a name="6.13.16">

#### 6.13.16 does platoon respond to town attack

</a>

Returns true if platoon is set to respond to attack on that town

<pre>ResponseEnabled = does platoon MyPlatoon respond to town MyTown attack</pre>

<a name="6.13.17">

#### 6.13.17 does platoon respond to local platoon attack

</a>

Returns true if platoon is set to respond to attack on local platoons

<pre>ResponseEnabled = does platoon MyPlatoon respond to local platoon attack</pre>

<a name="6.13.18"></a>

#### <a name="6.13.18">6.13.18 platoon</a> [object](objects.md#8)

Returns true if platoons current action is the one specified

<pre>if platoon MyPlatoon current action is PLATOON_AGENDA_ACTION_ATTACK_TOWN_CENTRE_FOR_TAKE_OVER using MyTown</pre>

<a name="6.13.19"></a>

#### <a name="6.13.19">6.13.19 platoon</a> [object](objects.md#8)

Returns true if platoons current action is the one specified

<pre>if platoon MyPlatoon current action is PLATOON_AGENDA_ACTION_MOVE_TO_POS using {MyPos}</pre>

<a name="6.13.20"></a>

#### <a name="6.13.20">6.13.20 siege weapon</a> [object](objects.md#8)

Returns true if siege weapons current action is the one specified

<pre>if siege weapon MyCatapult current action is SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using MyWall</pre>

<a name="6.13.21"></a>

#### <a name="6.13.21">6.13.21 siege weapon</a> [object](objects.md#8)

Returns true if siege weapons current action is the one specified

<pre>if siege weapon MyCatapult current action is SIEGEWEAPON_AGENDA_ACTION_MOVE_TO_POS using {MyPos}</pre>

<a name="6.14.1"></a>

#### <a name="6.14.1">6.14.1 gate</a> [object](objects.md#8) open

returns true if the given gatehouse [object](objects.md#8) is open

<pre>gate TheTownGatehouse is open</pre>

<a name="6.14.2"></a>

#### <a name="6.14.2">6.14.2 gate</a> [object](objects.md#8) moving

returns true if the given gatehouse [object](objects.md#8) is moving

<pre>gate TheTownGatehouse is moving</pre>

<a name="6.14.3"></a>

#### <a name="6.14.3">6.14.3 does</a> [object](objects.md#8)

Returns true if two [object](objects.md#8)s are connected (wall towers connected by a wall)

<pre>Connected = does MyTower connect to MyOtherTower</pre>

<a name="6.15.1">

#### 6.15.1 in widescreen

</a>

Checks are we in a widescreen section.

<pre>[wait until](statements.md#3.25.1) in widescreen</pre>

<a name="6.15.2">

#### 6.15.2 camera ready

</a>

Has the camera has reached the position it is going to.

<pre>[wait until](statements.md#3.25.1) camera ready</pre>

<a name="6.15.3">

#### 6.15.3 cinema skipped

</a>

Has the interruptible cinema been skipped

<pre>if cinema skipped</pre>

<a name="6.15.4">

#### 6.15.4 widescreen transistion complete

</a>

Has the widescreen transition finished.

<pre>[wait until](statements.md#3.25.1) widescreen transition complete</pre>

<a name="6.15.5">

#### 6.15.5 fade ready

</a>

Has the fade transition finished.

<pre>[wait until](statements.md#3.25.1) fade ready</pre>

<a name="6.15.6">

#### 6.15.6 camera not ready

</a>

camera not ready

<a name="6.16.1"></a>

#### <a name="6.16.1">6.16.1 if bindable action</a> [constant](constants.md#10) performed

returns whether this bindable action is currently being performed

<pre>if bindable action BINDABLE_ACTION_TILT_ROTATE_ON performed</pre>

<a name="6.16.2"></a>

#### <a name="6.16.2">6.16.2 key</a> [constant](constants.md#10) down

If an key is pressed down.

<pre>key KB_SPACE down</pre>

<a name="6.16.3">

#### 6.16.3 mouse left_right_middle button down

</a>

If a mouse button is down.

<pre>mouse left button down
mouse middle button down</pre>

<a name="6.16.4">

#### 6.16.4 mouse left_right_middle opt_double clicked

</a>

If a mouse button is clicked or double clicked.

<pre>mouse left button <double> clicked</double></pre>

<a name="6.16.5">

#### 6.16.5 within rotation

</a>

Is the player within the interface rotation border?

<pre>within rotation</pre>

<a name="6.16.6">

#### 6.16.6 player has mouse wheel

</a>

Returns if the player has a mouse wheel.

<pre>player has mouse wheel</pre>

<a name="6.16.7">

#### 6.16.7 toolbar handle held

</a>

returns true if the toolbar handle is currently held

<pre>if toolbar is held</pre>

<a name="6.17.1"></a>

#### <a name="6.17.1">6.17.1</a> [coord_expression](position.md#11) viewed

Is a position on screen.

<pre>{House} viewed</pre>

<a name="6.17.2"></a>

#### <a name="6.17.2">6.17.2</a> [coord_expression](position.md#11) ahead of camera

Is a position ahead of the camera plane

<pre>if {House} is ahead of camera</pre>

<a name="6.17.3"></a>

#### <a name="6.17.3">6.17.3 player</a> [expression](expressions.md#12)

Detects whether a miracle has been cast at a position. Triggers when the miracle is poured or bounces.

<pre>if player 0 cast miracle MIRACLE_TYPE_HEAL near {MyMarker} radius 15</pre>

<a name="6.17.4"></a>

#### <a name="6.17.4">6.17.4</a> [coord_expression](position.md#11) valid for creature

Is the position valid for a creature to be at (Eg. Not a mountain side).

<pre>{SheepPos} valid for creature</pre>

<a name="6.17.5"></a>

#### <a name="6.17.5">6.17.5</a> [coord_expression](position.md#11)

If the last postion clicked (if in the last few seconds) is within the defined radius of the defined position this check is true.

<pre>{House} right clicked radius 5</pre>

<a name="6.17.6"></a>

#### <a name="6.17.6">6.17.6 fire near</a> [coord_expression](position.md#11)

A check on an position to see if it there is a fire within the defined radius.

<pre>fire near {WoodPile} radius 10</pre>

<a name="6.17.7"></a>

#### <a name="6.17.7">6.17.7</a> [coord_expression](position.md#11) radius

Checks if a position is within a radius of another position.

<pre>{MyVillager} near {VillagerHome} radius 20</pre>

<a name="6.17.8"></a>

#### <a name="6.17.8">6.17.8</a> [coord_expression](position.md#11) radius

Checks that a position is not within a radius of another position.

<pre>{MyVillager} not near (VillagerHome} 20</pre>

<a name="6.17.9"></a>

#### <a name="6.17.9">6.17.9</a> [coord_expression](position.md#11)

Checks if a position is the same as another position.

<pre>{MyVillager} at {VillagerHome}</pre>

<a name="6.17.10"></a>

#### <a name="6.17.10">6.17.10</a> [coord_expression](position.md#11)

Checks that a position is not the same as another position.

<pre>{MyVillager} not at {VillagerHome}</pre>

<a name="6.17.11"></a>

#### <a name="6.17.11">6.17.11</a> [coord_expression](position.md#11)

returns true if the spell has been cast within the given range of the given point

<pre>{MonsterMine} near SPELL_TYPE_HEAL cast by player 0 radius effect range 50</pre>

<a name="6.17.12"></a>

#### <a name="6.17.12">6.17.12</a> [coord_expression](position.md#11) is under landscape

returns true if the given position is under the landscape

<pre>{MyPos} is under landscape</pre>

<a name="6.17.13"></a>

#### <a name="6.17.13">6.17.13</a> [coord_expression](position.md#11)

returns true if the two given positions are on the same side of the line defined by two positions

<pre>{EnemyPlatoon} and {HomeTown} on same side of the line between {WestPos} and {East Pos}</pre>

<a name="6.17.14"></a>

#### <a name="6.17.14">6.17.14</a> [coord_expression](position.md#11) on land

returns true if the position is on land as opposed to on the occean

<pre>{Rock} on land</pre>

<a name="6.17.15"></a>

#### <a name="6.17.15">6.17.15</a> [coord_expression](position.md#11) under water

returns true if the position is under the level of the water. If an [object](objects.md#8) is far enough under the landscape, it will also be under the water.

<pre>{Rock} under water</pre>

<a name="6.17.16"></a>

#### <a name="6.17.16">6.17.16 position</a> [coord_expression](position.md#11) scrubbed radius epression

Has this position just been scrubbed with the fist?

<pre>[wait until](statements.md#3.25.1) {MyPos} scrubbed radius 10</pre>

<a name="6.18.1"></a>

#### <a name="6.18.1">6.18.1 not</a> [condition](conditions.md#6)

Returns true when the [condition](conditions.md#6) is not true.

<a name="6.18.2"></a>

#### <a name="6.18.2">6.18.2</a> [condition](conditions.md#6)

Returns true when both [condition](conditions.md#6)s are true.

<a name="6.18.3"></a>

#### <a name="6.18.3">6.18.3</a> [condition](conditions.md#6)

Returns true when one or more of the [condition](conditions.md#6)s is true.

<a name="6.18.4"></a>

#### <a name="6.18.4">6.18.4</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) evaluate as the same.

<a name="6.18.5"></a>

#### <a name="6.18.5">6.18.5</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) do not evaluate as the same.

<a name="6.18.6"></a>

#### <a name="6.18.6">6.18.6</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) right of the operator.

<a name="6.18.7"></a>

#### <a name="6.18.7">6.18.7</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) right of the operator.

<a name="6.18.8"></a>

#### <a name="6.18.8">6.18.8</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) right of the operator.

<a name="6.18.9"></a>

#### <a name="6.18.9">6.18.9</a> [expression](expressions.md#12)

Returns true when the [expression](expressions.md#12) right of the operator.
