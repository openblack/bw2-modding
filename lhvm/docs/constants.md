# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="10"></a> 10 Constants

When you're doing things like playing animations, setting or getting the states of [object](objects.md#8)s, both locally and globally, to abbreviate these unwieldy names, making your scripts more readable.

See also:

*   [Statements](statements.md#3)
*   [Conditions](conditions.md#6)
*   [Objects](objects.md#8)
*   [Position](position.md#11)
*   [Expressions](expressions.md#12)

<a name="10.1">

### 10.1 Constant Manipulation

</a>

These let you change [constant](constants.md#10)s in certain ways.

1.  [constant from constant to constant](#10.1.1)
2.  [constant expression](#10.1.2)

<a name="10.2"></a>

### <a name="10.2">10.2 Getting</a> [constant](constants.md#10)s

These let you get a [constant](constants.md#10) from the game.

1.  [get text id from strong](#10.2.1)
2.  [state of object](#10.2.2)
3.  [get object desired building](#10.2.3)
4.  [get hand state](#10.2.4)
5.  [get object type](#10.2.5)
6.  [get object sub type](#10.2.6)
7.  [get object disciple type](#10.2.7)
8.  [get player expression last spell cast](#10.2.8)
9.  [get object current action](#10.2.9)
10.  [get last gesture](#10.2.10)
11.  [get last spell gesture](#10.2.11)
12.  [get key for interface action constant](#10.2.12)
13.  [get object relationship to object](#10.2.13)
14.  [get platoon object type](#10.2.14)
15.  [get platoon object plan status](#10.2.15)
16.  [get object death reason](#10.2.16)
17.  [get fire archer type for tribe TRIBE_TYPE](#10.2.17)
18.  [get object navigation state](#10.2.18)
19.  [get last toolbar button clicked](#10.2.19)
20.  [get town object method of last conversion](#10.2.20)
21.  [get town stauts](#10.2.21)
22.  [get last town player expression method of last conversion](#10.2.22)
23.  [get last settlement player expression method of last conversion](#10.2.23)

* * *

<a name="10.1.1"></a>

#### <a name="10.1.1">10.1.1</a> [constant](constants.md#10)

get a random [constant](constants.md#10) is one of the ones between the two enum values you pass in.

<a name="10.1.2"></a>

#### <a name="10.1.2">10.1.2</a> [constant](constants.md#10)

Converts an [expression](expressions.md#12).

<a name="10.2.1">

#### 10.2.1 get text id from strong

</a>

gets the text id for a string name in the text data base.

<pre>get text id from "HELP_TEXT_BLAH"</pre>

<a name="10.2.2"></a>

#### <a name="10.2.2">10.2.2 state of</a> [object](objects.md#8)

Returns the [constant](constants.md#10)s.

<pre>state of LostBrother</pre>

<a name="10.2.3"></a>

#### <a name="10.2.3">10.2.3 get</a> [object](objects.md#8) desired building

Gets the building type that the town most wants to build

<pre>MyBuilding = variable get MyTown desired building</pre>

<a name="10.2.4">

#### 10.2.4 get hand state

</a>

Gets the hand state.

<pre>get hand state</pre>

<a name="10.2.5"></a>

#### <a name="10.2.5">10.2.5 get</a> [object](objects.md#8) type

gets the [object](objects.md#8) script type

<pre>get RandomThing type</pre>

<a name="10.2.6"></a>

#### <a name="10.2.6">10.2.6 get</a> [object](objects.md#8) sub type

Gets the [object](objects.md#8) sub type

<pre>get Animal sub type</pre>

<a name="10.2.7"></a>

#### <a name="10.2.7">10.2.7 get</a> [object](objects.md#8) disciple type

Gets the [object](objects.md#8) disciple type of a villager

<pre>get MyVillager disciple type</pre>

<a name="10.2.8"></a>

#### <a name="10.2.8">10.2.8 get player</a> [expression](expressions.md#12) last spell cast

gets the the player last cast spell type

<pre>get player 1 last spell cast</pre>

<a name="10.2.9"></a>

#### <a name="10.2.9">10.2.9 get</a> [object](objects.md#8) current action

gets the creatures current action

<pre>get MyCreature current action</pre>

<a name="10.2.10">

#### 10.2.10 get last gesture

</a>

gets the last gesture type the player did

<pre>get last gesture</pre>

<a name="10.2.11">

#### 10.2.11 get last spell gesture

</a>

gets the last gesture type the player did to cast a spell

<pre>get last spell gesture</pre>

<a name="10.2.12"></a>

#### <a name="10.2.12">10.2.12 get key for interface action</a> [constant](constants.md#10)

get key for interface actions (KB_UP for example for move)

<pre>get key for interface action BINDABLE_ACTION_TYPE_MOVE</pre>

<a name="10.2.13"></a>

#### <a name="10.2.13">10.2.13 get</a> [object](objects.md#8)

gets the relationship of one [object](objects.md#8) to another, based on their players (see RELATIONSHIP in RelationshipEnum.h)

<pre>MyRelationship = get GreekTown relationship to NorseTown</pre>

<a name="10.2.14"></a>

#### <a name="10.2.14">10.2.14 get platoon</a> [object](objects.md#8) type

returns the type of the platoon

<pre>MyPlatoonType = get platoon MyPlatoon type</pre>

<a name="10.2.15"></a>

#### <a name="10.2.15">10.2.15 get platoon</a> [object](objects.md#8) plan status

returns the plan status of the platoon

<pre>MyPlatoonPlanStatus = get platoon MyPlatoon plan status </pre>

<a name="10.2.16"></a>

#### <a name="10.2.16">10.2.16 get</a> [object](objects.md#8) death reason

returns the method that killed the given [object](objects.md#8)

<pre>MyLittleFellaDeathReason = get MyLittleFella death reason</pre>

<a name="10.2.17">

#### 10.2.17 get fire archer type for tribe TRIBE_TYPE

</a>

gets the platoon type required for making fire archers in the given tribe

<pre>FiresOfHell = get fire archer type for tribe TRIBE_TYPE_GREEK</pre>

<a name="10.2.18"></a>

#### <a name="10.2.18">10.2.18 get</a> [object](objects.md#8) navigation state

After a call to 'move [object](objects.md#8) is in.
It returns one of:
NAV_STATE_NONE - This entity is not currently navigating
NAV_STATE_NAVIGATING - This entity is navigating
NAV_STATE_SUCCEEDED - This entity has succeeded in navigating
NAV_STATE_FAILING - This entity is in the process of failing
NAV_STATE_FAILED - This entity has failed, and is not doing anything else.

<pre>get BlindMan navigation state</pre>

See also:

*   [move object position to position](statements.md#3.1.1)

<a name="10.2.19">

#### 10.2.19 get last toolbar button clicked

</a>

returns an enum from MENU_HIGHLIGHT_ITEM. This is the last button clicked indpendent of time since it was clicked.

<pre>LastButton = get last toolbar button clicked</pre>

See also:

*   [get time since last toolbar button clicked](expressions.md#12.24.5)

<a name="10.2.20"></a>

#### <a name="10.2.20">10.2.20 get town</a> [object](objects.md#8) method of last conversion

returns the last method of conversion for the given town (see lastcaptureenum.h)

<pre>TownConversion = get town JapTown method of last conversion</pre>

<a name="10.2.21">

#### 10.2.21 get town stauts

</a>

gets the towns current status

<pre>TownConversion = variable get town [object](objects.md#8) tatus</pre>

<a name="10.2.22"></a>

#### <a name="10.2.22">10.2.22 get last town player</a> [expression](expressions.md#12) method of last conversion

returns the method of conversion last used by the player

<pre>TownConversion = get last town player 0 method of last conversion</pre>

<a name="10.2.23"></a>

#### <a name="10.2.23">10.2.23 get last settlement player</a> [expression](expressions.md#12) method of last conversion

returns the method of conversion last used by the player

<pre>TownConversion = get last town player 0 method of last conversion</pre>
