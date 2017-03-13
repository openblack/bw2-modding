# Lionhead Challenge Language Documentation

Back to [index](README.md).

## <a name="3"></a> 3 Statements

Statements appear in the body section of scripts. There are many [statements](#3 "A statement is a command which causes something to happen.") available for you to use. Each of them results in something happening somewhere! Statements do not return a result.

See also:

*   [Conditions](conditions.md#6 "True or False")
*   [Objects](objects.md#8 "return a game object")
*   [Constants](constants.md#10 "A constant is used to refer to a game enumeration.")
*   [Position](position.md#11 "Positions in the game world can be specified in various ways.")
*   [Expressions](expressions.md#12 "Evaluates to a real number.")

### <a name="3.1">3.1 Statements using generic</a> [object](objects.md#8 "return a game object")s

These [statements](#3 "A statement is a command which causes something to happen.") can be used (generally) to control any [object](objects.md#8 "return a game object").

1.  [move object position to position](#3.1.1 "Objects can move from one position to another.")
2.  [set object position to position](#3.1.2 "Objects positions can be set to any position.")
3.  [set object resource constant to expression](#3.1.3 "sets the amount of resource in an object to the amount specified")
4.  [set object focus to position](#3.1.4 "Objects can be made to look at positions.")
5.  [set object focus on object](#3.1.5 "Objects can be made to look at other objects.")
6.  [play anim string on object opt_loop opt_stand](#3.1.6 "Object animations.")
7.  [set object anim constant](#3.1.7 "Overrides the animation of the current state for the object.")
8.  [set object physics balance expression](#3.1.8 "Sets an objects physics proerties (spreadhseet value)")
9.  [override object anim constant](#3.1.9 "Overrides the animation of the current state for the object.")
10.  [cancel object anim override](#3.1.10 "Cancels the override animation on an actor")
11.  [delete object](#3.1.11 "Deletes an object from the game.")
12.  [set object in player expression hand](#3.1.12 "Places an object into the player hand")
13.  [set object velocity heading position speed expression](#3.1.13 "Applies physics to an object unless it is weather.")
14.  [set object target coord_expression time expression](#3.1.14 "Applies physics to an object so that it lands at the defined position in a given time.")
15.  [set object temperature expression](#3.1.15 "Sets the temperature of an object. Range is -1 to 1.")
16.  [set object player expression](#3.1.16 "Sets the player an object belongs to")
17.  [release object](#3.1.17 "Releases a game object instantly from the script.")
18.  [release object focus](#3.1.18 "Releases a game object focus.")
19.  [enable_disable object can be leashed to](#3.1.19 "Sets if a creature can leash to this object or not.")
20.  [set object colour red expression green expression blue expression](#3.1.20 "Set an objects colour")
21.  [reset object colour](#3.1.21 "Reset an objects colour")
22.  [set object secondary colour red expression green expression blue expression](#3.1.22 "Set an objects secondary colour")
23.  [stop object moving](#3.1.23 "stops a given object from moving")
24.  [move object to limbo](#3.1.24 "moves an object to limbo")
25.  [release object from limbo](#3.1.25 "releases an object from limbo")
26.  [set object angular velocity x expression y expression z expression](#3.1.26 "sets the angular velocity for the given object")
27.  [override mesh for object with string](#3.1.27 "overrides the given objects default mesh with the given string")
28.  [enable/disable object indestructible](#3.1.28 "sets the object as indestructible.")
29.  [enable/disable object hurt by fire.](#3.1.29 "sets the object as hurt by fire.")
30.  [enable/disable object set on fire](#3.1.30 "sets the object as possible to be lit by fires.")
31.  [enable/disable object on fire expression](#3.1.31 "sets the object on fire true or false.")
32.  [enable_disable fire system](#3.1.32 "Sets whether SpreadEffect is turned on")
33.  [enable_disable floaty icons](#3.1.33 "Sets floaty icon draw in widescreen")
34.  [enable/disable object moveable](#3.1.34 "sets the object moveable true or false.")
35.  [enable/disable object pickup](#3.1.35 "sets the object pickupable true or false.")
36.  [enable/disable pickup type constant](#3.1.36 "sets if a certian pickup interface action is available")
37.  [set object alpha expression](#3.1.37 "sets an objects alpha")
38.  [set lava running at coord_expression heading coord_expression radius expression](#3.1.38 "sets a lava river off, heading in the specified RELATIVE direction")
39.  [set object shake expression](#3.1.39 "makes an object shake; the last value defines intensity of shake")
40.  [enable_disable object reactable](#3.1.40 "sets an actor object to a reactable state")
41.  [enable_disable object can be fisted](#3.1.41 "sets whether an object can be fisted")
42.  [enable_disable object interactable](#3.1.42 "sets whether the hand can interact with an object")
43.  [enable_disable object cylindar override](#3.1.43 "sets whether an object is super easy for the hand to interact with")
44.  [enable_disable object physics tracking](#3.1.44 "Starts or stops tracking of physics on an object")
45.  [clear object hit object](#3.1.45 "Clears the memory of the last thing hit by the object.  Must have physics tracking enabled.")
46.  [clear object hit land](#3.1.46 "Clears the memory of the the object hitting the ground.  Must have physics tracking enabled.")
47.  [enable/disable force object renderable](#3.1.47 "enables/disables forcing an object to be rendered")

### <a name="3.2">3.2 Statements involving state driven</a> [object](objects.md#8 "return a game object")s

Statements controlling state driven [object](objects.md#8 "return a game object")s. These are [object](objects.md#8 "return a game object")s such as villagers and animals (but not the creature)

1.  [enable_disable anim events on object](#3.2.1 "sets whether or not the object (statedriven) cares about animation events")
2.  [set object anim event probability](#3.2.2 "sets the probability of an animation event being played on a villager")
3.  [Controlling Villagers](#3.2.3 "Statements controlling villagers")
    1.  [move villager object focus to coord_expression](#3.2.3.1 "makes the villager turn to look at the location")
    2.  [set object disciple constant opt_sound](#3.2.3.2 "set a villager as a disciple")
    3.  [set housewife object pregnant by object](#3.2.3.3 "sets a female villager to pregnant")
    4.  [set object to follow object at distance expression](#3.2.3.4 "sets a villager object to follow another object at the given distance")
    5.  [enable/disable object skeleton](#3.2.3.5 "sets the object as a skeleton true or false.")
    6.  [set object carrying constant](#3.2.3.6 "sets a villager to carry a specific tool/object.")
    7.  [enable_disable villager object can be imprisoned](#3.2.3.7 "sets the given villager as a actor that can be imprisoned")
    8.  [set villager object default speed to constant](#3.2.3.8 "makes a villager start moving at thier normal speed again")
    9.  [enable_disable villagers ignore object resource](#3.2.3.9 "sets whether or not villagers ignore the fact that an object has a resource")
    10.  [enable_disable object alternative mesh](#3.2.3.10 "sets a villagers mesh to it's alternative version")
    11.  [play paired anim constant on object with object (snap to position)](#3.2.3.11 "Plays a paired animation on two objects")
    12.  [set anim speed of object to expression](#3.2.3.12 "sets an objects animation speed")
    13.  [reset object anim speed](#3.2.3.13 "resets the objects animation speed")
    14.  [reset object speed](#3.2.3.14 "Resets an objects walk speed")



### <a name="3.3"></a> 3.3 Statements involving visual effects

Statements controlling visual effects

1.  [enable_disable object visible](#3.3.1 "sets whether or not the visual effect is visible")
2.  [enable_disable object pulse (speed expression) (with fadetime expression)](#3.3.2 "makes an object pulse, or stops it pulsing")
3.  [enable_disable object additive](#3.3.3 "enable_disable object additive.")
4.  [enable_disable object secondary additive](#3.3.4 "enable_disable object secondary additive.")
5.  [stop visual effect object](#3.3.5 "stops a visual effect playing")
6.  [remove visual effect object target at coord_expression](#3.3.6 "Removes visual effect targets for instanced visuals.")
7.  [add object target at coord_expression](#3.3.7 "Adds a target to the objects target list")
8.  [set visual effect target object](#3.3.8 "sets whether a mine is the monster mine")
9.  [enable_disable object pulse (speed expression) (with fadetime expression)](#3.3.9 "makes an object pulse, or stops it pulsing")

### <a name="3.4"></a> 3.4 Statements involving migrations

Statements controlling the migration of villagers between towns

1.  [start migration from town object to town object](#3.4.1 "starts a migration")
2.  [enable_disable migration from object to object](#3.4.2 "enables or disables migration from the source town to the target town")
3.  [enable_disable migration object can be declined](#3.4.3 "Sets whether a migration cna be declined")
4.  [enable_disable migration from town object to all other towns](#3.4.4 "enables or disables migration from the source town to all other towns")
5.  [set migration threshold between town object and town object](#3.4.5 "sets the migration threshold from the source town to target town")
6.  [enable_disable player town migration](#3.4.6 "sets whether player towns can migrate")
7.  [enable_disable town object impressiveness override opt_amount](#3.4.7 "sets the overriding of a town's impressiveness value")
8.  [accept pilgrims object](#3.4.8 "accepts pilgrims into the city")
9.  [decline pilgrims object](#3.4.9 "declines pilgrims into the city")

<a name="3.5">

### 3.5 Statements affecting players

</a>

Statements that change values for players.

1.  [set player expression mana expression](#3.5.1 "Sets the mana of a player")
2.  [set player expression alignment expression](#3.5.2 "Sets the players alignment")
3.  [set player expression town object capture reason constant](#3.5.3 "sets the reason that a town has been captured")
4.  [enable_disable spell constant for player expression](#3.5.4 "enables/disables a spell for a specific player")
5.  [clear player expression spell charging](#3.5.5 "Stops a player spells from charging")
6.  [set object player expression relative belief](#3.5.6 "automagically takes over a town by a player")
7.  [enable_disable player expression virtual influence](#3.5.7 "enables/disables the players virtual influence")

<a name="3.6">

### 3.6 Statements Affecting Buildings

</a>

Statements controlling houses and other buildings.

1.  [enable_disable abode object](#3.6.1 "enables or disables the given abode")
2.  [enable/disable villagers can build object](#3.6.2 "toggles the ability of villagers to build the given object")
3.  [set field object height to expression](#3.6.3 "sets how grown a field is")
4.  [enable_disable monster mine object](#3.6.4 "sets whether a mine is the monster mine")

<a name="3.7">

### 3.7 Statements Affecting Epic Miracles

</a>

Statements that allow scripts to control epics. These are used for dynamic epic cutscences and the like.

1.  [stop spell object](#3.7.1 "stops a given spell")
2.  [invoke spell stage](#3.7.2 "invoke spell stage")
3.  [create expression worshippers at object](#3.7.3 "create expression worshippers at object")
4.  [create epic constant at coord_expression](#3.7.4 "triggers an epic wonder")
5.  [enable_disable predefined sky string time expression](#3.7.5 "sets the sky to one of the predefined types")

<a name="3.8">

### 3.8 Statements Affecting Video Playback

</a>

Statements that allow scripts to play videos and fine tune their display.

1.  [play video string](#3.8.1 "plays the given video, starting at the given time")
2.  [play video string with sound string](#3.8.2 "plays the given video, starting at the given time")
3.  [set object clipping window left expression top expression width expression height expression](#3.8.3 "sets the clipping window of a video window")
4.  [stop video](#3.8.4 "stops a playing video")

<a name="3.9">

### 3.9 Statements Controlling Physics

</a>

Statements that controll the physics system, as well as create phyics forces.

1.  [set physics from hand with strength position radius expression](#3.9.1 "sets a physics force from the hand - the position determines the strength in the given axis")
2.  [set capture radius for physics objects to expression](#3.9.2 "Sets the capture radius multiplier for objects in physics")
3.  [set physics at position position with strength position radius expression random expression](#3.9.3 "sets a phyiscs force from a location - the 2nd position determines the strength in the given axis")
4.  [remove all objects in physics](#3.9.4 "Any objects which are in physics, become not-in-physics")
5.  [delete all objects in physics](#3.9.5 "Any objects which are in physics are deleted")

<a name="3.10">

### 3.10 Statements Affecting Spread Effects

</a>

Statements that create spread effects, like heat, and [statements](#3 "A statement is a command which causes something to happen.") that change the displayed alignment of an area.

1.  [add effect EFFECT_TYPE at position strength expression radius expression](#3.10.1 "adds an effect to a location")
2.  [set ground alignment to expression at coord_expression radius expression amount expression](#3.10.2 "changes the alignment on the ground")
3.  [set lava puddle at coord_expression radius expression temperate expression](#3.10.3 "adds a puddle of lava to the ground")

<a name="3.11">

### 3.11 Statements Affecting Gates

</a>

Statements that controll gates.

1.  [set gate object open](#3.11.1 "opens a given gatehouse")
2.  [set gate object close](#3.11.2 "closes a given gatehouse")
3.  [enable_disable gate can open for platoons](#3.11.3 "sets whether a gatehouse can open its gates for platoons to pass through")

<a name="3.12"></a>

### <a name="3.12">3.12 Statements Controlling game</a> [object](objects.md#8 "return a game object")ives

These [statements](#3 "A statement is a command which causes something to happen.") control the game [object](objects.md#8 "return a game object")ives. e.g. mine a x amount of ore

1.  [process land end objectives](#3.12.1 "triggers processing of fallible objectives")
2.  [set player expression objective TRIBUTE_OBJECTIVE_TYPE status to TRIBUTE_OBJECTIVE_STATE](#3.12.2 "sets the status of the given objective")
3.  [set player expression objective class constant amount expression](#3.12.3 "sets the number of objectives in the given category")
4.  [reset all objectives for player expression](#3.12.4 "resets all game objectives")
5.  [set player expression objective constant with **LOTS OF PARAMETERS**](#3.12.5 "setup an objective")
6.  [set player expression objective constant icon constant](#3.12.6 "set the icon for the objective")
7.  [set player expression objective constant amount expression](#3.12.7 "sets an objective for a specific player")
8.  [set player expression objective constant parent objective constant](#3.12.8 "sets the parent objective of an objective")
9.  [set player expression objective text string opt_amount](#3.12.9 "sets objective text")
10.  [set player expression objective description string](#3.12.10 "sets objective description")
11.  [disable player expression objective constant](#3.12.11 "disable this objective for the given player")
12.  [reset player expression objective constant](#3.12.12 "resets a single objective")
13.  [set player expression objective constant value expression](#3.12.13 "Sets the current value of this objective.")

<a name="3.13">

### 3.13 Statements Controlling the Whole Game

</a>

These [statements](#3 "A statement is a command which causes something to happen.") control what is happening in the game such as changing game settings or the level

1.  [enable_disable game can be lost](#3.13.1 "sets whether the player can lose")
2.  [enable_disable global influence](#3.13.2 "give full influence")
3.  [set min height camera experssion focus expression](#3.13.3 "sets the minimum height the camera can be above the land")
4.  [enable_disable text skip](#3.13.4 "set text skip")
5.  [enable_disable villager interaction manager](#3.13.5 "set villager interaction manager")
6.  [enable_disable can use destruction tool](#3.13.6 "sets whether the player can use the destruction tool")
7.  [enable_disable tribute visual](#3.13.7 "sets whether gaining tribute displays visual and plays audio")
8.  [enable_disable disciple placedown speech](#3.13.8 "sets whether placing a disciple triggers any speech")
9.  [enable_disable single active speech](#3.13.9 "sets whether advisors interupt each other")
10.  [force save load](#3.13.10 "quick saves the game then quick loads the game.")
11.  [play credits](#3.13.11 "shows the end credits")
12.  [force save goto menu](#3.13.12 "quick saves and then goes to the main menu.")
13.  [enable_disable dialogue manager](#3.13.13 "Enables or disables the dialogue manager.")
14.  [enable_disable heartbeat sound](#3.13.14 "sets whether the hearbeat audio is played")
15.  [enable_disable constant menu](#3.13.15 "enables the given menu, or disables the active menu")
16.  [enable_disable pause menu in widescreen](#3.13.16 "enables or disables the pause menu being accessed in cutscenes")
17.  [enable_disable interface action constant](#3.13.17 "enable or disable the given interface action")
18.  [enable_disable creature icon visible](#3.13.18 "enables or disables the drawing of the creature icon")
19.  [enable_disable army flag in widescreen](#3.13.19 "enables or disables the drawing of army flags in widescreen")
20.  [enable_disable objective list in widescreen](#3.13.20 "enables or disables the drawing of the objective list in widescreen")
21.  [enable_disable toolbar in cutscene](#3.13.21 "enables or disables the drawing of the toolbar in fullscreen cutscenes")
22.  [enable_disable build out of town within influence](#3.13.22 "allows building out of town")
23.  [enable_disable performance checking](#3.13.23 "starts or stops performance checking")
24.  [add performance stat called string](#3.13.24 "adds a perfomance stat")
25.  [set persistent data constant to expression](#3.13.25 "sets the value of persistent data")
26.  [enable/disable influence](#3.13.26 "toggles the player influence being on")
27.  [enable/disable influence visual effect](#3.13.27 "toggles the player influence visual effect being on")
28.  [enable/disable blooming](#3.13.28 "toggles the blooming")
29.  [exit game](#3.13.29 "exits the game")
30.  [enable/disable help system](#3.13.30 "sets the help system on/off")
31.  [set interaction constant](#3.13.31 "Sets the interface level.")
32.  [set game speed to expression](#3.13.32 "Sets the speed the game runs at.")
33.  [Load Map "Filename"](#3.13.33 "Closes the current map and loads the one defined.")
34.  [enable_disable loading screen](#3.13.34 "Enables/Disables the laoding screen, instead of engine draw")
35.  [save game in slot expression](#3.13.35 "Saves the game into a specific slot.")
36.  [set fade red expression green expression blue expression time expression](#3.13.36 "Fades the screen in a given time to a given colour")
37.  [set fade in time expression](#3.13.37 "Fades the screen back in a given time")
38.  [enable_disable leash draw](#3.13.38 "sets the draws on a leash")
39.  [enable_disable highlight draw](#3.13.39 "sets the draws on a highlight")
40.  [enable_disable spell icon draw](#3.13.40 "sets the draw on the spell icons")
41.  [enable/disable force flag draw](#3.13.41 "enables/disables flag drawing in widescreen")
42.  [enable/disable force tooltip draw](#3.13.42 "enables/disables tooltips drawing in widescreen")
43.  [enable_disable shadows](#3.13.43 "sets the game shadows on or off")
44.  [enable/disable markers](#3.13.44 "turns the script markers on/off")
45.  [set cameratool object to object](#3.13.45 "sets the object that the camera tool is looking at")
46.  [increment tribute by expression](#3.13.46 "gives the player the specified amount of reward")
47.  [decrement tribute by expression](#3.13.47 "removes from the player the specified amount of reward")
48.  [force auto save](#3.13.48 "forecs a quick save")
49.  [skip current cutscene](#3.13.49 "skips current cutscene if it is skipable")
50.  [empty player hand](#3.13.50 "removes anything in the player hand")

<a name="3.14">

### 3.14 Statements Controlling Dynamic Music

</a>

These [statements](#3 "A statement is a command which causes something to happen.") control the dynamic music system of the game.

1.  [start dynamic music](#3.14.1 "starts the dynamic music system")
2.  [stop dynamic music](#3.14.2 "stops the dynamic music system")
3.  [set dynamic music string loop expression (urgent)](#3.14.3 "switches the dynamic music section")

<a name="3.15">

### 3.15 Statements Controlling Towns

</a>

These [statements](#3 "A statement is a command which causes something to happen.") control [object](objects.md#8 "return a game object")s which are specifically towns, as well as adjusting the ways in which the player can interact with their towns.

1.  [set research ARTEFACT available to RESEARCH_AVAILABILITY](#3.15.1 "allows player to research")
2.  [enable_disable town object can be taken by force](#3.15.2 "sets whether a town can be taken by force")
3.  [extend town object influence by expression](#3.15.3 "extends the towns influence ring.")
4.  [set town object maximum population to expression](#3.15.4 "caps the towns population")
5.  [build all town object buildings in group expression](#3.15.5 "Starts the building of all planned buildings in the group")
6.  [set object emergency for 20 seconds](#3.15.6 "Makes a town go into emergency state")
7.  [stop object emergency](#3.15.7 "Stops a town emergency")
8.  [set town object desire for constant to expression](#3.15.8 "sets a weight value for a given desire")
9.  [enable_disable town object job constant](#3.15.9 "enable/disable the allocation of the given job in a town")
10.  [enable/disable personalisations](#3.15.10 "toggles whether or not the towns' personalisation managers are active")
11.  [enable_disable spell constant in object](#3.15.11 "sets the magic available within a town")
12.  [enable_disable town object desire speech](#3.15.12 "sets whether villagers speak their desires in a town")

<a name="3.16">

### 3.16 Statements Controlling the interface

</a>

Allows you to the toolbar, the interface, floaty icons, and whatever appears in wide screen.

1.  [enable_disable build menu override (with constant)](#3.16.1 "Moves a building (ABODE_NUMBER) to the front of the build menu list")
2.  [set toolbar menu to constant](#3.16.2 "Sets the current menu pane on the toolbar")
3.  [enable_disable toolbar](#3.16.3 "Enables or disables the game toolbar")
4.  [enable_disable objective window](#3.16.4 "Enables or disables the objectives widnows")
5.  [enable_disable toolbar pause](#3.16.5 "Enables or disables the game toolbar pausing")
6.  [enable_disable toolbar locked](#3.16.6 "Enables or disables the game toolbar being locked")
7.  [highlight toolbar item expression](#3.16.7 "Highlights a menu item")
8.  [clear toolbar highlight](#3.16.8 "Clears a highlighted menu item")
9.  [remove world icon expression](#3.16.9 "Removes a world icon")
10.  [enable_disable hand icon draw](#3.16.10 "enables or disables drawing of the hand icons")
11.  [enable_disable hand demo icon](#3.16.11 "Makes the hand icons mirror what the mouse is actually doing during a hand demo")
12.  [enable_disable hand text draw](#3.16.12 "enables or disables drawing of the hand text")
13.  [set hand icon constant](#3.16.13 "Sets the hand icon type")
14.  [set mouse position x expression y expression](#3.16.14 "Sets the mouse poosition")
15.  [set hand height multiplier expression](#3.16.15 "Sets how much the hand should raise when over objects (0 - 1)")
16.  [set maximum hand distance to expression](#3.16.16 "Sets the maximum distance the hand can travel from the camera (-1 to cancel limit)")
17.  [set bindable hand icon constant](#3.16.17 "Sets the hand icon type - based on key bindings")
18.  [set hand icon text string](#3.16.18 "Sets the hand icon type - based on key bindings")
19.  [set toolbar state to constant](#3.16.19 "sets whether the toolbar is currently up or not")
20.  [enable_disable tribute menu scroll](#3.16.20 "enables or disables scrolling through the tribute menu")
21.  [set tribute menu selection to constant](#3.16.21 "centeres the tribute menu on the given artefact")
22.  [trigger floaty number FLOATY_ENUM at coord_expression (importance expression) (icon FLOATY_ENUM) (value expression)](#3.16.22 "triggers a floaty number at the given position")
23.  [enable_disable floaty number draw in widescreen](#3.16.23 "enable/disable the drawing of floaty numbers in widescreen")
24.  [clear left_right clicked object](#3.16.24 "Clears the memory of the last interface clicked object.")
25.  [clear left_right clicked position](#3.16.25 "Clears the memory of the last interface clicked position.")
26.  [clear left_right button opt_double clicked](#3.16.26 "Clears the flag for mouse buttons pressed.")
27.  [enable/disable force tooltip draw](#3.16.27 "enables/disables tooltips drawing in widescreen")
28.  [enable_disable script controlled migration player expression](#3.16.28 "sets whether the TC sitt of a player shows the next town to take over, or the list")

<a name="3.17">

### 3.17 Controlling Objects which are Creatures

</a>

Creatures are more complex than other game [object](objects.md#8 "return a game object")s, so further control functions have been created to manipulate them. Creature desires are things that motivate him, eg: CREATURE_DESIRE_HUNGER, CREATURE_DESIRE_ANGER, (see CreatureEnum.h)

1.  [enable_disable object action availability constant](#3.17.1 "Sets the creature's ability to do an action <with an object type>")
2.  [set object desire constant to expression](#3.17.2 "Sets the creature desire.")
3.  [set object only desire constant](#3.17.3 "Sets the creature desire to the only focus, until you turn it off.")
4.  [set object disable only desire](#3.17.4 "Sets the only creature desire off.")
5.  [set object desire constant constant](#3.17.5 "Enable/Disable the desire")
6.  [set object constant development](#3.17.6 "Sets the creatures development")
7.  [set creature object role to constant radius expression](#3.17.7 "sets a creatures role")
8.  [set object magic properties constant time expression](#3.17.8 "sets the objects magic type and time duration (Spell dispensers)")
9.  [enable_disable object attack own town](#3.17.9 "enables/disables a creatures ability to attack their own town")
10.  [enable_disable right hand only for object](#3.17.10 "enables/disables a creatures only using it's right hand")
11.  [enable_disable object can learn constant](#3.17.11 "enables/disables a creatures can learn a lesson type")
12.  [enable_disable object auto scale opt_expression](#3.17.12 "enables/disables a creature auto scaling to a multiplier of the height of your creature")
13.  [set object all desire constant](#3.17.13 "Enable/Disable all the desires")
14.  [set object desire maximum constant to expression](#3.17.14 "set the maximum value that a desire can reach (between 0 and 1)")
15.  [set object priority expression](#3.17.15 "sets the priority of what the creature is currently doing")
16.  [set player expression creature to object](#3.17.16 "assigns a particular creature to a player")
17.  [teach object constant constant constant](#3.17.17 "teach creature a specific lesson")
18.  [teach object all](#3.17.18 "teaches the creature every lesson")
19.  [teach object all excluding constant](#3.17.19 "teaches the creature every lesson exluding the type defined")
20.  [force object constant object with object](#3.17.20 "forces the creature to stop what he is doing and do a particular action")
21.  [force object constant object object](#3.17.21 "forces the creature to stop what he is doing and do a particular action")
22.  [force object constant object with coord_expression](#3.17.22 "forces the creature to stop what he is doing and do a particular action")
23.  [initialise number of constant for object](#3.17.23 "clears the number of times the creature has done something")
24.  [force action object finish](#3.17.24 "Force creature to stop whatever he is doing")
25.  [enable object confined to coord_expresison radius expression](#3.17.25 "Confines an object at a position within a radius")
26.  [disable object confined](#3.17.26 "Stops an object being confined")
27.  [clear dropped by object](#3.17.27 "clears the last known object dropped by the creature from its memory")
28.  [attach object leash to object](#3.17.28 "attaches a creatures leash to the passed object")
29.  [attach object leash to hand](#3.17.29 "attaches a creatures leash to the hand")
30.  [enable/disable leash on object](#3.17.30 "sets if the creature pays attention to the leash")
31.  [toggles player expression leash](#3.17.31 "toggles the players leash on/off")
32.  [detach object leash](#3.17.32 "detaches the objects leash")
33.  [load midi file string on object](#3.17.33 "loads a midi file in to the specified player")
34.  [add note expression on object using object with sound string (anim string)](#3.17.34 "adds a note (0..127) on a game object using the given player")
35.  [play midi object](#3.17.35 "triggers the midi player to play")
36.  [set object home position coord_expression](#3.17.36 "sets the creatures home position")
37.  [clear last gesture](#3.17.37 "clears the last gesture drawn by a player.")
38.  [set object name constant](#3.17.38 "sets the creatures name")
39.  [enable_disable object navigation](#3.17.39 "sets the creatures using navigation or not")
40.  [disable object can drop](#3.17.40 "Stops an object dropping what it is holding")
41.  [request creature move to position distance expression](#3.17.41 "requests that a creature moves to a position")
42.  [request creature play individual anim expression](#3.17.42 "requests that a creature plays an individual animation")
43.  [request creature play static anim string expresion seconds](#3.17.43 "requests that a creature plays an static animation")
44.  [request creature object action constant object object](#3.17.44 "requests that a creature performs an action with two given objects (object to act on, object to use)")
45.  [set creature object hair length expresion](#3.17.45 "sets the creatures hair length (with an optional time)")
46.  [release creature object hair length](#3.17.46 "lets the game set the hair length instead of the script")
47.  [snap creature object focus to coord_expression](#3.17.47 "forces the creature to look somwhere without any tweening")
48.  [set creature object CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE expression opt_time](#3.17.48 "changes a creatures transitional attribute")
49.  [enable_disable creature object flag visible](#3.17.49 "flip this creatures animatinos")
50.  [enable_disable drawing all flags](#3.17.50 "Sets whether or not the creature and army flags should be drawn")
51.  [enable_disable creature object flip animation](#3.17.51 "flip this creatures animatinos")
52.  [enable_disable script creature object run](#3.17.52 "make it run")
53.  [set creature object walk override injured](#3.17.53 "Sets this creatures walk anim to injured. Remember to cancel the override once you're finished!")
54.  [set creature object walk override sad](#3.17.54 "Sets this creatures walk anim to sad. Remember to cancel the override once you're finished!")
55.  [set creature object walk override angry](#3.17.55 "Sets this creatures walk anim to angry. Remember to cancel the override once you're finished!")
56.  [set creature object walk override scared](#3.17.56 "Sets this creatures walk anim to scared. Remember to cancel the override once you're finished!")
57.  [cancel creature object walk override](#3.17.57 "Cancels any walk anim override aplied to the creature")
58.  [set creatures object hapiness to maximum](#3.17.58 "Makes this creature happy")
59.  [set creature object script thought text text_string](#3.17.59 "turns the scripted thought tooltip on the creature on")
60.  [clear creature object script thought](#3.17.60 "turns the scripted thought tooltip on the creature off")
61.  [set creature object energy to expression](#3.17.61 "Sets the creatures energy")
62.  [enable_disable script creature object interaction](#3.17.62 "make it punishable")
63.  [ask creature object to leave scripted learning](#3.17.63 "Asks the creature to leave scripted learning mode")
64.  [enable_disable tooltip on creature object](#3.17.64 "enables or disables tooltips on a script controlled creature")
65.  [play anim constant on object loop](#3.17.65 "Creature animations.")
66.  [load my_creature at coord_expression](#3.17.66 "Loads your creature into the game.")
67.  [save my_creature](#3.17.67 "Saves the players creature")
68.  [load creature string player expression at coord_expression](#3.17.68 "Loads a computer creature into the game according to a filename.")

<a name="3.18">

### 3.18 Controlling Armies

</a>

Controlling Armies

1.  [add object to platoon object attack list](#3.18.1 "Forces the given platoon to attack this object")
2.  [remove object to platoon object attack list](#3.18.2 "Removes this object form the platoon attack list")
3.  [add coord_expression to waypoint list object](#3.18.3 "add a position to a waypoint list")
4.  [move object along object with patrol constant](#3.18.4 "moves an army along a waypoint list using the provided patrol type")
5.  [object attack object with severity expression](#3.18.5 "makes one object attack another with a specified severity")
6.  [object attack buildings near coord_expression radius expression](#3.18.6 "makes an army/platoon attack buildings in the specified area")
7.  [set object attack everything near coord_expression radius expression](#3.18.7 "makes an army/platoon attack everything in the specified area")
8.  [merge platoon object into platoon object](#3.18.8 "merges one platoon into another, if both are of the same army unit type")
9.  [enable/disable platoon object merge](#3.18.9 "sets whether a platoon can be merged with another")
10.  [enable/disable platoon object split](#3.18.10 "sets whether a platoon can be split")
11.  [enable/disable platoon object camp](#3.18.11 "sets whether a platoon can go into the camp state")
12.  [thread platoon object to platoon object](#3.18.12 "threads the given platoon to the second given platoon")
13.  [remove platoon object from platoon object](#3.18.13 "removes the given platoon to the second given platoon")
14.  [disband army object](#3.18.14 "disbands an army container and unthreads the platoons within")
15.  [disband a platoon object](#3.18.15 "disbands a platoon")
16.  [set army object formation to formation_type_enum](#3.18.16 "changes the armys formation")
17.  [set platoon object experience to expression](#3.18.17 "sets the platoons experience value")
18.  [increment platoon object experience](#3.18.18 "increments the platoons experience")
19.  [enable_disable town manager](#3.18.19 "enables or disables the Town manager")
20.  [set town object platoon type constant at ratio expression](#3.18.20 "sets a towns conscript rate to a given value and troop type")
21.  [set town object army type constant platoon ratio on wall to expression](#3.18.21 "sets a town's percentage of ranged platoons on wall to value")
22.  [set platoon take over town](#3.18.22 "sets a platoon attempting to take over town by attacking town centre")
23.  [remove villager object from platoon](#3.18.23 "removes a villager from their platoon")
24.  [add villager to platoon](#3.18.24 "Attempts to add a villager to a platoon")
25.  [set platoon object formation to expression wide by expression deep](#3.18.25 "Creates a platoon formation by passing values for width and depth")
26.  [set platoon stat constant of object to expression](#3.18.26 "Sets the value of a platoons stat")
27.  [set platoon movement value constant of object to expression](#3.18.27 "Sets the value of a platoons movement stat")
28.  [add action constant using object to platoon action queue](#3.18.28 "adds an action to the given platoons action queue")
29.  [add action constant using object to front of platoon action queue](#3.18.29 "adds an action to front of the given platoons action queue")
30.  [add action constant using object to next in platoon action queue](#3.18.30 "adds an action to be done after current action to the given platoons action queue")
31.  [add action constant using coord_expression to platoon action queue](#3.18.31 "adds an action to the given platoons action queue")
32.  [add action constant using coord_expression to front of platoon action queue](#3.18.32 "adds an action to front of the given platoons action queue")
33.  [add action constant using coord_expression to next in platoon action queue](#3.18.33 "adds an action to be done after current action to the given platoons action queue")
34.  [clear platoon action queue](#3.18.34 "clears the action queue of the given platoon")
35.  [remove current action from platoon action queue](#3.18.35 "Removes the current action from the given platoons action queue")
36.  [remove action expression from platoon action queue](#3.18.36 "removes a platoon action from the queue at the given index number")
37.  [reset platoon object movement stats](#3.18.37 "resets a given platoons movement stats")
38.  [force platoon object camp](#3.18.38 "forces a platoon into the camp state")
39.  [set town object siege weapon type constant to expression](#3.18.39 "sets how many siege weapons a town should have as a minimum")
40.  [add action constant using object to siege weapon object action queue](#3.18.40 "adds an action to the given siege weapons action queue")
41.  [add action constant using object to front of siege weapon object action queue](#3.18.41 "adds an action to front of the given siege weapons action queue")
42.  [add action constant using object to next in siege weapon object action queue](#3.18.42 "adds an action to be done after current action to the given siege weapons action queue")
43.  [add action constant using coord_expression to siege weapon object action queue](#3.18.43 "adds an action to the given siege weapons action queue")
44.  [add action constant using coord_expression to front of siege weapon object action queue](#3.18.44 "adds an action to front of the given siege weapons action queue")
45.  [add action constant using coord_expression to next in siege weapon object action queue](#3.18.45 "adds an action to be done after current action to the given siege weapons action queue")
46.  [clear siege weapon object action queue](#3.18.46 "clears the action queue of the given siege weapon")
47.  [remove current action from siege weapon object action queue](#3.18.47 "Removes the current action from the given siege weapons action queue")
48.  [remove action expression from siege weapon object action queue](#3.18.48 "removes a siege weapon action from the queue at the given index number")
49.  [enable_disable platoon response to town attack](#3.18.49 "enables/disables a platoon responding to a attack on a specific town")
50.  [enable_disable platoon response to local platoon attack](#3.18.50 "enables/disables a platoon responding to a attack on local friendly platoons")
51.  [enable_disable platoon object respond to player army](#3.18.51 "enables/disables a platoon responding to nearby unfreindly units")
52.  [enable_disable platoon object eating](#3.18.52 "enables/disables a platoon eating food")
53.  [set flock object to migration](#3.18.53 "causes a flock to look like a migration")
54.  [town object capture all enemy towns](#3.18.54 "disbands all enemy platoons and causes all people to migrate to you")
55.  [enable_disable siege weapon object auto attack](#3.18.55 "auto attack")
56.  [enable_disable scripted platoon get on enemy wall](#3.18.56 "sets the platoon being able to get on an enemies walls")
57.  [set initial level of player melee platoon to constant](#3.18.57 "sets the level of newly recruited player platoons")
58.  [set initial level of player ranged platoon to constant](#3.18.58 "sets the level of newly recruited player platoons")
59.  [set initial level of player siege weapon to constant](#3.18.59 "sets the level of newly recruited player siege weapon")
60.  [enable_disable show army bubbles](#3.18.60 "sets whether the army bubbles are displayed")
61.  [set all platoon of town object to town object](#3.18.61 "switches the ownership of all platoons belonging to one town to be owned by another town")
62.  [enable_disable show army set effect](#3.18.62 "sets whether the army placement effects are displayed")
63.  [enable_disable platoon object can disband](#3.18.63 "sets whether the platoon can be disbanded by the player")
64.  [enable_disable leashing on platoon object](#3.18.64 "enables or disables the ability to leash the given platoon")

<a name="3.19">

### 3.19 Statements controlling timers

</a>

Some scripts may have time limits on them, for these you can set up a timer which can be accessed for triggers dependant on time left.

1.  [set object time to expression second[s]](#3.19.1 "Sets a countdown time to the value, and the count up time to 0.")

<a name="3.20">

### 3.20 Statements controlling the depth of field

</a>

These [statements](#3 "A statement is a command which causes something to happen.") allow for fine control of the depth of field.

See also:

*   [Expressions dealing with depth of field](expressions.md#12.21 "Gets a real number from the depth of field")

1.  [set depth of field strength multiplier to expression](#3.20.1 "sets the strength of the depth of field")
2.  [set depth of field distance multiplier to expression](#3.20.2 "sets the distance of the depth of field")

<a name="3.21">

### 3.21 Controlling Containers

</a>

An [object](objects.md#8 "return a game object") can be a container ie. Dance, Flock or Town; something which holds a number of [object](objects.md#8 "return a game object")s. This container can be manipulated and generally effects the group of [object](objects.md#8 "return a game object")s within the container. Some functions on [object](objects.md#8 "return a game object")s can be called on containers too, eg. delete, set position, etc.

1.  [disband object](#3.21.1 "Empties the container.")
2.  [populate object with expression constant](#3.21.2 "Populates a container with objects.")
3.  [set object properties inner expression outer expression](#3.21.3 "Changes the properties of a object (flock at present).")
4.  [set flock object to coord_expression with radius expression](#3.21.4 "defines the bounds within which the flock can move")
5.  [set flock object altitude to expression](#3.21.5 "defines the given flocks altitude")
6.  [nominate object as leader for flock object](#3.21.6 "nominates a leader for the flock object")
7.  [add object to flock object](#3.21.7 "adds an object to a flock object")

<a name="3.22">

### 3.22 Time Functions

</a>

The in game time of day can be set and got by a script, but also the real world time details can be accessed for Easter Egg scripts.

1.  [set game time expression](#3.22.1 "Set the time of day in black and white.")
2.  [move game time expression time expression](#3.22.2 "move the time of day in black and white over a period of time.")
3.  [enable_disable game time](#3.22.3 "sets if the game visual time changes")

<a name="3.23">

### 3.23 Reactions.

</a>

Reactions can be set up to effect people around the defined area. The [constant](constants.md#10 "A constant is used to refer to a game enumeration.")s used can be found in Enum.h Reactions will work on script markers as well as [object](objects.md#8 "return a game object")s.

1.  [create reaction object constant](#3.23.1 "creates a reaction centred around an object")
2.  [detach reaction object](#3.23.2 "detaches all reactions from an object")
3.  [detach constant reaction object](#3.23.3 "detaches all reactions of a type from an object")

<a name="3.24">

### 3.24 Running Scripts

</a>

Any calls to run script outside of a scripts begin-end block is in auto run. However scripts can be run from other scripts, then return to the script caller, or run the script and continue processing the current script.

See also:

*   [Scripts](file_format.md#2.5 "A script contains local variables, local constants and statements.")

1.  [run script identifier](#3.24.1 "runs a script.")
2.  [run background script identifier](#3.24.2 "Runs a script.")
3.  [Stop Script string](#3.24.3 "Stops the script running.")
4.  [Stop All Scripts Exclusing string](#3.24.4 "Stops all the scripts running excluding the list passed.")
5.  [Stop Scripts Files string](#3.24.5 "Stops all the scripts in the file list passed.")
6.  [Stop Scripts in File string excluding string](#3.24.6 "Stops all the scripts in the file list passed excluding the list passed.")
7.  [Stop All Scripts Exclusing Files string](#3.24.7 "Stops all the scripts except ones in the file list passed.")
8.  [run map script line string](#3.24.8 "runs	a map script line")

<a name="3.25"></a>

### <a name="3.25">3.25 Wait</a> [condition](conditions.md#6 "True or False")s

It is possible to stop script progress until a [condition](conditions.md#6 "True or False") is successful. There are two versions available for wait; for good reading the script author can use the optional word 'until'.

1.  [wait until condition](#3.25.1 "Script will not continue until condition is successful.")
2.  [wait condition](#3.25.2 "Script will not continue until condition is successful.")

<a name="3.26">

### 3.26 Sound and Music

</a>

Sound and music can be played with the scripts to the same quality as in the game.

1.  [start music string opt_fadetime opt_music_loop](#3.26.1 "starts the script tune.")
2.  [stop music opt_fadetime](#3.26.2 "stops the script music.")
3.  [attach music string to object opt_range](#3.26.3 "Attaches a tune to a game object.")
4.  [detach music from object](#3.26.4 "detached the music from an object.")
5.  [move music from object to object](#3.26.5 "moves the music from one object to another.")
6.  [enable_disable music on object](#3.26.6 "Toggles music or solience on a game music thing.")
7.  [restart music on object](#3.26.7 "restarts the music on a game music thing.")
8.  [set object music position to coord_expression](#3.26.8 "sets the objects music play position to one different to the object position.")
9.  [enable_disable alignment music](#3.26.9 "Toggles alignment music on and off")
10.  [set object atmos group expression time expression opt_id](#3.26.10 "selects which channel in the atmos bank plays")
11.  [set camera atmos group expression time expression opt_id 0](#3.26.11 "selects which channel in the atmos bank plays")
12.  [attach atmos string to camera opt_range opt_volume](#3.26.12 "attaches an atmospheric sound to the camera, with optional parameters for distance and volume")
13.  [attach atmos string to object](#3.26.13 "attaches an atmospheric sound to an object, with an optional parameter for distance")
14.  [detach atmos from object](#3.26.14 "detaches an atmospheric sound from an object")
15.  [detach atmos from camera](#3.26.15 "detaches an atmospheric sound from the camera")
16.  [enable_disable atmos sound string fade](#3.26.16 "sets the fade on or off an atmos sound")
17.  [enable_disable simulation sound opt_fadetime](#3.26.17 "sets simulation sound on/off")
18.  [enable_disable atmos sound](#3.26.18 "sets atmos sound on/off")
19.  [set atmos volume expression](#3.26.19 "sets the volume level of the atmos sound")
20.  [destroy mixer expression opt_fadetime](#3.26.20 "destroys a script mixer")
21.  [set mixer expression channel AUDIO_MIXER_CHANNEL to expression opt_fadetime](#3.26.21 "sets a mixer channel's gain")
22.  [set mixer expression to string opt_fadetime](#3.26.22 "sets a mixer profile to a preset")
23.  [set auto mixer override on object channel constant min expression max expression](#3.26.23 "sets auto mixer override on any one object")
24.  [reset auto mixer override](#3.26.24 "resets the auto mixer override")
25.  [release loop](#3.26.25 "releases the loop")
26.  [play string sound string opt_volume opt_loop opt_pitch](#3.26.26 "Plays a sound effect.")
27.  [play sound string at coord_expression opt_volume opt_loop opt_pitch](#3.26.27 "Plays a sound effect.")
28.  [play random sound from group string at coord_expression](#3.26.28 "Plays a sound effect.")
29.  [stop sound string](#3.26.29 "Stops a sound effect.")
30.  [release sound string](#3.26.30 "Stops a sound effect when its loop is ended.")
31.  [attach opt_3d sound string to object](#3.26.31 "Creates a sound on an object and keeps it there.")
32.  [detach sound string from object](#3.26.32 "Removes a sound from an object.")

<a name="3.27">

### 3.27 Weather Storms

</a>

Creates weather [condition](conditions.md#6 "True or False")s.

1.  [set precipitation at coord_expression radius expression enable_disable rainfall enable_disable snowfall enable_disable overcast](#3.27.1 "sets the precipitation at a given position")
2.  [set object properties rainfall expression snowfall expression overcast speed expression](#3.27.2 "Changes some properties of a object (only for weather at present)")
3.  [set cloud object altitude expression](#3.27.3 "sets the altitude of the given weather object")
4.  [set cloud generation expression](#3.27.4 "sets the speed at which clouds generate")
5.  [set cloud object points to expression](#3.27.5 "sets the number of points a cloud has - more points, bigger cloud")
6.  [set cloud object size to x expression y expression z expression](#3.27.6 "sets the number of points a cloud has - more points, bigger cloud")
7.  [set lightning strike at coord_expression from object](#3.27.7 "creates a bolt of lightning that strikes at the given pos")
8.  [set cloud for object above coord_expression](#3.27.8 "sets a cloud above the given position")
9.  [set sandstorm object position moving to position strength expression radius expression](#3.27.9 "sets the values for a sandstorm visual effect")
10.  [set cloud alignment to expression at coord_expression radius expression](#3.27.10 "changes the alignment of the clouds")
11.  [enable/disable object affected by wind](#3.27.11 "sets object to be moved by the wind or not in the game")

<a name="3.28"></a>

#### <a name="3.28">3.28 state</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") <float <a="" href="expressions.md#12" title="Evaluates to a real number." class="cross">expression> <ulong <a="" href="expressions.md#12" title="Evaluates to a real number." class="cross">expression, [expression](expressions.md#12 "Evaluates to a real number.")> <position <a="" href="position.md#11" title="Positions in the game world can be specified in various ways." class="cross">coord_expression></position></ulong></float>

This is a dangerous feature, where you can set the [object](objects.md#8 "return a game object") in a state. Do not set them into a simulation state as it may go mad! States have data which needs to be set up for the specific statae, the float, ulong, and position params may need to be filled for the state. BE CAREFUL!

`state LostBrother LIVING_IN_SCRIPT`

<a name="3.29">

### 3.29 Statement Blocks

</a>

Certain things in Black and white insist that they have control start and control release sections. Example the camera must be free for control before you do anything. Putting these in blocks inforces the programmer to release control properly. Other parts of the internal language require blocks for parsing reasons. Exmaple: The script compiler must know where the end of an if statement is for jumping to address in the byte code. This information is unimportant to the script programmer, they just need ot know the sytax of the language!

1.  [If Block](#3.29.1 "Conditional if.")
    1.  [if condition statements](#3.29.1.1 "if condition.")
    2.  [elsif condition statements](#3.29.1.2 "when the above if/elsif statement fails this condition is checked.")
    3.  [else statements](#3.29.1.3 "run if the proceeding if/elsif fails.")
    4.  [end if](#3.29.1.4 "end of the if block.")
2.  [while condition statements end while](#3.29.2 "Loops While the condition is true.")
3.  [force while condition statements end while](#3.29.3 "Loops While the condition is true.")
4.  [begin loop statements end loop](#3.29.4 "Loops continously.")
5.  [begin cinema statements end cinema](#3.29.5 "Widescreen mode.")
6.  [begin cinema statements end cinema](#3.29.6 "Widescreen mode.")
7.  [begin full screen cinema statements end cinema](#3.29.7 "Fullscreen mode.")
8.  [begin interactive camera statements end interactive camera](#3.29.8 "Camera control mode.")
9.  [begin dialogue statements end dialogue](#3.29.9 "Takes control of the text, and spirits.")
10.  [begin known dialogue statements end dialogue](#3.29.10 "Verifies dialogue control.")
11.  [begin known cinema statements end dialogue](#3.29.11 "Verifies cinema control.")

<a name="3.30">

### 3.30 Dialogue Statements

</a>

Statements dealing with dialogue. Most of these must be made within a dialogue block

1.  [Spirit Control](#3.30.1 "The two help spirits exist to advise the player.")
    1.  [make spirit_type point to object](#3.30.1.1 "The specified spirit type will point to the target object.")
    2.  [make spirit_type point at position](#3.30.1.2 "The specified spirit type will point to the target coordinate.")
    3.  [make spirit_type play across expression down expression constant](#3.30.1.3 "The specified spirit type will play an animation at the set position.")
    4.  [make spirit_type play constant at coord_expression in world](#3.30.1.4 "The specified spirit type will play an animation at the set position.")
    5.  [make spirit_type cling across expression down expression](#3.30.1.5 "The specified spirit type will cling to the edge of the screen.")
    6.  [make spirit_type fly across expression down expression](#3.30.1.6 "The specified spirit type will fly to the position on the screen.")
    7.  [make spirit_type fly across expression down expression](#3.30.1.7 "The specified spirit type will fly to the position on the screen.")
    8.  [stop spirit_type pointing](#3.30.1.8 "Stops the spirit pointing")
    9.  [make spirit_type look at position](#3.30.1.9 "The specified spirit type will look to the set position.")
    10.  [make spirit_type look at object](#3.30.1.10 "The specified spirit type will look at the target object.")
    11.  [stop spirit_type looking](#3.30.1.11 "Stops the spirit looking")
    12.  [eject spirit_type](#3.30.1.12 "Ejects the spirit type in front of the player.")
    13.  [appear spirit_type](#3.30.1.13 "Make the spirit type Appear in front of the player in a puff of smoke.")
    14.  [disappear spirit_type](#3.30.1.14 "Make the spirit type disappear in front of the player in a puff of smoke.")
    15.  [send spirit_type home](#3.30.1.15 "The specified spirit type will move off the screen.")
2.  [Text and Speech](#3.30.2 "Text and speech.")
    1.  [request dialogue constant (DIALOG_EVENT_TYPE in DialogManagerEnum.h) opt_with_constant (DIALOG_MAGNITUDE)](#3.30.2.1 "Request that the relevant dialogue gets said")
    2.  [say string](#3.30.2.2 "String statement.")
    3.  [say database string](#3.30.2.3 "Say a string from the database id.")
    4.  [say random from group string](#3.30.2.4 "String statement.")
    5.  [say opt_single line expression from group string interaction opt_narrator](#3.30.2.5 "say the given line from the text group")
    6.  [say string with number expression](#3.30.2.6 "Development string statement with a value.")
    7.  [say constant with number expression](#3.30.2.7 "Display text and play sound if there is any, inserts a number into the string.")
    8.  [clear dialogue](#3.30.2.8 "Clears the text in the dialogue window (Dark Bar)")
    9.  [close dialogue](#3.30.2.9 "Closes the dialogue window (Dark Bar)")
    10.  [close dialogue](#3.30.2.10 "Closes the dialogue window (Dark Bar)")

<a name="3.31">

### 3.31 Camera Statements

</a>

Cameras can be controlled from within the scripts.

See also:

*   [begin cinema statements end cinema](#3.29.5 "Widescreen mode.")
*   begin camera statements end camera

1.  [set camera zones to "filename"](#3.31.1 "sets the camera zones to the one defined in a file")
2.  [store camera details](#3.31.2 "stores the camera details, (foc, pos)")
3.  [restore camera details](#3.31.3 "restores the camera details, (foc, pos)")
4.  [reset camera lens time expression](#3.31.4 "resets the camera lens.")
5.  [enable_disable clipping distance](#3.31.5 "sets the clipping distance")
6.  [set camera lens expression time expression](#3.31.6 "Sets the camera lens in an optional amount of time.")
7.  [move camera position to position time expression](#3.31.7 "Moves the camera position.")
8.  [set camera position to position](#3.31.8 "Sets the camera position.")
9.  [move camera focus to position time expression](#3.31.9 "Moves the camera focus.")
10.  [set camera focus to position](#3.31.10 "Sets the camera focus.")
11.  [move camera to face object distance expression time expression](#3.31.11 "moves the camera to face an object.")
12.  [set camera to face object distance expression](#3.31.12 "sets the camera to face an object.")
13.  [set camera focus follow object opt_offset](#3.31.13 "Camera focus follows.")
14.  [set camera position follow object opt_offset](#3.31.14 "Camera position follows.")
15.  [move follow camera position offset coord_expression time expression](#3.31.15 "Camera follows position offset moves.")
16.  [move follow camera foucs offset coord_expression time expression](#3.31.16 "Camera follows focus offset moves.")
17.  [move camera focus follow object](#3.31.17 "Camera focus follows.")
18.  [move camera position follow object](#3.31.18 "Camera position follows.")
19.  [set camera to camera_enum](#3.31.19 "Sets the camera to a camera position and focus defined in the camera editor.")
20.  [move camera to camera_enum time expression](#3.31.20 "Moves the camera to a camera position and focus defined in the camera editor in a define time.")
21.  [camera path camera_enum](#3.31.21 "Starts a camera path.")
22.  [enable/disable camera fixed rotation at coord_expression](#3.31.22 "Fixes the rotation point")
23.  [start hand demo string](#3.31.23 "play hand demo of a prerecorded hand movement")
24.  [set camera position coord_expression focus coord_expression lens expression](#3.31.24 "Sets the camera position, focus and lens.")
25.  [move camera position coord_expression focus coord_expression lens expression time expression](#3.31.25 "Moves the camera position, focus and lens in a given time.")
26.  [shake camera strength expression](#3.31.26 "Shakes the camera")
27.  [stop camera shake](#3.31.27 "Stops the camera shaking")
28.  [set camera position relative to object T_AT coord_expression](#3.31.28 "Sets the camera position relative to an objects 3d space.")
29.  [set camera focus relative to object T_AT coord_expression](#3.31.29 "Sets the camera focus relative to an objects 3d space.")
30.  [move camera position to coord_expression time expression easein expression easeout expression](#3.31.30 "Moves the camera position from the initial position to the given position over the given time and with the various speed expressions")
31.  [set camera lens expression time expression easein expression easeout expression](#3.31.31 "Sets the camera lens in an optional amount of time, with easein and easeout parameters.")
32.  [move camera focus to coord_expression time expression easein expression easeout expression](#3.31.32 "Moves the camera focus from the initial position to the given position over the given time and with the various speed expressions")
33.  [move camera position to coord_expression time expression catmullrom bias expression tension expression](#3.31.33 "Moves the camera position from the initial position to the given position over the given time and with the various spline expressions")
34.  [move camera focus to coord_expression time expression catmullrom bias expression tension expression](#3.31.34 "Moves the focus position from the initial position to the given position over the given time and with the various spline expressions")
35.  [set camera lens to coord_expression time expression catmullrom expression bias tension expression](#3.31.35 "Sets the camera lens from the initial position to the given position over the given time and with the various spline expressions")
36.  [set camera roll expression time expression](#3.31.36 "rolls the camera roll through the given number of degrees")
37.  [set camera roll expression time expression easein expression easeout expression](#3.31.37 "Sets the camera roll in an optional amount of time, with easein and easeout parameters.")
38.  [set camera roll to possition time expression catmullrom bias expression tension expression](#3.31.38 "Sets the camera roll from the initial position to the given position over the given time and with the various spline expressions")
39.  [play camera path with easein expression easeout expression](#3.31.39 "Plays the camera path that has been set up")
40.  [queue camera move with position coord_expression focus coord_expression time expression](#3.31.40 "Sets the camera roll from the initial position to the given position over the given time and with the various spline expressions")
41.  [reset camera path](#3.31.41 "Resets the camera path")

* * *

<a name="3.1.1"></a>

#### <a name="3.1.1">3.1.1 move</a> [object](objects.md#8 "return a game object") position to position

This makes the [object](objects.md#8 "return a game object") move between the two positions.

```
move Sister position to {SoapBox}
move SleepingLion position to {ThePeacefullValley} using NAV_FAILURE_MODE_GO_TO_CLOSEST_POINT navigation
```

<a name="3.1.2"></a>

#### <a name="3.1.2">3.1.2 set</a> [object](objects.md#8 "return a game object") position to position

This make the [object](objects.md#8 "return a game object") position change.

`set Sister position to {SoapBox}`

<a name="3.1.3"></a>

#### <a name="3.1.3">3.1.3 set</a> [object](objects.md#8 "return a game object") resource [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

sets the amount of resource in an [object](objects.md#8 "return a game object") to the amount specified

`set OreRock resource ORE to 10000`

<a name="3.1.4"></a>

#### <a name="3.1.4">3.1.4 set</a> [object](objects.md#8 "return a game object") focus to position

Makes the [object](objects.md#8 "return a game object") turn to face the position passed, or just look at the position passed depending on how flexable an [object](objects.md#8 "return a game object") is.

`set Sister focus to {LostBrother}`

<a name="3.1.5"></a>

#### <a name="3.1.5">3.1.5 set</a> [object](objects.md#8 "return a game object") focus on [object](objects.md#8 "return a game object")

For the case of a creature the creature will look at the moving [object](objects.md#8 "return a game object"), but for other things they will turn to face the current position of the passed [object](objects.md#8 "return a game object").

`set MyCreature focus on Rock`

<a name="3.1.6"></a>

#### <a name="3.1.6">3.1.6 play anim string on</a> [object](objects.md#8 "return a game object") opt_loop opt_stand

Set an [object](objects.md#8 "return a game object") to play an animation for a number of times using a string.

```
play anim "M_CRY" on Sister loop 5 disable stand

play anim on Sister "M_CRY" disable stand

play anim on Sister "M_CRY" loop 5
```

<a name="3.1.7"></a>

#### <a name="3.1.7">3.1.7 set</a> [object](objects.md#8 "return a game object") anim [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Very useful if you wish to change the walk animation of a character eg. Pied piper walks with a dance.

`set Piper anim ANM_PIPERDANCE`

<a name="3.1.8"></a>

#### <a name="3.1.8">3.1.8 set</a> [object](objects.md#8 "return a game object") physics balance [expression](expressions.md#12 "Evaluates to a real number.")

Sets an [object](objects.md#8 "return a game object")s physics proerties (spreadhseet value)

`set lamb physics balance 17`

<a name="3.1.9"></a>

#### <a name="3.1.9">3.1.9 override</a> [object](objects.md#8 "return a game object") anim [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Very useful if you wish to change the walk animation of a character eg. Pied piper walks with a dance.

`override Piper anim "M_PIPERDANCE"`

<a name="3.1.10"></a>

#### <a name="3.1.10">3.1.10 cancel</a> [object](objects.md#8 "return a game object") anim override

Cancels any overriding animation set on an actor

`cancel MyActor anim override`

<a name="3.1.11"></a>

#### <a name="3.1.11">3.1.11 delete</a> [object](objects.md#8 "return a game object")

This deletes an [object](objects.md#8 "return a game object") from the game. If you wish something to die before being deleted you should set it's health to 0.0. NB. Deleting an [object](objects.md#8 "return a game object") which is a container will dispand the members of the container, not delete them.

`delete PiedPiperFlock`

<a name="3.1.12"></a>

#### <a name="3.1.12">3.1.12 set</a> [object](objects.md#8 "return a game object") in player [expression](expressions.md#12 "Evaluates to a real number.") hand

Places an [object](objects.md#8 "return a game object") into the player hand

`set MyFish in player 1 hand`

<a name="3.1.13"></a>

#### <a name="3.1.13">3.1.13 set</a> [object](objects.md#8 "return a game object") velocity heading position speed [expression](expressions.md#12 "Evaluates to a real number.")

If an [object](objects.md#8 "return a game object") is something with Physics in the game it applies a velocity to it towards a position.

`set Rock velocity heading {PiedPiper} speed 10`

<a name="3.1.14"></a>

#### <a name="3.1.14">3.1.14 set</a> [object](objects.md#8 "return a game object") target [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.")

Applies physics to an [object](objects.md#8 "return a game object") so that it lands at the defined position in a given time

`set Rock1 target {House} time 5`

<a name="3.1.15"></a>

#### <a name="3.1.15">3.1.15 set</a> [object](objects.md#8 "return a game object") temperature [expression](expressions.md#12 "Evaluates to a real number.")

Sets the temperature of an [object](objects.md#8 "return a game object"). Range is -1 to 1.

`set rock temperature 1`

<a name="3.1.16"></a>

#### <a name="3.1.16">3.1.16 set</a> [object](objects.md#8 "return a game object") player [expression](expressions.md#12 "Evaluates to a real number.")

Sets the player an [object](objects.md#8 "return a game object") belongs to

`set Villager player 3`

<a name="3.1.17"></a>

#### <a name="3.1.17">3.1.17 release</a> [object](objects.md#8 "return a game object")

This releases a game [object](objects.md#8 "return a game object") from the script, and sets it into the game without deleting.

<a name="3.1.18"></a>

#### <a name="3.1.18">3.1.18 release</a> [object](objects.md#8 "return a game object") focus

Game creatures can be in the sim with there focus being set to an [object](objects.md#8 "return a game object") or position. This functions free's up the creatures head behaviour.

<a name="3.1.19"></a>

#### <a name="3.1.19">3.1.19 enable_disable</a> [object](objects.md#8 "return a game object") can be leashed to

Sets if a creature can leash to this [object](objects.md#8 "return a game object") or not. This [object](objects.md#8 "return a game object") or course can also be a creature.

`disable FriendlyCreature can be leashed to`

<a name="3.1.20"></a>

#### <a name="3.1.20">3.1.20 set</a> [object](objects.md#8 "return a game object") colour red [expression](expressions.md#12 "Evaluates to a real number.") green [expression](expressions.md#12 "Evaluates to a real number.") blue [expression](expressions.md#12 "Evaluates to a real number.")

Set an [object](objects.md#8 "return a game object")s colour if possible. RGB 0->255

`set MyEffect colour red 230 green 100 blue 10`

<a name="3.1.21"></a>

#### <a name="3.1.21">3.1.21 reset</a> [object](objects.md#8 "return a game object") colour

Reset an [object](objects.md#8 "return a game object")s colour if possible

`reset MyCreature colour`

<a name="3.1.22"></a>

#### <a name="3.1.22">3.1.22 set</a> [object](objects.md#8 "return a game object") secondary colour red [expression](expressions.md#12 "Evaluates to a real number.") green [expression](expressions.md#12 "Evaluates to a real number.") blue [expression](expressions.md#12 "Evaluates to a real number.")

Set an [object](objects.md#8 "return a game object")s secondary colour if possible. RGB 0->255

`set MyEffect secondary colour red 230 green 100 blue 10`

<a name="3.1.23"></a>

#### <a name="3.1.23">3.1.23 stop</a> [object](objects.md#8 "return a game object") moving

stops a given [object](objects.md#8 "return a game object") from moving

`stop Sister moving`

<a name="3.1.24"></a>

#### <a name="3.1.24">3.1.24 move</a> [object](objects.md#8 "return a game object") to limbo

moves an [object](objects.md#8 "return a game object") to limbo

`move MyRock to limbo`

<a name="3.1.25"></a>

#### <a name="3.1.25">3.1.25 release</a> [object](objects.md#8 "return a game object") from limbo

releases an [object](objects.md#8 "return a game object") from limbo

`release MyRock from limbo`

<a name="3.1.26"></a>

#### <a name="3.1.26">3.1.26 set</a> [object](objects.md#8 "return a game object") angular velocity x [expression](expressions.md#12 "Evaluates to a real number.") y [expression](expressions.md#12 "Evaluates to a real number.") z [expression](expressions.md#12 "Evaluates to a real number.")

sets the angular velocity for the given [object](objects.md#8 "return a game object")

`set MyObject angular velocity x 20.2 y 18.6 z 2.0`

<a name="3.1.27"></a>

#### <a name="3.1.27">3.1.27 override mesh for</a> [object](objects.md#8 "return a game object") with string

overrides the given [object](objects.md#8 "return a game object")s default mesh with the given string

`override mesh for MyObject with "New_Mesh_String"`

<a name="3.1.28"></a>

#### <a name="3.1.28">3.1.28 enable/disable</a> [object](objects.md#8 "return a game object") indestructible

sets the [object](objects.md#8 "return a game object") as indestructible or not.

`enable MyVillager indestructible`

<a name="3.1.29"></a>

#### <a name="3.1.29">3.1.29 enable/disable</a> [object](objects.md#8 "return a game object") hurt by fire.

sets the [object](objects.md#8 "return a game object") as hurt by fire or not, normal behaviour is hurt by fire ;)

`disable MyVillager hurt by fire`

<a name="3.1.30"></a>

#### <a name="3.1.30">3.1.30 enable/disable</a> [object](objects.md#8 "return a game object") set on fire

sets the [object](objects.md#8 "return a game object") as possible to be lit by fires. Generally [object](objects.md#8 "return a game object")s can burn, but in some scripts villagers must not be burnt.

`disable MyVillager set on fire`

<a name="3.1.31"></a>

#### <a name="3.1.31">3.1.31 enable/disable</a> [object](objects.md#8 "return a game object") on fire [expression](expressions.md#12 "Evaluates to a real number.")

sets an [object](objects.md#8 "return a game object") or container to all being on fire or not A value on how on fierce the blaze is. 0->1 1 will obviously burn faster

`enable [object](objects.md#8 "return a game object") on fire 0.5`

<a name="3.1.32">

#### 3.1.32 enable_disable fire system

</a>

Enables or Disables the games fire system

`disable fire system`

<a name="3.1.33">

#### 3.1.33 enable_disable floaty icons

</a>

Sets floaty icon draw in widescreen

`disable floaty icons`

<a name="3.1.34"></a>

#### <a name="3.1.34">3.1.34 enable/disable</a> [object](objects.md#8 "return a game object") moveable

sets an [object](objects.md#8 "return a game object") to moveable, that is, is moveable by hand, creature and physics or not. If enabled it has its default behaviour.

`disable SingingStone moveable`

<a name="3.1.35"></a>

#### <a name="3.1.35">3.1.35 enable/disable</a> [object](objects.md#8 "return a game object") pickup

sets an [object](objects.md#8 "return a game object") to pickupable, that is, is pickupable by hand, or creature. If enabled it has its default behaviour.

`disable SingingStone pickup`

<a name="3.1.36"></a>

#### <a name="3.1.36">3.1.36 enable/disable pickup type</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets if a certian pickup interface action is available

`enable pickup type PICKUP_BALANCE_TYPE_ROAD`

<a name="3.1.37"></a>

#### <a name="3.1.37">3.1.37 set</a> [object](objects.md#8 "return a game object") alpha [expression](expressions.md#12 "Evaluates to a real number.")

sets an [object](objects.md#8 "return a game object")s alpha

`set MyVillager alpha 0.2`

<a name="3.1.38"></a>

#### <a name="3.1.38">3.1.38 set lava running at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") heading [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.")

sets a lava river off, heading in the specified RELATIVE direction

`set lava running at {LavaPos} heading {1, 0, 4}`

<a name="3.1.39"></a>

#### <a name="3.1.39">3.1.39 set</a> [object](objects.md#8 "return a game object") shake [expression](expressions.md#12 "Evaluates to a real number.")

makes an [object](objects.md#8 "return a game object") shake; the last value defines intensity of shake

`set MyBoulder shake 0.4`

<a name="3.1.40"></a>

#### <a name="3.1.40">3.1.40 enable_disable</a> [object](objects.md#8 "return a game object") reactable

sets an actor [object](objects.md#8 "return a game object") to a reactable state. Only works on villagers and the creature.

`enable [object](objects.md#8 "return a game object") reactable`

<a name="3.1.41"></a>

#### <a name="3.1.41">3.1.41 enable_disable</a> [object](objects.md#8 "return a game object") can be fisted

sets whether an [object](objects.md#8 "return a game object") can be fisted

`enable [object](objects.md#8 "return a game object") can be fisted`

<a name="3.1.42"></a>

#### <a name="3.1.42">3.1.42 enable_disable</a> [object](objects.md#8 "return a game object") interactable

sets whether the hand can interact with an [object](objects.md#8 "return a game object")

`enable Stone interactable`

<a name="3.1.43"></a>

#### <a name="3.1.43">3.1.43 enable_disable</a> [object](objects.md#8 "return a game object") cylindar override

sets whether an [object](objects.md#8 "return a game object") is super easy for the hand to interact with

`enable SignPost cylindar override`

<a name="3.1.44"></a>

#### <a name="3.1.44">3.1.44 enable_disable</a> [object](objects.md#8 "return a game object") physics tracking

Starts or stops tracking of physics on an [object](objects.md#8 "return a game object")

`enable MyRock physics tracking`

<a name="3.1.45"></a>

#### <a name="3.1.45">3.1.45 clear</a> [object](objects.md#8 "return a game object") hit [object](objects.md#8 "return a game object")

Clears the memory of the last thing hit by the [object](objects.md#8 "return a game object"). Must have physics tracking enabled.

`clear MyRock hit thing`

<a name="3.1.46"></a>

#### <a name="3.1.46">3.1.46 clear</a> [object](objects.md#8 "return a game object") hit land

Clears the memory of the the [object](objects.md#8 "return a game object") hitting the ground. Must have physics tracking enabled.

`clear MyRock hit thing`

<a name="3.1.47"></a>

#### <a name="3.1.47">3.1.47 enable/disable force</a> [object](objects.md#8 "return a game object") renderable

enables/disables forcing an [object](objects.md#8 "return a game object") to be rendered

`enable force Sheep renderable`

<a name="3.2.1"></a>

#### <a name="3.2.1">3.2.1 enable_disable anim events on</a> [object](objects.md#8 "return a game object")

sets whether or not the [object](objects.md#8 "return a game object") (statedriven) cares about animation events

`enable anim events on MyDude`

<a name="3.2.2"></a>

#### <a name="3.2.2">3.2.2 set</a> [object](objects.md#8 "return a game object") anim event probability

sets the probability of an animation event being played on a villager

`set MyStalker anim event probability`

<a name="3.2.3">

### 3.2.3 Controlling Villagers

</a>

Statements that can only be used on Villagers

<a name="3.2.3.1"></a>

#### <a name="3.2.3.1">3.2.3.1 move villager</a> [object](objects.md#8 "return a game object") focus to [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

makes the villager turn to look at the location

`move villager AshMatheson focus to {TheBasement}`

<a name="3.2.3.2"></a>

#### <a name="3.2.3.2">3.2.3.2 set</a> [object](objects.md#8 "return a game object") disciple [constant](constants.md#10 "A constant is used to refer to a game enumeration.") opt_sound

This allows you to make a villager a disciple in the game. The with sound is optional.

`set Sister disciple VILLAGER_DISCIPLE_BUILDER with sound`

<a name="3.2.3.3"></a>

#### <a name="3.2.3.3">3.2.3.3 set housewife</a> [object](objects.md#8 "return a game object") pregnant by [object](objects.md#8 "return a game object")

sets a female villager to pregnant

`set housewife MyMissus pregnant by TheMilkman`

<a name="3.2.3.4"></a>

#### <a name="3.2.3.4">3.2.3.4 set</a> [object](objects.md#8 "return a game object") to follow [object](objects.md#8 "return a game object") at distance [expression](expressions.md#12 "Evaluates to a real number.")

sets a villager [object](objects.md#8 "return a game object") to follow another [object](objects.md#8 "return a game object") at the given distance

`set MyStalker to follow MyFreakedOutVillager at distance 10.3`

<a name="3.2.3.5"></a>

#### <a name="3.2.3.5">3.2.3.5 enable/disable</a> [object](objects.md#8 "return a game object") skeleton

sets the [object](objects.md#8 "return a game object") as a skeleton true or false.

`enable MyLittleFella skeleton`

<a name="3.2.3.6"></a>

#### <a name="3.2.3.6">3.2.3.6 set</a> [object](objects.md#8 "return a game object") carrying [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Using the CARRIED_OBJECT enum, you can set a villager to carrying an [object](objects.md#8 "return a game object") (eg. Fishing rod) like they usually do in the game. Using the enum CARRIED_OBJECT_NONE as the carried [object](objects.md#8 "return a game object") stops an [object](objects.md#8 "return a game object") from being carried.

`set MyVillager carrying CARRIED_OBJECT_FISHING_ROD`

<a name="3.2.3.7"></a>

#### <a name="3.2.3.7">3.2.3.7 enable_disable villager</a> [object](objects.md#8 "return a game object") can be imprisoned

sets the given villager as a actor that can be imprisoned

`enable villager [object](objects.md#8 "return a game object") can be imprisoned`

<a name="3.2.3.8"></a>

#### <a name="3.2.3.8">3.2.3.8 set villager</a> [object](objects.md#8 "return a game object") default speed to [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

makes a villager start moving at thier normal speed again

`set villager GreekDude default speed to SCRIPT_VILLAGER_DEFAULT_SPEED_WALKING`

<a name="3.2.3.9"></a>

#### <a name="3.2.3.9">3.2.3.9 enable_disable villagers ignore</a> [object](objects.md#8 "return a game object") resource

sets whether or not villagers ignore the fact that an [object](objects.md#8 "return a game object") has a resource

`enable villagers ignore MyTree resource`

<a name="3.2.3.10"></a>

#### <a name="3.2.3.10">3.2.3.10 enable_disable</a> [object](objects.md#8 "return a game object") alternative mesh

sets a villagers mesh to it's alternative version (this is temp for B&W2 villager mesh choices.)

`enable MyVillager alternative mesh`

<a name="3.2.3.11"></a>

#### <a name="3.2.3.11">3.2.3.11 play paired anim</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") on [object](objects.md#8 "return a game object") with [object](objects.md#8 "return a game object") (snap to position)

Plays a paired animation using two villagers. The first [object](objects.md#8 "return a game object") passed is the leader.
Only the leader is valid for the '[wait until](#3.25.1 "Script will not continue until condition is successful.") played' call. See VillagerPairedActionEnum.h

`play paired anim VILLAGER_PAIRED_ACTION_BREED using Man1 with Man2 snap to position`

<a name="3.2.3.12"></a>

#### <a name="3.2.3.12">3.2.3.12 set anim speed of</a> [object](objects.md#8 "return a game object") to [expression](expressions.md#12 "Evaluates to a real number.")

sets an [object](objects.md#8 "return a game object")s animation speed

`set anim speed of MyLittleVillager to 0.5`

<a name="3.2.3.13"></a>

#### <a name="3.2.3.13">3.2.3.13 reset</a> [object](objects.md#8 "return a game object") anim speed

resets the [object](objects.md#8 "return a game object")s animation speed

`reset [object](objects.md#8 "return a game object") MyLittleVillager anim speed`

<a name="3.2.3.14"></a>

#### <a name="3.2.3.14">3.2.3.14 reset</a> [object](objects.md#8 "return a game object") speed

Resets an [object](objects.md#8 "return a game object")s walk speed

`reset Bobs speed`

<a name="3.3.1"></a>

#### <a name="3.3.1">3.3.1 enable_disable</a> [object](objects.md#8 "return a game object") visible

sets whether or not the visual effect is visible

`disable Glow visible`

<a name="3.3.2"></a>

#### <a name="3.3.2">3.3.2 enable_disable</a> [object](objects.md#8 "return a game object") pulse (speed [expression](expressions.md#12 "Evaluates to a real number.")) (with fadetime [expression](expressions.md#12 "Evaluates to a real number."))

makes an [object](objects.md#8 "return a game object") pulse, or stops it pulsing

```
enable ScaryMan pulse speed 0.5

disable Sausage pulse with fadetime 2
```

<a name="3.3.3"></a>

#### <a name="3.3.3">3.3.3 enable_disable</a> [object](objects.md#8 "return a game object") additive

enable_disable [object](objects.md#8 "return a game object") additive. Used by some visual effects

`enable MyPlasmaVisual additive`

<a name="3.3.4"></a>

#### <a name="3.3.4">3.3.4 enable_disable</a> [object](objects.md#8 "return a game object") secondary additive

enable_disable [object](objects.md#8 "return a game object") secondary additive. Used by some visual effects

`enable MyPlasmaVisual secondary additive`

<a name="3.3.5"></a>

#### <a name="3.3.5">3.3.5 stop visual effect</a> [object](objects.md#8 "return a game object")

Shuts down the playing of a visual effect

`stop visual effect [object](objects.md#8 "return a game object")`

<a name="3.3.6"></a>

#### <a name="3.3.6">3.3.6 remove visual effect</a> [object](objects.md#8 "return a game object") target at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Removes visual effect targets for instanced visuals.

`remove visual effect target at {100, 100, 100}`

<a name="3.3.7"></a>

#### <a name="3.3.7">3.3.7 add</a> [object](objects.md#8 "return a game object") target at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Adds a target to the [object](objects.md#8 "return a game object")s target list (Currently only used by spot visuals)

`add VFX target at {LostBrother}`

<a name="3.3.8"></a>

#### <a name="3.3.8">3.3.8 set visual effect target</a> [object](objects.md#8 "return a game object")

sets whether a mine is the monster mine

`set visual effect MyEffect target {MyTarget}`

<a name="3.3.9"></a>

#### <a name="3.3.9">3.3.9 enable_disable</a> [object](objects.md#8 "return a game object") pulse (speed [expression](expressions.md#12 "Evaluates to a real number.")) (with fadetime [expression](expressions.md#12 "Evaluates to a real number."))

makes an [object](objects.md#8 "return a game object") pulse, or stops it pulsing

```
enable ScaryMan pulse speed 0.5

disable Sausage pulse with fadetime 2
```

<a name="3.4.1"></a>

#### <a name="3.4.1">3.4.1 start migration from town</a> [object](objects.md#8 "return a game object") to town [object](objects.md#8 "return a game object")

start a migration

`start migration from JapaneseTown to AztecTown`

<a name="3.4.2"></a>

#### <a name="3.4.2">3.4.2 enable_disable migration from</a> [object](objects.md#8 "return a game object") to [object](objects.md#8 "return a game object")

enables or disables migration from the source town to the target town

`disable migration from JapaneseTown to AztecTown`

<a name="3.4.3"></a>

#### <a name="3.4.3">3.4.3 enable_disable migration</a> [object](objects.md#8 "return a game object") can be declined

Sets whether a migration cna be declined

`disable migration MyMigration can be declined`

<a name="3.4.4"></a>

#### <a name="3.4.4">3.4.4 enable_disable migration from town</a> [object](objects.md#8 "return a game object") to all other towns

enables or disables migration from the source town to all other towns

`disable migration from JapaneseTown to AztecTown`

<a name="3.4.5"></a>

#### <a name="3.4.5">3.4.5 set migration threshold between town</a> [object](objects.md#8 "return a game object") and town [object](objects.md#8 "return a game object")

sets the migration threshold from the source town to target town

`set migration threshold from Japanesetown to AztecTown 0.4`

<a name="3.4.6">

#### 3.4.6 enable_disable player town migration

</a>

sets whether player towns can migrate

`disable player town migration`

<a name="3.4.7"></a>

#### <a name="3.4.7">3.4.7 enable_disable town</a> [object](objects.md#8 "return a game object") impressiveness override opt_amount

sets the overriding of a town's impressiveness value

`enable town MyTown impressiveness override with 175000`

<a name="3.4.8"></a>

#### <a name="3.4.8">3.4.8 accept pilgrims</a> [object](objects.md#8 "return a game object")

makes the pilgrims automatically accpeted.

`accept pilgrims MyPilgrims`

<a name="3.4.9"></a>

#### <a name="3.4.9">3.4.9 decline pilgrims</a> [object](objects.md#8 "return a game object")

makes the pilgrims automatically rejected.

`decline pilgrims MyPilgrims`

<a name="3.5.1"></a>

#### <a name="3.5.1">3.5.1 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") mana [expression](expressions.md#12 "Evaluates to a real number.")

Sets the mana of a player

`set player 0 mana 10000`

<a name="3.5.2"></a>

#### <a name="3.5.2">3.5.2 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") alignment [expression](expressions.md#12 "Evaluates to a real number.")

Sets the players alignment

`set player 1 alignment 0.9`

<a name="3.5.3"></a>

#### <a name="3.5.3">3.5.3 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") town [object](objects.md#8 "return a game object") capture reason [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the reason that a town has been captured

`set player 0 town JapTown capture reason LAST_CAPTURE_AGGRESSIVE`

<a name="3.5.4"></a>

#### <a name="3.5.4">3.5.4 enable_disable spell</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") for player [expression](expressions.md#12 "Evaluates to a real number.")

enables/disables a spell for a specific player

`enable spell HEAL_LEVEL_1 for player 1`

<a name="3.5.5"></a>

#### <a name="3.5.5">3.5.5 clear player</a> [expression](expressions.md#12 "Evaluates to a real number.") spell charging

Stops a player spells from charging

`clear player 3 spell charging`

<a name="3.5.6"></a>

#### <a name="3.5.6">3.5.6 set</a> [object](objects.md#8 "return a game object") player [expression](expressions.md#12 "Evaluates to a real number.") relative belief

The town specified becomes owned by the player specified. This is an aggressive take over. The belief value does nothing.

`set Town player 1 relative belief 2.0`

<a name="3.5.7"></a>

#### <a name="3.5.7">3.5.7 enable_disable player</a> [expression](expressions.md#12 "Evaluates to a real number.") virtual influence

enables/disables the players virtual influence.

`enable player 1 virtual influence`

<a name="3.6.1"></a>

#### <a name="3.6.1">3.6.1 enable_disable abode</a> [object](objects.md#8 "return a game object")

enables or disables the given abode

`disable abode MyMonsterMine`

<a name="3.6.2"></a>

#### <a name="3.6.2">3.6.2 enable/disable villagers can build</a> [object](objects.md#8 "return a game object")

toggles the ability of villagers to build the given [object](objects.md#8 "return a game object")

`disable villagers can build MyHouse`

<a name="3.6.3"></a>

#### <a name="3.6.3">3.6.3 set field</a> [object](objects.md#8 "return a game object") height to [expression](expressions.md#12 "Evaluates to a real number.")

sets how grown a field is (between 0 and 1)

`set field CropPlace height to 0.8`

<a name="3.6.4"></a>

#### <a name="3.6.4">3.6.4 enable_disable monster mine</a> [object](objects.md#8 "return a game object")

sets whether a mine is the monster mine

`enable monster mine MyMine`

<a name="3.7.1"></a>

#### <a name="3.7.1">3.7.1 stop spell</a> [object](objects.md#8 "return a game object")

stops a given spell

`stop spell MySpell`

<a name="3.7.2">

#### 3.7.2 invoke spell stage

</a>

calls the given stage of an epic spell

`invoke MySpell STAGE1`

<a name="3.7.3"></a>

#### <a name="3.7.3">3.7.3 create</a> [expression](expressions.md#12 "Evaluates to a real number.") worshippers at [object](objects.md#8 "return a game object")

Creates some worshippers at an [object](objects.md#8 "return a game object") e.g. Wonder

`create 20 worshippers at MyWonder`

<a name="3.7.4"></a>

#### <a name="3.7.4">3.7.4 create epic</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

triggers an epic wonder, but you need a wonder building and that building set to the town

`create epic EPIC_WONDER_NUMBER_SIREN at {CastPos}`

<a name="3.7.5"></a>

#### <a name="3.7.5">3.7.5 enable_disable predefined sky string time</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the sky to one of the predefined types

`enable predefined sky "EpicHurricaneSky" time 15`

<a name="3.8.1"></a>

#### <a name="3.8.1">3.8.1 play video string <time <a="" href="expressions.md#12" title="Evaluates to a real number." class="cross">expression</time></a>>

plays the given video, starting at the given time

`play video "Land1HandTutorial" time 23`

<a name="3.8.2"></a>

#### <a name="3.8.2">3.8.2 play video string with sound string <time <a="" href="expressions.md#12" title="Evaluates to a real number." class="cross">expression</time></a>>

plays the given video, starting at the given time

`play video "Land1HandTutorial" with sound "HelloWorld" time 23`

<a name="3.8.3"></a>

#### <a name="3.8.3">3.8.3 set</a> [object](objects.md#8 "return a game object") clipping window left [expression](expressions.md#12 "Evaluates to a real number.") top [expression](expressions.md#12 "Evaluates to a real number.") width [expression](expressions.md#12 "Evaluates to a real number.") height [expression](expressions.md#12 "Evaluates to a real number.")

sets the clipping window of a video window

`set MyVid clipping window left 0 top 0 width 1 height 1`

<a name="3.8.4">

#### 3.8.4 stop video

</a>

stops a playing video

`stop video`

<a name="3.9.1"></a>

#### <a name="3.9.1">3.9.1 set physics from hand with strength position radius</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets a physics force from the hand - the position determines the strength in the given axis

`set physics from hand with strength position radius [expression](expressions.md#12 "Evaluates to a real number.")`

<a name="3.9.2"></a>

#### <a name="3.9.2">3.9.2 set capture radius for physics</a> [object](objects.md#8 "return a game object")s to [expression](expressions.md#12 "Evaluates to a real number.")

Sets the capture radius multiplier for [object](objects.md#8 "return a game object")s in physics

`set capture radius multiplier 1.5`

<a name="3.9.3"></a>

#### <a name="3.9.3">3.9.3 set physics at position position with strength position radius</a> [expression](expressions.md#12 "Evaluates to a real number.") random [expression](expressions.md#12 "Evaluates to a real number.")

sets a physics force from a location - the 2nd position determines the strength in the given axis

`set physics at position {BoomPos} with strength {0,80,0} radius 20 random 1`

<a name="3.9.4"></a>

#### <a name="3.9.4">3.9.4 remove all</a> [object](objects.md#8 "return a game object")s in physics

Any [object](objects.md#8 "return a game object")s which are in physics, become not-in-physics

`remove all [object](objects.md#8 "return a game object")s in physics`

<a name="3.9.5"></a>

#### <a name="3.9.5">3.9.5 delete all</a> [object](objects.md#8 "return a game object")s in physics

Any [object](objects.md#8 "return a game object")s which are in physics are deleted

`delete all [object](objects.md#8 "return a game object")s in physics`

<a name="3.10.1"></a>

#### <a name="3.10.1">3.10.1 add effect EFFECT_TYPE at position strength</a> [expression](expressions.md#12 "Evaluates to a real number.") radius [expression](expressions.md#12 "Evaluates to a real number.")

adds an effect at to location

`add effect EFFECT_TYPE_BURN at {MyBadPlace} strength 0.9 radius 10.0`

<a name="3.10.2"></a>

#### <a name="3.10.2">3.10.2 set ground alignment to</a> [expression](expressions.md#12 "Evaluates to a real number.") at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.") amount [expression](expressions.md#12 "Evaluates to a real number.")

changes the alignment on the ground

`set ground alignment to -1 at {BadGuy} radius 20 amount 1`

<a name="3.10.3"></a>

#### <a name="3.10.3">3.10.3 set lava puddle at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.") temperate [expression](expressions.md#12 "Evaluates to a real number.")

adds a puddle of lava to the ground (tempearture from 0 to 1)

`set lava puddle at hand position radius 10 temperature 1`

<a name="3.11.1"></a>

#### <a name="3.11.1">3.11.1 set gate</a> [object](objects.md#8 "return a game object") open

opens a given gatehouse

`set gate MyGateHouse open`

<a name="3.11.2"></a>

#### <a name="3.11.2">3.11.2 set gate</a> [object](objects.md#8 "return a game object") close

closes a given gatehouse

`set gate MyGateHouse close`

<a name="3.11.3">

#### 3.11.3 enable_disable gate can open for platoons

</a>

sets whether a gatehouse can open its gates for platoons to pass through

`disable gate can open for platoons`

<a name="3.12.1"></a>

#### <a name="3.12.1">3.12.1 process land end</a> [object](objects.md#8 "return a game object")ives

triggers processing of fallible [object](objects.md#8 "return a game object")ives

`process land end [object](objects.md#8 "return a game object")ives`

<a name="3.12.2"></a>

#### <a name="3.12.2">3.12.2 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_TYPE status to TRIBUTE_OBJECTIVE_STATE

sets the status of the given [object](objects.md#8 "return a game object")ive

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_FAILABLE_CRATURE_BUILD_ALL_ABODES status to TRIBUTE_OBJECTIVE_STATE_FAILED`

<a name="3.12.3"></a>

#### <a name="3.12.3">3.12.3 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive class [constant](constants.md#10 "A constant is used to refer to a game enumeration.") amount [expression](expressions.md#12 "Evaluates to a real number.")

sets the number of [object](objects.md#8 "return a game object")ives in the given category

`set player 0 [object](objects.md#8 "return a game object")ive class TRIBUTE_OBJECTIVE_CLASS_EVIL amount 4`

<a name="3.12.4"></a>

#### <a name="3.12.4">3.12.4 reset all</a> [object](objects.md#8 "return a game object")ives for player [expression](expressions.md#12 "Evaluates to a real number.")

resets all game [object](objects.md#8 "return a game object")ives

`reset all [object](objects.md#8 "return a game object")ives for player 0`

<a name="3.12.5"></a>

#### <a name="3.12.5">3.12.5 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.") with **LOTS OF PARAMETERS**

Here is an explanation of all available parameters to this function:

amount [expression](expressions.md#12 "Evaluates to a real number.") - this is the number of triggers associated (eg 'collect 500 food' would use 'amount 5000')
text string - this is the name of the [object](objects.md#8 "return a game object")ive as appears in the [object](objects.md#8 "return a game object")ive window
amount [expression](expressions.md#12 "Evaluates to a real number.") - this is the number to be inserted into the [object](objects.md#8 "return a game object")ive name
description string - this is the description of the task as appears in the [object](objects.md#8 "return a game object")ive menu
parent [constant](constants.md#10 "A constant is used to refer to a game enumeration.") **(optional)** - sets the parent [object](objects.md#8 "return a game object")ive
icon [constant](constants.md#10 "A constant is used to refer to a game enumeration.") **(optional)** - set the icon that appears in the [object](objects.md#8 "return a game object")ive menu
class [constant](constants.md#10 "A constant is used to refer to a game enumeration.") **(optional)** - sets the type of [object](objects.md#8 "return a game object")ive
start value [expression](expressions.md#12 "Evaluates to a real number.") **(optional)** - sets the inital amount of the [object](objects.md#8 "return a game object")ive
reward [expression](expressions.md#12 "Evaluates to a real number.") - sets the amount of tribute awarded for completing the [object](objects.md#8 "return a game object")ive
alignment [expression](expressions.md#12 "Evaluates to a real number.") - sets the alignment change for passing the goal
force open - forces the tribute window to open
dont show player **(optional)** - does not show the [object](objects.md#8 "return a game object")ive in the menu with [object](objects.md#8 "return a game object") - some [object](objects.md#8 "return a game object")ives require an [object](objects.md#8 "return a game object") (town) to act on. pass it in here.

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD with amount 5000 text "BW2T_SCRIPT_01FINAL_OBJECTIVE_ELOI_10" amount 5000 description "BW2T_SCRIPT_01FINAL_OBJECTIVE_ELOI_10" parent TRIBUTE_OBJECTIVE_COLLECT_FOOD icon TRIBUTE_OBJECTIVE_ICON_OBJECTIVE_L1_FOLLOWCREATURE class TRIBUTE_OBJECTIVE_CLASS_SKILL start value 200 reward 250 force open dont show player`

<a name="3.12.6"></a>

#### <a name="3.12.6">3.12.6 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.") icon [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

set the icon for the [object](objects.md#8 "return a game object")ive

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD icon TRIBUTE_OBJECTIVE_ICON_OBJECTIVE_L3_WOODSTORAGEPIT`

<a name="3.12.7"></a>

#### <a name="3.12.7">3.12.7 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.") amount [expression](expressions.md#12 "Evaluates to a real number.")

sets an [object](objects.md#8 "return a game object")ive for a specific player

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD amount 10`

<a name="3.12.8"></a>

#### <a name="3.12.8">3.12.8 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.") parent [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the parent [object](objects.md#8 "return a game object")ive of an [object](objects.md#8 "return a game object")ive

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_BUILT_ABODE parent [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_BUILD_IMPRESSIVE_BUILDINGS`

<a name="3.12.9"></a>

#### <a name="3.12.9">3.12.9 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive text string opt_amount

sets the text for this [object](objects.md#8 "return a game object")ive

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD text "BW2T_SCRIPT_01FINAL_ADVISORS_ARRIVENEW_10"`

<a name="3.12.10"></a>

#### <a name="3.12.10">3.12.10 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive description string

sets the description for this [object](objects.md#8 "return a game object")ive

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD description "BW2T_SCRIPT_01FINAL_ADVISORS_ARRIVENEW_20"`

<a name="3.12.11"></a>

#### <a name="3.12.11">3.12.11 disable player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

disable this [object](objects.md#8 "return a game object")ive for the given player

`disable player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD`

<a name="3.12.12"></a>

#### <a name="3.12.12">3.12.12 reset player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

rset this [object](objects.md#8 "return a game object")ive

`reset player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD`

<a name="3.12.13"></a>

#### <a name="3.12.13">3.12.13 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") [object](objects.md#8 "return a game object")ive [constant](constants.md#10 "A constant is used to refer to a game enumeration.") value [expression](expressions.md#12 "Evaluates to a real number.")

Sets the current value of this [object](objects.md#8 "return a game object")ive. e.g if you set the current to 10, it makes it look like the player has done 10 of whatever [object](objects.md#8 "return a game object")ive)

`set player 0 [object](objects.md#8 "return a game object")ive TRIBUTE_OBJECTIVE_COLLECT_WOOD value 100`

<a name="3.13.1">

#### 3.13.1 enable_disable game can be lost

</a>

sets whether the player will lose when he has no towns and no villagers. This defaults to off, as there may be lands on which the player has neither of these (the tutorial land).

`enable game can be lost`

<a name="3.13.2">

#### 3.13.2 enable_disable global influence

</a>

sets whether the player has influence over the whole land or not.

`enable global influence`

<a name="3.13.3"></a>

#### <a name="3.13.3">3.13.3 set min height camera experssion focus</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the minimum height the camera can be above the land

`set min height camera experssion focus [expression](expressions.md#12 "Evaluates to a real number.")`

<a name="3.13.4">

#### 3.13.4 enable_disable text skip

</a>

set text skip

`disable text skip`

<a name="3.13.5">

#### 3.13.5 enable_disable villager interaction manager

</a>

set villager interaction manager

`enable villager interaction manager`

<a name="3.13.6">

#### 3.13.6 enable_disable can use destruction tool

</a>

sets whether the player can use the destruction tool

`disable can use destruction tool`

<a name="3.13.7">

#### 3.13.7 enable_disable tribute visual

</a>

sets whether gaining tribute displays visual and plays audio

`disable tribute visual`

<a name="3.13.8">

#### 3.13.8 enable_disable disciple placedown speech

</a>

sets whether placing a disciple triggers any speech

`disable disciple placedown speech`

<a name="3.13.9">

#### 3.13.9 enable_disable single active speech

</a>

sets whether advisors interupt each other. when this is disabled, advisors can talk at the same time as each other.

`disable single active speech`

<a name="3.13.10">

#### 3.13.10 force save load

</a>

quick saves the game then quick loads the game. Used to test the save load.

`force save load`

<a name="3.13.11">

#### 3.13.11 play credits

</a>

shows the end credits

`play credits`

<a name="3.13.12">

#### 3.13.12 force save goto menu

</a>

quick saves and then goes to the main menu. For use at the end of the game.

`force save goto menu`

<a name="3.13.13">

#### 3.13.13 enable_disable dialogue manager

</a>

Enables or disables the dialogue manager. This is the enemy generals and adviosrs commenting on your actions. Only disable works, as it is re-enabled on level change

`disable dialogue manager`

<a name="3.13.14">

#### 3.13.14 enable_disable heartbeat sound

</a>

sets whether the hearbeat audio is played

`disable heartbeat sound`

<a name="3.13.15"></a>

#### <a name="3.13.15">3.13.15 enable_disable</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") menu

enables the given menu, or disables the active menu

`enable SCRIPT_MENU_TYPE_PAUSE menu`

<a name="3.13.16">

#### 3.13.16 enable_disable pause menu in widescreen

</a>

enables or disables the pause menu being accessed in cutscenes

`enable pause menu in widescreen`

<a name="3.13.17"></a>

#### <a name="3.13.17">3.13.17 enable_disable interface action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

enable or disable the given interface action. Actions are listed in GameBalanceGeneral.h (MANACOST_BALANCE_TYPE)

`disable interface action MANACOST_BALANCE_TYPE_ENTERTIMECHANGE`

<a name="3.13.18">

#### 3.13.18 enable_disable creature icon visible

</a>

enables or disables the drawing of the creature icon

`disable creature icon visible`

<a name="3.13.19">

#### 3.13.19 enable_disable army flag in widescreen

</a>

enables or disables the drawing of army flags in widescreen

`disable army flag in widescreen`

<a name="3.13.20"></a>

#### <a name="3.13.20">3.13.20 enable_disable</a> [object](objects.md#8 "return a game object")ive list in widescreen

enables or disables the drawing of the [object](objects.md#8 "return a game object")ive list in widescreen

`disable [object](objects.md#8 "return a game object")ive list in widescreen`

<a name="3.13.21">

#### 3.13.21 enable_disable toolbar in cutscene

</a>

enables or disables the drawing of the toolbar in fullscreen cutscenes

`enable toolbar in cutscene`

<a name="3.13.22">

#### 3.13.22 enable_disable build out of town within influence

</a>

allows the player to build anywhere they have influence

`enable build out of town within influence`

See also:

*   [create influence at position radius expression](objects.md#8.8.2 "creates an influence at a position.")

<a name="3.13.23">

#### 3.13.23 enable_disable performance checking

</a>

starts or stops performance checking

`enable performance checking`

<a name="3.13.24">

#### 3.13.24 add performance stat called string

</a>

adds a perfomance stat

<a name="3.13.25"></a>

#### <a name="3.13.25">3.13.25 set persistent data</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

sets the value of persistent data, created by scripters. Hasn't been used in a long time. May not work.

`set persistent data PERSISTANT_VALUE_EXAMPLE to 10.67`

<a name="3.13.26">

#### 3.13.26 enable/disable influence

</a>

toggles the player influence being on

`disable influence`

<a name="3.13.27">

#### 3.13.27 enable/disable influence visual effect

</a>

toggles the player influence visual effect being on

`disable influence visual effect`

<a name="3.13.28">

#### 3.13.28 enable/disable blooming

</a>

toggles the blooming

`enable blooming`

<a name="3.13.29">

#### 3.13.29 exit game

</a>

exits the game, no save, do not pass go - no 200 pounds...

`exit game`

<a name="3.13.30">

#### 3.13.30 enable/disable help system

</a>

sets the help system on/off

`enable help system`

<a name="3.13.31"></a>

#### <a name="3.13.31">3.13.31 set interaction</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Allows the scripter to enable/disable certain features of the interface. This is most useful when the game is at the beginning.

`set interaction SCRIPT_INTERACTION_LEVEL_1`

<a name="3.13.32"></a>

#### <a name="3.13.32">3.13.32 set game speed to</a> [expression](expressions.md#12 "Evaluates to a real number.")

This function is useful for simualting slow motion in the game. Setting the game speed to a value 0.0->1.0 means a percentage of the normal game speed ie. 0.5=half game speed. setting the value to more than 1 is a multiple of the normal game speed. ie. 2=twice normal game speed.

`set game speed to 0.5`

See also:

*   begin game speed statements end game speed

<a name="3.13.33">

#### 3.13.33 Load Map "Filename"

</a>

Removes all the current map data, and then loads the map defined. All scripts are still held, but you are going to need to stop all scripts from the previous file which are running!

`load map "./Data/Scripts/Land2.txt"`

See also:

*   Stop All Scripts Exclusing

<a name="3.13.34">

#### 3.13.34 enable_disable loading screen

</a>

Enables/Disables the laoding screen, instead of engine draw

`enable load screen`

<a name="3.13.35"></a>

#### <a name="3.13.35">3.13.35 save game in slot</a> [expression](expressions.md#12 "Evaluates to a real number.")

Saves the game into a specific slot inside the citadel. No. is 14 reserved for on leaving a land for purposes of the saving design, using other numbers will override specific windows inside the citadel. Jeremy who wrote this advisors just to use no 14!

`save game in slot 14`

<a name="3.13.36"></a>

#### <a name="3.13.36">3.13.36 set fade red</a> [expression](expressions.md#12 "Evaluates to a real number.") green [expression](expressions.md#12 "Evaluates to a real number.") blue [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

Fades the screen in a given time to a given colour

`set fade red 255 green 255 blue 255 time 4`

<a name="3.13.37"></a>

#### <a name="3.13.37">3.13.37 set fade in time</a> [expression](expressions.md#12 "Evaluates to a real number.")

Fades the screen back in a given time

`set fade in time [expression](expressions.md#12 "Evaluates to a real number.")`

<a name="3.13.38">

#### 3.13.38 enable_disable leash draw

</a>

sets if the leash is drawn or not in a widescreen section

`enable leash draw`

<a name="3.13.39">

#### 3.13.39 enable_disable highlight draw

</a>

sets if the highlights (scrolls) are drawn or not in a widescreen section

`enable highlight draw`

<a name="3.13.40">

#### 3.13.40 enable_disable spell icon draw

</a>

sets whether the spell icons (icons in bottom right with their gestures) are drawn or not in a widescreen section

`enable spell icon draw`

<a name="3.13.41">

#### 3.13.41 enable/disable force flag draw

</a>

enables/disables flag drawing in widescreen

`disable force flag draw`

<a name="3.13.42">

#### 3.13.42 enable/disable force tooltip draw

</a>

enables/disables tooltips drawing in widescreen

`disable force tooltip draw`

<a name="3.13.43">

#### 3.13.43 enable_disable shadows

</a>

sets the game shadows on or off by passing a bool

`disable shadows`

<a name="3.13.44">

#### 3.13.44 enable/disable markers

</a>

turns the script markers on/off. used for debuging a script.

`enable markers`

<a name="3.13.45"></a>

#### <a name="3.13.45">3.13.45 set cameratool</a> [object](objects.md#8 "return a game object") to [object](objects.md#8 "return a game object")

sets the [object](objects.md#8 "return a game object") that the camera tool is looking at. Used for debuging.

`set cameratool [object](objects.md#8 "return a game object") to Sister`

<a name="3.13.46"></a>

#### <a name="3.13.46">3.13.46 increment tribute by</a> [expression](expressions.md#12 "Evaluates to a real number.")

gives the player the specified amount of reward

`increment tribute by 5`

<a name="3.13.47"></a>

#### <a name="3.13.47">3.13.47 decrement tribute by</a> [expression](expressions.md#12 "Evaluates to a real number.")

removes from the player the specified amount of reward

`decrement tribute by PunishAmount`

<a name="3.13.48">

#### 3.13.48 force auto save

</a>

forecs a quick save

`force auto save`

<a name="3.13.49">

#### 3.13.49 skip current cutscene

</a>

skips current cutscene if it is skipable

`skip current cutscene`

<a name="3.13.50">

#### 3.13.50 empty player hand

</a>

removes anything in the player hand from the hand

`empty player hand`

<a name="3.14.1">

#### 3.14.1 start dynamic music

</a>

starts the dynamic music system

`start dynamic music`

<a name="3.14.2">

#### 3.14.2 stop dynamic music

</a>

stops the dynamic music system

`stop dynamic music`

<a name="3.14.3"></a>

#### <a name="3.14.3">3.14.3 set dynamic music string loop</a> [expression](expressions.md#12 "Evaluates to a real number.") (urgent)

plays another section of the music, the specified number of times.

`set dynamic music "section_name" loop 2`

<a name="3.15.1">

#### 3.15.1 set research ARTEFACT available to RESEARCH_AVAILABILITY

</a>

sets whether or not the player can research something, as well as whether or not they have allready researched it.

`set research ARTEFACT_ABODE_NUMBER_ALTAR available to RESEARCH_AVAILABILITY_NOT_AVAILABLE`

<a name="3.15.2"></a>

#### <a name="3.15.2">3.15.2 enable_disable town</a> [object](objects.md#8 "return a game object") can be taken by force

sets whether a town can be taken by force

`disable town MyTown can be taken by force`

<a name="3.15.3"></a>

#### <a name="3.15.3">3.15.3 extend town</a> [object](objects.md#8 "return a game object") influence by [expression](expressions.md#12 "Evaluates to a real number.")

extends the towns influence ring by the given amount in meters. Reset when town changes hands.

`extend town MyTown influence by 10`

<a name="3.15.4"></a>

#### <a name="3.15.4">3.15.4 set town</a> [object](objects.md#8 "return a game object") maximum population to [expression](expressions.md#12 "Evaluates to a real number.")

caps the towns population

`set town L21_MongolCapital maximum population to 200`

<a name="3.15.5"></a>

#### <a name="3.15.5">3.15.5 build all town</a> [object](objects.md#8 "return a game object") buildings in group [expression](expressions.md#12 "Evaluates to a real number.")

Starts the building of all planned buildings in the group

`build all town MyTown buildings in group 1`

<a name="3.15.6"></a>

#### <a name="3.15.6">3.15.6 set</a> [object](objects.md#8 "return a game object") emergency for 20 seconds

This sends everyone scuttling into their homes, and then slams the town gates shut. They will stay there unntil the timer runs out.

`set JapaneseTown emergency for 20 seconds`

<a name="3.15.7"></a>

#### <a name="3.15.7">3.15.7 stop</a> [object](objects.md#8 "return a game object") emergency

If the given town is currently in the emergency state it will leave that state

`stop JapaneseTown emergency`

<a name="3.15.8"></a>

#### <a name="3.15.8">3.15.8 set town</a> [object](objects.md#8 "return a game object") desire for [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

sets a weight value for a given desire. Weights act as modifiers to the desire - they are not a final figure

`set town NorseTown desire for GET_WOOD to 0.2`

<a name="3.15.9"></a>

#### <a name="3.15.9">3.15.9 enable_disable town</a> [object](objects.md#8 "return a game object") job [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

enable/disable the allocation of the given job in a town

`disable town MyTown job VILLAGER_JOB_LUMBER_MILL_WORKER`

<a name="3.15.10">

#### 3.15.10 enable/disable personalisations

</a>

toggles whether or not the towns' personalisation managers are active

`disable personalisations`

<a name="3.15.11"></a>

#### <a name="3.15.11">3.15.11 enable_disable spell</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") in [object](objects.md#8 "return a game object")

sets the magic available within a town

`enable spell MIRACLE_TYPE_WATER in MyTown`

<a name="3.15.12"></a>

#### <a name="3.15.12">3.15.12 enable_disable town</a> [object](objects.md#8 "return a game object") desire speech

sets whether villagers speak their desires in a town

`enable town CrazyMeTown desire speech`

<a name="3.16.1"></a>

#### <a name="3.16.1">3.16.1 enable_disable build menu override (with</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration."))

Moves a building (ABODE_NUMBER) to the front of the build menu list

`enable build menu override with ABODE_NUMBER_OLD_PERSONS_HOME`

<a name="3.16.2"></a>

#### <a name="3.16.2">3.16.2 set toolbar menu to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Sets the current menu pane on the toolbar

`set toolbar menu to MENU_TOOLBAR_TRIBUTES`

<a name="3.16.3">

#### 3.16.3 enable_disable toolbar

</a>

Enables or disables the game toolbar

`disable toolbar`

<a name="3.16.4"></a>

#### <a name="3.16.4">3.16.4 enable_disable</a> [object](objects.md#8 "return a game object")ive window

Enables or disables the [object](objects.md#8 "return a game object")ives widnows. This will show or hide the [object](objects.md#8 "return a game object")ives window

`enable [object](objects.md#8 "return a game object")ive window`

<a name="3.16.5">

#### 3.16.5 enable_disable toolbar pause

</a>

Enables or disables the game toolbar pausing

`disable toolbar pause`

<a name="3.16.6">

#### 3.16.6 enable_disable toolbar locked

</a>

Enables or disables the game toolbar being locked

`disable toolbar locked`

<a name="3.16.7"></a>

#### <a name="3.16.7">3.16.7 highlight toolbar item</a> [expression](expressions.md#12 "Evaluates to a real number.")

Highlights the menu item you specify

`highlight toolbar item 1`

<a name="3.16.8">

#### 3.16.8 clear toolbar highlight

</a>

Clears a highlighted menu item

`clear toolbar highlight`

<a name="3.16.9"></a>

#### <a name="3.16.9">3.16.9 remove world icon</a> [expression](expressions.md#12 "Evaluates to a real number.")

Removes a world icon

`remove world icon 1`

<a name="3.16.10">

#### 3.16.10 enable_disable hand icon draw

</a>

enables or disables drawing of the hand icons

`disable hand icon draw`

<a name="3.16.11">

#### 3.16.11 enable_disable hand demo icon

</a>

Makes the hand icons mirror what the mouse is actually doing during a hand demo

`disable hand demo icon`

<a name="3.16.12">

#### 3.16.12 enable_disable hand text draw

</a>

enables or disables drawing of the hand text

`disable hand text draw`

<a name="3.16.13"></a>

#### <a name="3.16.13">3.16.13 set hand icon</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Sets the hand icon type

`set hand icon [constant](constants.md#10 "A constant is used to refer to a game enumeration.")`

<a name="3.16.14"></a>

#### <a name="3.16.14">3.16.14 set mouse position x</a> [expression](expressions.md#12 "Evaluates to a real number.") y [expression](expressions.md#12 "Evaluates to a real number.")

Sets the mouse position

`set mouse position x 100 y 100`

<a name="3.16.15"></a>

#### <a name="3.16.15">3.16.15 set hand height multiplier</a> [expression](expressions.md#12 "Evaluates to a real number.")

Sets how much the hand should raise when over [object](objects.md#8 "return a game object")s (0 - 1)

`set hand height multiplier [expression](expressions.md#12 "Evaluates to a real number.")`

<a name="3.16.16"></a>

#### <a name="3.16.16">3.16.16 set maximum hand distance to</a> [expression](expressions.md#12 "Evaluates to a real number.")

Sets the maximum distance the hand can travel from the camera (-1 to cancel limit)

`set maximum hand distance to 5`

<a name="3.16.17"></a>

#### <a name="3.16.17">3.16.17 set bindable hand icon</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") <with arrow="" <a="" href="constants.md#10" title="A constant is used to refer to a game enumeration." class="cross">constant></with>

Sets the hand icon type - based on key bindings. This will work on the keyboard too! With optional arrow

`set bindable hand icon BINDABLE_ACTION_TYPE_MOVE with arrow ARROW_TYPE_NONE`

<a name="3.16.18">

#### 3.16.18 set hand icon text string

</a>

Sets the hand icon type - based on key bindings. This will work on the keyboard too!

`set hand icon text "BW2T_SCRIPT_01FINAL_OBJECTIVE_ELOI_50"`

<a name="3.16.19"></a>

#### <a name="3.16.19">3.16.19 set toolbar state to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets whether the toolbar is currently up or not

`set toolbar state to MENU_TOOLBAR_STATE_CLOSED`

<a name="3.16.20">

#### 3.16.20 enable_disable tribute menu scroll

</a>

enables or disables scrolling through the tribute menu

`disable tribute menu scroll`

<a name="3.16.21"></a>

#### <a name="3.16.21">3.16.21 set tribute menu selection to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

centeres the tribute menu on the given artefact

`set tribute menu selection to ARTEFACT_ABODE_NUMBER_ALTAR`

<a name="3.16.22"></a>

#### <a name="3.16.22">3.16.22 trigger floaty number FLOATY_ENUM at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") (importance [expression](expressions.md#12 "Evaluates to a real number.")) (icon FLOATY_ENUM) (value [expression](expressions.md#12 "Evaluates to a real number."))

triggers a floaty number at the given position

`trigger floaty number FLOATY_SKULL at SkullPos importance 2 icon FLOATY_HEART value 17`

<a name="3.16.23">

#### 3.16.23 enable_disable floaty number draw in widescreen

</a>

enable/disable the drawing of floaty numbers in widescreen

`enable floaty number draw in widescreen`

<a name="3.16.24"></a>

#### <a name="3.16.24">3.16.24 clear left_right clicked</a> [object](objects.md#8 "return a game object")

Clears the memory of the last interface clicked [object](objects.md#8 "return a game object").

`clear left clicked [object](objects.md#8 "return a game object")`

<a name="3.16.25">

#### 3.16.25 clear left_right clicked position

</a>

Clears the memory of the last interface clicked position.

`clear left clicked position`

See also:

*   position clicked radius expression

<a name="3.16.26">

#### 3.16.26 clear left_right button opt_double clicked

</a>

Clears the flag for mouse buttons pressed.

`clear left button <double> clicked</double>`

<a name="3.16.27">

#### 3.16.27 enable/disable force tooltip draw

</a>

enables/disables tooltips drawing in widescreen

`disable force tooltip draw`

<a name="3.16.28"></a>

#### <a name="3.16.28">3.16.28 enable_disable script controlled migration player</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets whether the TC sitt of a player shows the next town to take over, or the list

`enable script controlled migration player 0`

<a name="3.17.1"></a>

#### <a name="3.17.1">3.17.1 enable_disable</a> [object](objects.md#8 "return a game object") action availability [constant](constants.md#10 "A constant is used to refer to a game enumeration.") <with <a="" href="constants.md#10" title="A constant is used to refer to a game enumeration." class="cross">constant></with>

Sets the creature's ability to do an action (CreatureLearningMatrix.h - LEARN_ACTION) <with an="" <a="" href="objects.md#8" title="return a game object" class="cross">object type (LEARN_OBJECT)></with>

`enable MyCreature action availability LA_POO with LO_OPPONENT_BUILDING`

<a name="3.17.2"></a>

#### <a name="3.17.2">3.17.2 set</a> [object](objects.md#8 "return a game object") desire [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

Sets the current value of one of the creature's desires (between 0 and 1 where 1 is full)

```
set Creature desire CREATURE_DESIRE_HUNGER to 0.0
set Creature desire CREATURE_DESIRE_ANGER to 1.0
```

<a name="3.17.3"></a>

#### <a name="3.17.3">3.17.3 set</a> [object](objects.md#8 "return a game object") only desire [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Sets the creature desire to the only focus, until you turn it off.

`set MyCreature only desire CREATURE_DESIRE_ANGER`

<a name="3.17.4"></a>

#### <a name="3.17.4">3.17.4 set</a> [object](objects.md#8 "return a game object") disable only desire

Sets the only creature desire off, returning the creature back to normal behaviour.

`set MyCreature disable only desire`

<a name="3.17.5"></a>

#### <a name="3.17.5">3.17.5 set</a> [object](objects.md#8 "return a game object") desire [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

turn on or off a desire

`set Creature desire CREATURE_DESIRE_HUNGER 0 (TODO: enable) (still TODO?)`

<a name="3.17.6"></a>

#### <a name="3.17.6">3.17.6 set</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") development

Sets the creatures development (See creatureenum.h)

`set Creature DEVELOPMENT_PHASE_FIRST development`

<a name="3.17.7"></a>

#### <a name="3.17.7">3.17.7 set creature</a> [object](objects.md#8 "return a game object") role to [constant](constants.md#10 "A constant is used to refer to a game enumeration.") radius [expression](expressions.md#12 "Evaluates to a real number.")

sets a creatures role and forces them to carry it out in the given area

`set creature AztecCreature role to CR_SOLDIER radius 20`

<a name="3.17.8"></a>

#### <a name="3.17.8">3.17.8 set</a> [object](objects.md#8 "return a game object") magic properties [constant](constants.md#10 "A constant is used to refer to a game enumeration.") time [expression](expressions.md#12 "Evaluates to a real number.")

sets the [object](objects.md#8 "return a game object")s magic type and time duration (Spell dispensers)

`set MyDisp magic properties MAGIC_TYPE_FIREBALL time 2000`

<a name="3.17.9"></a>

#### <a name="3.17.9">3.17.9 enable_disable</a> [object](objects.md#8 "return a game object") attack own town

enables/disables a creatures ability to attack their own town

`enable MyCreature attack own town`

<a name="3.17.10"></a>

#### <a name="3.17.10">3.17.10 enable_disable right hand only for</a> [object](objects.md#8 "return a game object")

enables/disables a creatures only using it's right hand. This is restored when released from a script.

`enable right hand only for MyCreature`

<a name="3.17.11"></a>

#### <a name="3.17.11">3.17.11 enable_disable</a> [object](objects.md#8 "return a game object") can learn [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

enables/disables a creatures can learn a lesson type

`disable MyCreature can learn CREATURE_ACTION_KNOWN_ABOUT_BUILD`

<a name="3.17.12"></a>

#### <a name="3.17.12">3.17.12 enable_disable</a> [object](objects.md#8 "return a game object") auto scale opt_[expression](expressions.md#12 "Evaluates to a real number.")

enables/disables a creature auto scaling to a multiplier of the height of your creature

`enable MyCreature reaction`

<a name="3.17.13"></a>

#### <a name="3.17.13">3.17.13 set</a> [object](objects.md#8 "return a game object") all desire [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Enable/Disable all the desires

`set Creature all desire TRUE (TODO: enable) (still ToDo?)`

<a name="3.17.14"></a>

#### <a name="3.17.14">3.17.14 set</a> [object](objects.md#8 "return a game object") desire maximum [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

warning: must be used with knowledge of what desire maximums actually do see richard

`set Creature desire maximum CREATURE_DESIRE_HUNGER to 1.0`

<a name="3.17.15"></a>

#### <a name="3.17.15">3.17.15 set</a> [object](objects.md#8 "return a game object") priority [expression](expressions.md#12 "Evaluates to a real number.")

sets the priority of the current agenda (determines how easily what he is doing can be interrupted) 0 means very low priority (easily interruptable) 1 means max priority (not interruptable) This is useful for when you want to force a creature to do something, but also allow the thing you've forced him to do to be overrideable by other new things that might come along You are in effect setting the autonomy level of the creature: the lower the priority, the more autonomous (and the higher the priority, the less autonomous)

```
force Creature POINT_AT OtherCreature
set Creature priority 0.1
```

<a name="3.17.16"></a>

#### <a name="3.17.16">3.17.16 set player</a> [expression](expressions.md#12 "Evaluates to a real number.") creature to [object](objects.md#8 "return a game object")

assigns a particular creature to a player (used when choosing a creature for the first time).

`set player 1 creature to ChosenCreature (in ChooseYourCreature.txt)`

<a name="3.17.17"></a>

#### <a name="3.17.17">3.17.17 teach</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

teach creature a specific lesson first argument is type of action: INTELLECTUAL, PHYSICAL or MAGIC second argument is which action, eg: CREATURE_INTELLECTUAL_ACTION_KNOWN_ABOUT_FISH (in Enum.h) third argument is bool (true or false - whether he knows the lesson or unlearns the lesson) optional fourth parameter is how well he knows it (For magic you could say he has 90% knowledge of water)

```
teach GuardianCreature INTELLECTUAL CREATURE_INTELLECTUAL_ACTION_KNOWN_ABOUT_FISH SCRIPT_FALSE

teach Gorilla MAGICAL MAGIC_TYPE_FIREBALL SCRIPT_TRUE percentage 50
```

<a name="3.17.18"></a>

#### <a name="3.17.18">3.17.18 teach</a> [object](objects.md#8 "return a game object") all

teaches the creature every lesson

`teach GuardianCreature all`

<a name="3.17.19"></a>

#### <a name="3.17.19">3.17.19 teach</a> [object](objects.md#8 "return a game object") all excluding [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

teaches the creature every lesson exluding the type defined

`teach GuardianCreature all excluding CREATURE_ACTION_LEARNING_TYPE_MAGIC`

<a name="3.17.20"></a>

#### <a name="3.17.20">3.17.20 force</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [object](objects.md#8 "return a game object") with [object](objects.md#8 "return a game object")

forces the creature to stop what he is doing and do a particular action second argument is which action to perform, eg: POINT_AT (see CREATURE_ACTION in CreatureEnum.h) third argument is the [object](objects.md#8 "return a game object") the action is applied to fourth argument is the [object](objects.md#8 "return a game object") that is used for the action

`force GuardianCreature THROW_AT LostBrother with Stone`

<a name="3.17.21"></a>

#### <a name="3.17.21">3.17.21 force</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [object](objects.md#8 "return a game object") [object](objects.md#8 "return a game object")

forces the creature to stop what he is doing and do a particular action second argument is which action to perform, eg: POINT_AT (see CREATURE_ACTION in CreatureEnum.h)

`force GuardianCreature POINT_AT LostBrother`

<a name="3.17.22"></a>

#### <a name="3.17.22">3.17.22 force</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [object](objects.md#8 "return a game object") with [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

forces the creature to stop what he is doing and do a particular action second argument is which action to perform, eg: POINT_AT (see CREATURE_ACTION in CreatureEnum.h) third argument is the [object](objects.md#8 "return a game object") the action is applied to fourth argument is the position that is used for the action

`force GuardianCreature FOOTBALL Ball at {Goal}`

<a name="3.17.23"></a>

#### <a name="3.17.23">3.17.23 initialise number of</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") for [object](objects.md#8 "return a game object")

clears the number of times the creature has eaten anything / attacked anything / etc (see SCRIPT_PERFORMED_ACTION enum in CreatureEnum.h)

`initialise number of SCRIPT_PERFORMED_ACTION_EAT for MyCreature`

<a name="3.17.24"></a>

#### <a name="3.17.24">3.17.24 force action</a> [object](objects.md#8 "return a game object") finish

Force creature to stop whatever he is doing

`force GuardianCreature finish`

<a name="3.17.25"></a>

#### <a name="3.17.25">3.17.25 enable</a> [object](objects.md#8 "return a game object") confined to coord_expresison radius [expression](expressions.md#12 "Evaluates to a real number.")

Confines an [object](objects.md#8 "return a game object") at a position within a radius. This hasn't been used in a long time and may not work.

`enable Creature confined to {LostHouse} radius 30`

<a name="3.17.26"></a>

#### <a name="3.17.26">3.17.26 disable</a> [object](objects.md#8 "return a game object") confined

Stops an [object](objects.md#8 "return a game object") being confined. This hasn't been used in a long time and may not work.

`disable Creature confined`

<a name="3.17.27"></a>

#### <a name="3.17.27">3.17.27 clear dropped by</a> [object](objects.md#8 "return a game object")

clears the last known [object](objects.md#8 "return a game object") dropped by the creature from its memory (used in CreatureSavingPeople.txt)

<a name="3.17.28"></a>

#### <a name="3.17.28">3.17.28 attach</a> [object](objects.md#8 "return a game object") leash to [object](objects.md#8 "return a game object")

attaches a creatures leash to the passed [object](objects.md#8 "return a game object")

`attach MyCreature leash to House`

<a name="3.17.29"></a>

#### <a name="3.17.29">3.17.29 attach</a> [object](objects.md#8 "return a game object") leash to hand

attaches a creatures leash to the hand

`attach MyCreature leash to hand`

<a name="3.17.30"></a>

#### <a name="3.17.30">3.17.30 enable/disable leash on</a> [object](objects.md#8 "return a game object")

sets if the creature pays attention to the leash

`enable/disable leash on Creature`

<a name="3.17.31"></a>

#### <a name="3.17.31">3.17.31 toggles player</a> [expression](expressions.md#12 "Evaluates to a real number.") leash

toggles the players leash on/off

`toggle player 1 leash`

<a name="3.17.32"></a>

#### <a name="3.17.32">3.17.32 detach</a> [object](objects.md#8 "return a game object") leash

detaches the [object](objects.md#8 "return a game object")s leash

`detach MyCreature leash`

<a name="3.17.33"></a>

#### <a name="3.17.33">3.17.33 load midi file string on</a> [object](objects.md#8 "return a game object")

loads a midi file in to the specified player

`load midi file "MyFile.mid" on MyPlayer`

<a name="3.17.34"></a>

#### <a name="3.17.34">3.17.34 add note</a> [expression](expressions.md#12 "Evaluates to a real number.") on [object](objects.md#8 "return a game object") using [object](objects.md#8 "return a game object") with sound string (anim string)

adds a note (0..127) on a game [object](objects.md#8 "return a game object") using the given player

`add note 16 on MyCow using MyPlayer with sound "Arse" anim "Moo"`

<a name="3.17.35"></a>

#### <a name="3.17.35">3.17.35 play midi</a> [object](objects.md#8 "return a game object")

triggers the midi player to play

`play midi MyMidi`

<a name="3.17.36"></a>

#### <a name="3.17.36">3.17.36 set</a> [object](objects.md#8 "return a game object") home position [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

sets the creatures home position

`set Creature home position {House}`

<a name="3.17.37">

#### 3.17.37 clear last gesture

</a>

clears the codes memory of what the last gesture drawn by a player was.

`clear last gesture`

<a name="3.17.38"></a>

#### <a name="3.17.38">3.17.38 set</a> [object](objects.md#8 "return a game object") name [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the creatures name

`set Creature name HELP_TEXT_CREATURE_NAME_01`

<a name="3.17.39"></a>

#### <a name="3.17.39">3.17.39 enable_disable</a> [object](objects.md#8 "return a game object") navigation

sets the creatures using navigation or not. Be careful this must be enabled back after widescreen.

`disable MyCreature Navigation`

<a name="3.17.40"></a>

#### <a name="3.17.40">3.17.40 disable</a> [object](objects.md#8 "return a game object") can drop

Stops an [object](objects.md#8 "return a game object") dropping what it is holding

`disable MyCreature can drop`

<a name="3.17.41"></a>

#### <a name="3.17.41">3.17.41 request creature move to position distance</a> [expression](expressions.md#12 "Evaluates to a real number.")

asks a creature to move to a position though may be overriden by more important tasks

`request creature MyCreature move to {MyPos} distance 5`

<a name="3.17.42"></a>

#### <a name="3.17.42">3.17.42 request creature play individual anim</a> [expression](expressions.md#12 "Evaluates to a real number.")

asks a creature plays an individual animation though may be overriden by more important tasks

`request creature MyCreature play individual anim "MyAnim"`

<a name="3.17.43">

#### 3.17.43 request creature play static anim string expresion seconds

</a>

asks a creature plays an static animation though may be overriden by more important tasks

`request creature MyCreature play static anim "MyAnim" 5 seconds`

<a name="3.17.44"></a>

#### <a name="3.17.44">3.17.44 request creature</a> [object](objects.md#8 "return a game object") action [constant](constants.md#10 "A constant is used to refer to a game enumeration.") [object](objects.md#8 "return a game object") [object](objects.md#8 "return a game object")

requests that a creature performs an action with two given [object](objects.md#8 "return a game object")s ([object](objects.md#8 "return a game object") to act on, [object](objects.md#8 "return a game object") to use)

`request creature MyCreature action CREATURE_ACTION ObjectToActOn ObjectToUse`

<a name="3.17.45"></a>

#### <a name="3.17.45">3.17.45 set creature</a> [object](objects.md#8 "return a game object") hair length expresion

sets the creatures hair length (with an optional time)

`set creature MyCreature hair length 1.0 time 3.0`

<a name="3.17.46"></a>

#### <a name="3.17.46">3.17.46 release creature</a> [object](objects.md#8 "return a game object") hair length

lets the game set the hair length instead of the script

`release creature MyCreature hair length time 3.0`

<a name="3.17.47"></a>

#### <a name="3.17.47">3.17.47 snap creature</a> [object](objects.md#8 "return a game object") focus to [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

forces the creature to look somwhere without any tweening. Used by PJ.

`snap creature RedHairyDude focus to {ThatFlowerOverThere}`

<a name="3.17.48"></a>

#### <a name="3.17.48">3.17.48 set creature</a> [object](objects.md#8 "return a game object") CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE [expression](expressions.md#12 "Evaluates to a real number.") opt_time

Sets the creatures transitional attribute type over time. All are from 0 to 1, except alignment, which is -1 to 1.
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_ALIGNMENT
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_FATNESS
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_STRENGTH
CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_SIZE

`set creature MyCreature CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE_ALIGNMENT -0.5 time 2`

See also:

*   [get creature object CREATURE_SCRIPT_TRANSITIONAL_ATTRIBUTE_TYPE](expressions.md#12.4.3 "current level of a transitional attribute")

<a name="3.17.49"></a>

#### <a name="3.17.49">3.17.49 enable_disable creature</a> [object](objects.md#8 "return a game object") flag visible

Makes all animations played by this creature flipped

`enable creature MyCreature flip animation`

<a name="3.17.50">

#### 3.17.50 enable_disable drawing all flags

</a>

Sets whether or not the creature and army flags should be drawn

`enable drawing of all flags`

<a name="3.17.51"></a>

#### <a name="3.17.51">3.17.51 enable_disable creature</a> [object](objects.md#8 "return a game object") flip animation

Makes all animations played by this creature flipped

`enable creature MyCreature flip animation`

<a name="3.17.52"></a>

#### <a name="3.17.52">3.17.52 enable_disable script creature</a> [object](objects.md#8 "return a game object") run

Makes the creature always run. Or at least always try to run (creature holding [object](objects.md#8 "return a game object")s won't run). Also, once the creature is released from script it will decide by itself)

`enable script creature MyCreatureInScript run`

<a name="3.17.53"></a>

#### <a name="3.17.53">3.17.53 set creature</a> [object](objects.md#8 "return a game object") walk override injured

Sets this creatures walk anim to injured. Remember to cancel the override once you're finished!

`set creature MyCreature walk override injured`

<a name="3.17.54"></a>

#### <a name="3.17.54">3.17.54 set creature</a> [object](objects.md#8 "return a game object") walk override sad

Sets this creatures walk anim to sad. Remember to cancel the override once you're finished!

`set creature MyCreature walk override sad`

<a name="3.17.55"></a>

#### <a name="3.17.55">3.17.55 set creature</a> [object](objects.md#8 "return a game object") walk override angry

Sets this creatures walk anim to angry. Remember to cancel the override once you're finished!

`set creature MyCreature walk override angry`

<a name="3.17.56"></a>

#### <a name="3.17.56">3.17.56 set creature</a> [object](objects.md#8 "return a game object") walk override scared

Sets this creatures walk anim to scared. Remember to cancel the override once you're finished!

`set creature MyCreature walk override scared`

<a name="3.17.57"></a>

#### <a name="3.17.57">3.17.57 cancel creature</a> [object](objects.md#8 "return a game object") walk override

Cancels any walk anim override aplied to the creature

`cancel creature MyCreature walk override`

<a name="3.17.58"></a>

#### <a name="3.17.58">3.17.58 set creatures</a> [object](objects.md#8 "return a game object") hapiness to maximum

Makes this creature happy

`set creatures [object](objects.md#8 "return a game object") hapiness to maximum`

<a name="3.17.59"></a>

#### <a name="3.17.59">3.17.59 set creature</a> [object](objects.md#8 "return a game object") script thought text text_string

turns the scripted thought tooltip on the creature on using the specified text string

`set creature [object](objects.md#8 "return a game object") script thought text "BW2T_SCRIPT_LAND15_CREATUREDREAMS_TOOLTIP_IAMONION"`

<a name="3.17.60"></a>

#### <a name="3.17.60">3.17.60 clear creature</a> [object](objects.md#8 "return a game object") script thought

turns the scripted thought tooltip on the creature off

`clear creature MyCreature script thought`

<a name="3.17.61"></a>

#### <a name="3.17.61">3.17.61 set creature</a> [object](objects.md#8 "return a game object") energy to [expression](expressions.md#12 "Evaluates to a real number.")

Sets the creatures energy

`set creature MyCreature energy to 0.1`

<a name="3.17.62"></a>

#### <a name="3.17.62">3.17.62 enable_disable script creature</a> [object](objects.md#8 "return a game object") interaction

enables the player to punish/reward the creature, even while they are in script.

`enable script creature MyCreatureInScript interaction`

<a name="3.17.63"></a>

#### <a name="3.17.63">3.17.63 ask creature</a> [object](objects.md#8 "return a game object") to leave scripted learning

Asks the creature to leave scripted learning mode

`ask creature MyCreature to leave scripted learning`

<a name="3.17.64"></a>

#### <a name="3.17.64">3.17.64 enable_disable tooltip on creature</a> [object](objects.md#8 "return a game object")

enables or disables tooltips on a script controlled creature

`disable tooltips on creature MyCreature`

<a name="3.17.65"></a>

#### <a name="3.17.65">3.17.65 play anim</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") on [object](objects.md#8 "return a game object") loop

Creature animations.

`play anim ANM_CRY on MyCreature loop 5`

<a name="3.17.66"></a>

#### <a name="3.17.66">3.17.66 load my_creature at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Loads your creature into the game at a specific position.

`load my_creature at {House}`

<a name="3.17.67">

#### 3.17.67 save my_creature

</a>

Saves the players creature

`save my_creature`

<a name="3.17.68"></a>

#### <a name="3.17.68">3.17.68 load creature string player</a> [expression](expressions.md#12 "Evaluates to a real number.") at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Loads a computer creature according to a file name for a player without creature into the game at a specific position.

`load creature CREATURE_TYPE_COW "vicious" player 3 at [House]`

<a name="3.18.1"></a>

#### <a name="3.18.1">3.18.1 add</a> [object](objects.md#8 "return a game object") to platoon [object](objects.md#8 "return a game object") attack list

Forces the given platoon to attack this [object](objects.md#8 "return a game object")

`add MyVillager to platoon MyPlatoon attack list`

<a name="3.18.2"></a>

#### <a name="3.18.2">3.18.2 remove</a> [object](objects.md#8 "return a game object") to platoon [object](objects.md#8 "return a game object") attack list

Removes this [object](objects.md#8 "return a game object") form the platoon attack list

`remove MyVillager to platoon MyPlatoon attack list`

<a name="3.18.3"></a>

#### <a name="3.18.3">3.18.3 add</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to waypoint list [object](objects.md#8 "return a game object")

add a position to a waypoint list

`add {MyPos} to waypoint list MyWaypoints`

<a name="3.18.4"></a>

#### <a name="3.18.4">3.18.4 move</a> [object](objects.md#8 "return a game object") along [object](objects.md#8 "return a game object") with patrol [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

moves an army along a waypoint list using the provided patrol type (WaypointRouteTraversalTypeEnum.h)

`move MyArmy along MyWaypoints with patrol WAYPOINTROUTE_TRAVERSAL_TYPE_CIRCULAR`

<a name="3.18.5"></a>

#### <a name="3.18.5">3.18.5</a> [object](objects.md#8 "return a game object") attack [object](objects.md#8 "return a game object") with severity [expression](expressions.md#12 "Evaluates to a real number.")

makes one [object](objects.md#8 "return a game object") attack another with a specified severity. If the second [object](objects.md#8 "return a game object") is a town, there is an optional takeover parameter.

`set MyArmy attack EnemyArmy with severity 1`

<a name="3.18.6"></a>

#### <a name="3.18.6">3.18.6</a> [object](objects.md#8 "return a game object") attack buildings near [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.")

makes an army/platoon attack buildings in the specified area

`set MyArmy attack buildings near {TheirTown} radius 50`

<a name="3.18.7"></a>

#### <a name="3.18.7">3.18.7 set</a> [object](objects.md#8 "return a game object") attack everything near [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.")

makes an army/platoon attack everything in the specified area

`set MyArmy attack everything near {TheirTown} radius 50`

<a name="3.18.8"></a>

#### <a name="3.18.8">3.18.8 merge platoon</a> [object](objects.md#8 "return a game object") into platoon [object](objects.md#8 "return a game object")

Merges the first platoon into the other. The first platoon will no longer be available.

`merge platoon NorseAxemen2 into platoon NorseAxemen1`

<a name="3.18.9"></a>

#### <a name="3.18.9">3.18.9 enable/disable platoon</a> [object](objects.md#8 "return a game object") merge

takes a platoon and enables/disables merging using that platoon

`disable platoon MyPlatoon merge`

<a name="3.18.10"></a>

#### <a name="3.18.10">3.18.10 enable/disable platoon</a> [object](objects.md#8 "return a game object") split

takes a platoon and enables/disables splitting using that platoon

`disable platoon MyPlatoon split`

<a name="3.18.11"></a>

#### <a name="3.18.11">3.18.11 enable/disable platoon</a> [object](objects.md#8 "return a game object") camp

takes a platoon and enables/disables it from going into the camp state

`disable platoon MyPlatoon camp`

<a name="3.18.12"></a>

#### <a name="3.18.12">3.18.12 thread platoon</a> [object](objects.md#8 "return a game object") to platoon [object](objects.md#8 "return a game object")

threads one platoon to another

`thread platoon Platoon1 to platoon PlatoonLeader`

<a name="3.18.13"></a>

#### <a name="3.18.13">3.18.13 remove platoon</a> [object](objects.md#8 "return a game object") from platoon [object](objects.md#8 "return a game object")

removes one platoon from another - (throw wobbler if given platoons not linked)

`remove platoon Platoon1 from platoon PlatoonLeader`

<a name="3.18.14"></a>

#### <a name="3.18.14">3.18.14 disband army</a> [object](objects.md#8 "return a game object")

disbands an army container and unthreads the platoons within

`disband army NorseArmy1`

<a name="3.18.15"></a>

#### <a name="3.18.15">3.18.15 disband a platoon</a> [object](objects.md#8 "return a game object")

disbands a platoon container and sends the villagers within back home

`disband platoon MyPlatoon`

<a name="3.18.16"></a>

#### <a name="3.18.16">3.18.16 set army</a> [object](objects.md#8 "return a game object") formation to formation_type_enum

takes an army container and changes the formation within the that specified by the given enum

`set army NorseArmy formation to FORMATION_TYPE_WEDGE`

<a name="3.18.17"></a>

#### <a name="3.18.17">3.18.17 set platoon</a> [object](objects.md#8 "return a game object") experience to [expression](expressions.md#12 "Evaluates to a real number.")

sets a platoons experience to a given value. This doesn't seem to work anymore. Use the following function instead.

`set platoon BigEvilPlatoon experience to 1.0`

<a name="3.18.18"></a>

#### <a name="3.18.18">3.18.18 increment platoon</a> [object](objects.md#8 "return a game object") experience

increments the platoons experience by one level

`increment platoon BigEvilPlatoon experience`

<a name="3.18.19">

#### 3.18.19 enable_disable town manager

</a>

enables or disables the Town's ability to control army ratios

`enable MyTown town manager`

<a name="3.18.20"></a>

#### <a name="3.18.20">3.18.20 set town</a> [object](objects.md#8 "return a game object") platoon type [constant](constants.md#10 "A constant is used to refer to a game enumeration.") at ratio [expression](expressions.md#12 "Evaluates to a real number.")

sets a towns conscript rate to a given value and troop type

`set town MyTown platoon type ARMY_UNIT_TYPE_MELEE at ratio 0.2`

<a name="3.18.21"></a>

#### <a name="3.18.21">3.18.21 set town</a> [object](objects.md#8 "return a game object") army type [constant](constants.md#10 "A constant is used to refer to a game enumeration.") platoon ratio on wall to [expression](expressions.md#12 "Evaluates to a real number.")

sets a town's percentage of ranged platoons on wall to value

`set town MyTown army type ARMY_UNIT_TYPE_RANGED_1 platoon ratio on wall to 0.5`

<a name="3.18.22">

#### 3.18.22 set platoon take over town

</a>

sets a platoon attempting to take over town by attacking town centre

`set platoon GreekPlatoon take over town NorseTown`

<a name="3.18.23"></a>

#### <a name="3.18.23">3.18.23 remove villager</a> [object](objects.md#8 "return a game object") from platoon

removes a villager from their platoon

`remove villager MyVillager from platoon`

<a name="3.18.24">

#### 3.18.24 add villager to platoon

</a>

Attempts to add a villager to a platoon

`add villager MyVillager to platoon MyPlatoon`

<a name="3.18.25"></a>

#### <a name="3.18.25">3.18.25 set platoon</a> [object](objects.md#8 "return a game object") formation to [expression](expressions.md#12 "Evaluates to a real number.") wide by [expression](expressions.md#12 "Evaluates to a real number.") deep

Creates a platoon formation by passing values for width and depth

`set platoon NorsePlatoon formation to 4 wide by 3 deep`

<a name="3.18.26"></a>

#### <a name="3.18.26">3.18.26 set platoon stat</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") of [object](objects.md#8 "return a game object") to [expression](expressions.md#12 "Evaluates to a real number.")

Sets the value of a platoons stat

`set platoon stat PLATOON_STAT_MOVE_TO_ATTACK_DIST of MyPlatoon to 1.0`

<a name="3.18.27"></a>

#### <a name="3.18.27">3.18.27 set platoon movement value</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") of [object](objects.md#8 "return a game object") to [expression](expressions.md#12 "Evaluates to a real number.")

Sets the value of a platoons movement stat

`set platoon movement value FORMATION_MOVEMENT_STAT_AGENT_SPEED_MAX of MyPlatoon to 1.0`

<a name="3.18.28"></a>

#### <a name="3.18.28">3.18.28 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to platoon action queue

adds an action to the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using EnemyMine to MyPlatoon action queue`

<a name="3.18.29"></a>

#### <a name="3.18.29">3.18.29 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to front of platoon action queue

adds an action to front of the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using EnemyMine to front of MyPlatoon action queue`

<a name="3.18.30"></a>

#### <a name="3.18.30">3.18.30 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to next in platoon action queue

adds an action to be done after current action to the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using EnemyMine to next in MyPlatoon action queue`

<a name="3.18.31"></a>

#### <a name="3.18.31">3.18.31 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to platoon action queue

adds an action to the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using {MyPos} to MyPlatoon action queue`

<a name="3.18.32"></a>

#### <a name="3.18.32">3.18.32 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to front of platoon action queue

adds an action to front of the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using {MyPos} to front of MyPlatoon action queue`

<a name="3.18.33"></a>

#### <a name="3.18.33">3.18.33 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to next in platoon action queue

adds an action to be done after current action to the given platoons action queue

`add action PLATOON_AGENDA_ACTION_MELEE_ATTACK_THING using {MyPos} next in platoon MyPlatoon action queue`

<a name="3.18.34">

#### 3.18.34 clear platoon action queue

</a>

clears the action queue of the given platoon

`clear MyPlatoon action queue`

<a name="3.18.35">

#### 3.18.35 remove current action from platoon action queue

</a>

Removes the current action from the given platoons action queue

`remove current action from MyPlatoon action queue`

<a name="3.18.36"></a>

#### <a name="3.18.36">3.18.36 remove action</a> [expression](expressions.md#12 "Evaluates to a real number.") from platoon action queue

removes a platoon action from the queue at the given index number

`remove action 4 from MyPlatoon action queue`

<a name="3.18.37"></a>

#### <a name="3.18.37">3.18.37 reset platoon</a> [object](objects.md#8 "return a game object") movement stats

resets a given platoons movement stats

`reset platoon Platoon1 movement stats`

<a name="3.18.38"></a>

#### <a name="3.18.38">3.18.38 force platoon</a> [object](objects.md#8 "return a game object") camp

forces a platoon into the camp state

`force platoon Platoon1 camp`

<a name="3.18.39"></a>

#### <a name="3.18.39">3.18.39 set town</a> [object](objects.md#8 "return a game object") siege weapon type [constant](constants.md#10 "A constant is used to refer to a game enumeration.") to [expression](expressions.md#12 "Evaluates to a real number.")

sets how many siege weapons a town should have as a minimum

`set town MyTown siege weapon type SIEGE_BALANCE_TYPE_CATAPULT to 2`

<a name="3.18.40"></a>

#### <a name="3.18.40">3.18.40 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using EnemyMine to siege weapon MySiegeWeapon action queue`

<a name="3.18.41"></a>

#### <a name="3.18.41">3.18.41 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to front of siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to front of the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using EnemyMine to front of siege weapon MySiegeWeapon action queue`

<a name="3.18.42"></a>

#### <a name="3.18.42">3.18.42 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [object](objects.md#8 "return a game object") to next in siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to be done after current action to the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using EnemyMine to next in siege weapon MySiegeWeapon action queue`

<a name="3.18.43"></a>

#### <a name="3.18.43">3.18.43 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using {MyPos} to siege weapon MySiegeWeapon action queue`

<a name="3.18.44"></a>

#### <a name="3.18.44">3.18.44 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to front of siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to front of the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using {MyPos} to front of siege weapon MySiegeWeapon action queue`

<a name="3.18.45"></a>

#### <a name="3.18.45">3.18.45 add action</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") using [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") to next in siege weapon [object](objects.md#8 "return a game object") action queue

adds an action to be done after current action to the given siege weapons action queue

`add action SIEGEWEAPON_AGENDA_ACTION_ATTACK_THING using {MyPos} next in platoon siege weapon MySiegeWeapon action queue`

<a name="3.18.46"></a>

#### <a name="3.18.46">3.18.46 clear siege weapon</a> [object](objects.md#8 "return a game object") action queue

clears the action queue of the given siege weapon

`clear siege weapon MySiegeWeapon action queue`

<a name="3.18.47"></a>

#### <a name="3.18.47">3.18.47 remove current action from siege weapon</a> [object](objects.md#8 "return a game object") action queue

Removes the current action from the given siege weapons action queue

`remove current action from siege weapon MySiegeWeapon action queue`

<a name="3.18.48"></a>

#### <a name="3.18.48">3.18.48 remove action</a> [expression](expressions.md#12 "Evaluates to a real number.") from siege weapon [object](objects.md#8 "return a game object") action queue

removes a siege weapon action from the queue at the given index number

`remove action 6 from siege weapon MySiegeWeapon action queue`

<a name="3.18.49">

#### 3.18.49 enable_disable platoon response to town attack

</a>

enables/disables a platoon responding to a attack on a specific town

`enable platoon MyPlatoon response to MyTown attack`

<a name="3.18.50">

#### 3.18.50 enable_disable platoon response to local platoon attack

</a>

enables/disables a platoon responding to a attack on local friendly platoons

`enable platoon MyPlatoon response to local platoon attack`

<a name="3.18.51"></a>

#### <a name="3.18.51">3.18.51 enable_disable platoon</a> [object](objects.md#8 "return a game object") respond to player army

enables/disables a platoon responding to nearby unfreindly units

`enable platoon MyPlatoon respond to player army`

<a name="3.18.52"></a>

#### <a name="3.18.52">3.18.52 enable_disable platoon</a> [object](objects.md#8 "return a game object") eating

enables/disables a platoon eating food

`enable platoon MyPlatoon eating`

<a name="3.18.53"></a>

#### <a name="3.18.53">3.18.53 set flock</a> [object](objects.md#8 "return a game object") to migration

causes a flock to look like a migration

`set flock MyFlock to migration`

<a name="3.18.54"></a>

#### <a name="3.18.54">3.18.54 town</a> [object](objects.md#8 "return a game object") capture all enemy towns

disbands all enemy platoons and causes all people to migrate to you

`town GreekTown capture all enemy towns`

<a name="3.18.55"></a>

#### <a name="3.18.55">3.18.55 enable_disable siege weapon</a> [object](objects.md#8 "return a game object") auto attack

auto attack

`enable siege weapon Catapult[2] auto attack`

<a name="3.18.56">

#### 3.18.56 enable_disable scripted platoon get on enemy wall

</a>

sets the platoon being able to get on an enemies walls

`enable scripted platoon get on enemy wall`

<a name="3.18.57"></a>

#### <a name="3.18.57">3.18.57 set initial level of player melee platoon to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the level of newly recruited player platoons

`set initial level of player melee platoon to ARMY_UNIT_TYPE_MELEE_3`

<a name="3.18.58"></a>

#### <a name="3.18.58">3.18.58 set initial level of player ranged platoon to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the level of newly recruited player platoons

`set initial level of player ranged platoon to ARMY_UNIT_TYPE_RANGED_5`

<a name="3.18.59"></a>

#### <a name="3.18.59">3.18.59 set initial level of player siege weapon to</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

sets the level of newly recruited player siege weapon

`set initial level of player siege weapon to SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_3`

<a name="3.18.60">

#### 3.18.60 enable_disable show army bubbles

</a>

sets whether the army bubbles are displayed

`disable show army bubbles`

<a name="3.18.61"></a>

#### <a name="3.18.61">3.18.61 set all platoon of town</a> [object](objects.md#8 "return a game object") to town [object](objects.md#8 "return a game object")

switches the ownership of all platoons belonging to one town to be owned by another town

`set all platoon of town BlueTown to town RedTown`

<a name="3.18.62">

#### 3.18.62 enable_disable show army set effect

</a>

sets whether the army placement effects are displayed

`disable show army set effect`

<a name="3.18.63"></a>

#### <a name="3.18.63">3.18.63 enable_disable platoon</a> [object](objects.md#8 "return a game object") can disband

sets whether the platoon can be disbanded by the player

`disable platoon TheLongNamedPlatoonOfDoom can disband`

<a name="3.18.64"></a>

#### <a name="3.18.64">3.18.64 enable_disable leashing on platoon</a> [object](objects.md#8 "return a game object")

enables or disables the ability to leash the given platoon

`disable leashing on platoon GhostLegion`

<a name="3.19.1"></a>

#### <a name="3.19.1">3.19.1 set</a> [object](objects.md#8 "return a game object") time to [expression](expressions.md#12 "Evaluates to a real number.") second[s]

This function sets the countdown time to the value, and the count up time to 0.

`set MyTimer time to 6 seconds`

<a name="3.20.1"></a>

#### <a name="3.20.1">3.20.1 set depth of field strength multiplier to</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the strength of the depth of field (0 is min. 1 is average. above 2 is silly.)

`set depth of field strength multiplier to 0.5`

See also:

*   [get depth of field strength multiplier](expressions.md#12.21.1 "gets the strength of the depth of field")

<a name="3.20.2"></a>

#### <a name="3.20.2">3.20.2 set depth of field distance multiplier to</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the distance of the depth of field (0 is min. 1 is average. above 2 is silly.)

`set depth of field distance multiplier to 0.5`

See also:

*   [get depth of field distance multiplier](expressions.md#12.21.2 "gets the distance of the depth of field")

<a name="3.21.1"></a>

#### <a name="3.21.1">3.21.1 disband</a> [object](objects.md#8 "return a game object")

Removes all [object](objects.md#8 "return a game object")s from the contaner, which if there are no references left to script things will release them into the game.

<a name="3.21.2"></a>

#### <a name="3.21.2">3.21.2 populate</a> [object](objects.md#8 "return a game object") with [expression](expressions.md#12 "Evaluates to a real number.") [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

Populates a container like a flock with a number of things.

`populate CattleFlock with 20 SCRIPT_OBJECT_TYPE_ANIMAL ANIMAL_INFO_COW`

<a name="3.21.3"></a>

#### <a name="3.21.3">3.21.3 set</a> [object](objects.md#8 "return a game object") properties inner [expression](expressions.md#12 "Evaluates to a real number.") outer [expression](expressions.md#12 "Evaluates to a real number.")

If an [object](objects.md#8 "return a game object") is a flock the properties are changed to the values defined, where the outer is the size of the area the flock occupies, and the inner is the radius of the whole area the flock can roam around relative to the flock position.

<a name="3.21.4"></a>

#### <a name="3.21.4">3.21.4 set flock</a> [object](objects.md#8 "return a game object") to [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") with radius [expression](expressions.md#12 "Evaluates to a real number.")

defines the bounds within which the flock can move

`set flock MyFlock to {MyFlockPos} with radius 100.5`

<a name="3.21.5"></a>

#### <a name="3.21.5">3.21.5 set flock</a> [object](objects.md#8 "return a game object") altitude to [expression](expressions.md#12 "Evaluates to a real number.")

defines the given flocks altitude

`set flock MyFlock altitude to 228.42`

<a name="3.21.6"></a>

#### <a name="3.21.6">3.21.6 nominate</a> [object](objects.md#8 "return a game object") as leader for flock [object](objects.md#8 "return a game object")

nominates a leader for the flock [object](objects.md#8 "return a game object")

`nominate MyLeader as leader for flock MyFlock`

<a name="3.21.7"></a>

#### <a name="3.21.7">3.21.7 add</a> [object](objects.md#8 "return a game object") to flock [object](objects.md#8 "return a game object")

adds an [object](objects.md#8 "return a game object") to a flock [object](objects.md#8 "return a game object")

`add MyCow to flock MyFlockOfCows`

<a name="3.22.1"></a>

#### <a name="3.22.1">3.22.1 set game time</a> [expression](expressions.md#12 "Evaluates to a real number.")

The visual time of day can be set, the value is 0->24\. Setting the game time to 21.99 sets the time to 9pm plus 99 percent of the hour. ie. 1% of an hour before 10pm

`set game time 21.99`

<a name="3.22.2"></a>

#### <a name="3.22.2">3.22.2 move game time</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

move the time of day in black and white over a period of time.

`move game time 21.99 time 3`

<a name="3.22.3">

#### 3.22.3 enable_disable game time

</a>

sets if the game visual time changes

`disable game time`

<a name="3.23.1"></a>

#### <a name="3.23.1">3.23.1 create reaction</a> [object](objects.md#8 "return a game object") [constant](constants.md#10 "A constant is used to refer to a game enumeration.")

creates a reaction centred around an [object](objects.md#8 "return a game object") which moves with the [object](objects.md#8 "return a game object") the reaction information is stored in the spreadsheet (Misc section) and the enum for which reaction to use is enum.h

`attach reaction ScaryCreature REACTION_FLEE_FROM_OBJECT`

<a name="3.23.2"></a>

#### <a name="3.23.2">3.23.2 detach reaction</a> [object](objects.md#8 "return a game object")

removes *every* reaction associated with this [object](objects.md#8 "return a game object")

`detach reaction ScaryCreature`

<a name="3.23.3"></a>

#### <a name="3.23.3">3.23.3 detach</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") reaction [object](objects.md#8 "return a game object")

removes all reactions of the type associated with this [object](objects.md#8 "return a game object")

`detach REACTION_FLEE_FROM_OBJECT reaction ScaryCreature`

<a name="3.24.1"></a>

#### <a name="3.24.1">3.24.1 run script</a> [identifier](README.md#17 "An identifier is an immediate value.")

runs a script, and does not return control to the script which calls this statement until the called script is finished.

`run script PiedPiper`

<a name="3.24.2"></a>

#### <a name="3.24.2">3.24.2 run background script</a> [identifier](README.md#17 "An identifier is an immediate value.")

Runs a script as a background task, and continues running the script which called it.

`run background script SingingStones`

<a name="3.24.3">

#### 3.24.3 Stop Script string

</a>

Stops the script running.

`stop script "LostBrother"`

<a name="3.24.4">

#### 3.24.4 Stop All Scripts Exclusing string

</a>

Stops all the scripts running excluding the list passed. The list is a list of scripts, and sub scripts. If you want to exclude a whole file, then see Stop All Script Files Exclusing. Stopping scripts just stops them, they can be run again as they will remain in memory.

`stop all scripts "ControlScriptLand1, ControlScriptLand2, ControlScriptLand3"`

See also:

*   [Stop All Scripts Exclusing Files string](#3.24.7 "Stops all the scripts except ones in the file list passed.")

<a name="3.24.5">

#### 3.24.5 Stop Scripts Files string

</a>

Stops all the scripts in the file list .

`stop script files "LostBrother.txt, PiedPiper.txt"`

<a name="3.24.6">

#### 3.24.6 Stop Scripts in File string excluding string

</a>

Stops all the scripts in the file list passed excluding the list passed.

`stop scripts in files "Missionaries.txt" excluding "CheckSailors"`

<a name="3.24.7">

#### 3.24.7 Stop All Scripts Exclusing Files string

</a>

Stops all the scripts except ones in the file list passed.

`stop all scripts excluding files "Control1.txt, Control2.txt"`

<a name="3.24.8">

#### 3.24.8 run map script line string

</a>

runs a map script line

`run map script line "CREATE_MOBILE_STATIC("2030,2354.30", 25, 10.324, 0.232123, 0.566464, 0,0006, 1,198000)"`

<a name="3.25.1"></a>

#### <a name="3.25.1">3.25.1</a> [wait until](#3.25.1 "Script will not continue until condition is successful.") [condition](conditions.md#6 "True or False")

Self-explainatory.

`[wait until](#3.25.1 "Script will not continue until condition is successful.") Sister clicked`

<a name="3.25.2"></a>

#### <a name="3.25.2">3.25.2 wait</a> [condition](conditions.md#6 "True or False")

Same as above but without need for the word until.

`wait 2 seconds`

<a name="3.26.1">

#### 3.26.1 start music string opt_fadetime opt_music_loop

</a>

Only one script tune can play at once, this function starts a script tune which has no 3d position in the world. You may specify an optional fade time and/or an optional loop. The loop can have a number or 'forever'

```
start music "MUSIC_TYPE_SCRIPT_LOST_BROTHER" with fadetime 3

start music "creaturefightmain_01" loop forever
```

<a name="3.26.2">

#### 3.26.2 stop music opt_fadetime

</a>

Stops the script music that is playing. NB. Only one tune can be played at one time.

`stop music with fadetime 3`

<a name="3.26.3"></a>

#### <a name="3.26.3">3.26.3 attach music string to</a> [object](objects.md#8 "return a game object") opt_range

Attaches a tune to a game [object](objects.md#8 "return a game object"), such that when the [object](objects.md#8 "return a game object") is near the camera the tune is played and can be heard in the 3d direction of the [object](objects.md#8 "return a game object").

`attach music "Tune" to PiedPiper range 100`

<a name="3.26.4"></a>

#### <a name="3.26.4">3.26.4 detach music from</a> [object](objects.md#8 "return a game object")

If an [object](objects.md#8 "return a game object") has music attached to it, this function stops the music from playing for the [object](objects.md#8 "return a game object").

`detach music from PiedPiper`

<a name="3.26.5"></a>

#### <a name="3.26.5">3.26.5 move music from</a> [object](objects.md#8 "return a game object") to [object](objects.md#8 "return a game object")

If an [object](objects.md#8 "return a game object") has music attached to it, it moves it to the another defined [object](objects.md#8 "return a game object")

`move music from Rock7 to Rock8`

<a name="3.26.6"></a>

#### <a name="3.26.6">3.26.6 enable_disable music on</a> [object](objects.md#8 "return a game object")

If an [object](objects.md#8 "return a game object") has music attached to it, it enables to music playing or sets the [object](objects.md#8 "return a game object") to not playing music but setting silence in the area.

`disable music on SingingStone1`

<a name="3.26.7"></a>

#### <a name="3.26.7">3.26.7 restart music on</a> [object](objects.md#8 "return a game object")

restarts the music on a game music thing.

`restart music on SingingStone1`

<a name="3.26.8"></a>

#### <a name="3.26.8">3.26.8 set</a> [object](objects.md#8 "return a game object") music position to [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

sets the [object](objects.md#8 "return a game object")s music play position to one different to the [object](objects.md#8 "return a game object") position.

`set LastRock music position to [Rock1]`

<a name="3.26.9">

#### 3.26.9 enable_disable alignment music

</a>

Sets a flag in the game to allow alignment music to play or not.

`disable alignment music`

<a name="3.26.10"></a>

#### <a name="3.26.10">3.26.10 set</a> [object](objects.md#8 "return a game object") atmos group [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.") opt_id

takes an [object](objects.md#8 "return a game object"), chooses the channel ID and how much time it takes to fade to the new channel

`set MyBigSkull atmos group 1 time 3 seconds`

<a name="3.26.11"></a>

#### <a name="3.26.11">3.26.11 set camera atmos group</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.") opt_id 0

takes the camera, chooses the channel ID and how much time it takes to fade to the new channel

`set camera atmos group 1 time 3 seconds id 0`

<a name="3.26.12">

#### 3.26.12 attach atmos string to camera opt_range opt_volume

</a>

attaches an atmospheric sound to the camera, with optional parameters for distance and volume

`attach atmos "SpookySounds" to camera volume 1`

<a name="3.26.13"></a>

#### <a name="3.26.13">3.26.13 attach atmos string to</a> [object](objects.md#8 "return a game object")

attaches an atmospheric sound to an [object](objects.md#8 "return a game object"), with an optional parameter for distance

`attach atmos "SpookySounds" to MyBigSkull range 100`

<a name="3.26.14"></a>

#### <a name="3.26.14">3.26.14 detach atmos from</a> [object](objects.md#8 "return a game object")

detaches an atmospheric sound from an [object](objects.md#8 "return a game object")

`detach atmos from MyBigSkull`

<a name="3.26.15">

#### 3.26.15 detach atmos from camera

</a>

detaches an atmospheric sound from the camera

`detach atmos from camera`

<a name="3.26.16">

#### 3.26.16 enable_disable atmos sound string fade

</a>

sets the fade on or off an atmos sound

`enable atmos sound "SpookySounds" fade`

<a name="3.26.17">

#### 3.26.17 enable_disable simulation sound opt_fadetime

</a>

sets simulation sound on/off

`enable simulation sound with fadetime 3`

<a name="3.26.18">

#### 3.26.18 enable_disable atmos sound

</a>

sets atmos sound on/off, but will not affect scripted atmos

`enable atmos sound`

<a name="3.26.19"></a>

#### <a name="3.26.19">3.26.19 set atmos volume</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the volume level of the atmos sound

`set atmos volume 0.3`

<a name="3.26.20"></a>

#### <a name="3.26.20">3.26.20 destroy mixer</a> [expression](expressions.md#12 "Evaluates to a real number.") opt_fadetime

destroys a script mixer

`destroy mixer 1 with fadetime 3`

<a name="3.26.21"></a>

#### <a name="3.26.21">3.26.21 set mixer</a> [expression](expressions.md#12 "Evaluates to a real number.") channel AUDIO_MIXER_CHANNEL to [expression](expressions.md#12 "Evaluates to a real number.") opt_fadetime

sets a mixer channel's gain

`set mixer MyMixer channel AUDIO_MIXER_CHANNEL_GLOBAL to 0.0 with fadetime 3`

<a name="3.26.22"></a>

#### <a name="3.26.22">3.26.22 set mixer</a> [expression](expressions.md#12 "Evaluates to a real number.") to string opt_fadetime

sets a mixer profile to a preset

`set mixer MyMixer to "CUTSCENE_A" with fadetime 3`

<a name="3.26.23"></a>

#### <a name="3.26.23">3.26.23 set auto mixer override on</a> [object](objects.md#8 "return a game object") channel [constant](constants.md#10 "A constant is used to refer to a game enumeration.") min [expression](expressions.md#12 "Evaluates to a real number.") max [expression](expressions.md#12 "Evaluates to a real number.")

sets auto mixer override on any one [object](objects.md#8 "return a game object"). Using it again switches what [object](objects.md#8 "return a game object") it is used on.

`set auto mixer override on BigThing channel AUDIO_MIXER_CHANNEL_SCRIPT_SFX min 10 max 80`

<a name="3.26.24">

#### 3.26.24 reset auto mixer override

</a>

resets the auto mixer override

`reset auto mixer override`

<a name="3.26.25">

#### 3.26.25 release loop

</a>

I have no idea what this does. I just hook up the script funcitons. No-one bothers to tell me what they're actually going to be used for. But I'm not bitter. No.

`release loop`

<a name="3.26.26">

#### 3.26.26 play string sound string opt_volume opt_loop opt_pitch

</a>

This function plays a sound effect not in 3d space, reference from the text database. Does not display text.

`play string sound "HELP_TEXT_LOST_BRO_1"`

<a name="3.26.27"></a>

#### <a name="3.26.27">3.26.27 play sound string at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") opt_volume opt_loop opt_pitch

This function plays a sound effect in 3d space, reference from the text database. Does not display text.

`play sound "HELP_TEXT_LOST_BRO_1" at {Brother} with volume 0.8 pitch 0.5`

<a name="3.26.28"></a>

#### <a name="3.26.28">3.26.28 play random sound from group string at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

This function plays a random sound effect in 3d space, reference from the text database. Does not display text.

`say random sound from group "HELP_TEXT_LOST" at {Brother} with volume 0.8`

<a name="3.26.29">

#### 3.26.29 stop sound string

</a>

This function stops a sound effect using text database reference or direct sound reference string.

`stop sound "LH_LOSTBROTHER_SAMPLE_BROTHER_HELP"`

<a name="3.26.30">

#### 3.26.30 release sound string

</a>

This function stops a sound effect using text database reference or direct sound reference string when it's loop is ended.

`release sound "MY_LOOPING_FIRE_SAMPLE_FOR_EXAMPLE!"`

<a name="3.26.31"></a>

#### <a name="3.26.31">3.26.31 attach opt_3d sound string to</a> [object](objects.md#8 "return a game object")

This function creates a 3d sound which triggers the sound effect when the player scrolls near the [object](objects.md#8 "return a game object"). The optional 3d parameter states if the sound should be played in 3d.

```
attach 3d sound "LH_LOSTBROTHER_SAMPLE_BROTHER_HELP" to Brother

			attach sound "LH_LOSTBROTHER_SAMPLE_BROTHER_HELP" to Brother with volume 0.4
```

<a name="3.26.32"></a>

#### <a name="3.26.32">3.26.32 detach sound string from</a> [object](objects.md#8 "return a game object")

This function romoves the above mentioned sound from the [object](objects.md#8 "return a game object").

`detach sound "LH_LOSTBROTHER_SAMPLE_BROTHER_HELP" from Brother`

<a name="3.27.1"></a>

#### <a name="3.27.1">3.27.1 set precipitation at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.") enable_disable rainfall enable_disable snowfall enable_disable overcast

sets the precipitation at a given position

`set precipitaion at {SnowPos} radius 10 disable rainfall enable snowfall disable overcast`

<a name="3.27.2"></a>

#### <a name="3.27.2">3.27.2 set</a> [object](objects.md#8 "return a game object") properties rainfall [expression](expressions.md#12 "Evaluates to a real number.") snowfall [expression](expressions.md#12 "Evaluates to a real number.") overcast speed [expression](expressions.md#12 "Evaluates to a real number.")

You are going to have to experiment with the results to be honest, but here is a guide: rainfall 0=no rain 1=rain snowfall 0=no snow 1=snow overcast (0->1 Visability)

`set Weather properties rainfall 1 snowfall 0 overcast 0.6`

<a name="3.27.3"></a>

#### <a name="3.27.3">3.27.3 set cloud</a> [object](objects.md#8 "return a game object") altitude [expression](expressions.md#12 "Evaluates to a real number.")

sets the altitude of the given weather [object](objects.md#8 "return a game object")

`set cloud MyRainyCloud altitude 55.7`

<a name="3.27.4"></a>

#### <a name="3.27.4">3.27.4 set cloud generation</a> [expression](expressions.md#12 "Evaluates to a real number.")

sets the speed at which clouds generate

`set cloud generation 3`

<a name="3.27.5"></a>

#### <a name="3.27.5">3.27.5 set cloud</a> [object](objects.md#8 "return a game object") points to [expression](expressions.md#12 "Evaluates to a real number.")

sets the number of points a cloud has - more points, bigger cloud

`set cloud MyCloud points to 4`

<a name="3.27.6"></a>

#### <a name="3.27.6">3.27.6 set cloud</a> [object](objects.md#8 "return a game object") size to x [expression](expressions.md#12 "Evaluates to a real number.") y [expression](expressions.md#12 "Evaluates to a real number.") z [expression](expressions.md#12 "Evaluates to a real number.")

sets the number of points a cloud has - more points, bigger cloud

`set cloud MyCloud size to x 3.2 y 2.8 z 7.1`

<a name="3.27.7"></a>

#### <a name="3.27.7">3.27.7 set lightning strike at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") from [object](objects.md#8 "return a game object")

creates a bolt of lightning that strikes at the given pos

`set lightning strike at {MyLightningPos} from MyWeatherObject`

<a name="3.27.8"></a>

#### <a name="3.27.8">3.27.8 set cloud for</a> [object](objects.md#8 "return a game object") above [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

sets a cloud above the given position

`set cloud for MyWeatherObject above {MyCloudPos}`

<a name="3.27.9"></a>

#### <a name="3.27.9">3.27.9 set sandstorm</a> [object](objects.md#8 "return a game object") position moving to position strength [expression](expressions.md#12 "Evaluates to a real number.") radius [expression](expressions.md#12 "Evaluates to a real number.")

sets the values for a sandstorm visual effect

`set sandstorm [object](objects.md#8 "return a game object") {SandStormPos} moving to {MoveToPos} strength 0.8 radius 20.8`

<a name="3.27.10"></a>

#### <a name="3.27.10">3.27.10 set cloud alignment to</a> [expression](expressions.md#12 "Evaluates to a real number.") at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") radius [expression](expressions.md#12 "Evaluates to a real number.")

changes the alignment of the clouds

`set cloud alignment to 1 at {GoodGuy} radius 20`

<a name="3.27.11"></a>

#### <a name="3.27.11">3.27.11 enable/disable</a> [object](objects.md#8 "return a game object") affected by wind

sets [object](objects.md#8 "return a game object") to be moved by the wind or not in the game. Note that strong winds move storms etc pretty fast so be careful!

`enable Storm affected by wind`

<a name="3.29.1">

### 3.29.1 If Block

</a>

A check of the [condition](conditions.md#6 "True or False") of something, which if succeeds processes a number of [statements](#3 "A statement is a command which causes something to happen.").

<a name="3.29.1.1"></a>

#### <a name="3.29.1.1">3.29.1.1 if</a> [condition](conditions.md#6 "True or False") [statements](#3 "A statement is a command which causes something to happen.")

A check of the [condition](conditions.md#6 "True or False") of something, which upon success processes a number of [statements](#3 "A statement is a command which causes something to happen.").

<a name="3.29.1.2"></a>

#### <a name="3.29.1.2">3.29.1.2 elsif</a> [condition](conditions.md#6 "True or False") [statements](#3 "A statement is a command which causes something to happen.")

when the above if/elsif statement fails this acts as another if, which if successful runs the following [statements](#3 "A statement is a command which causes something to happen.").

<a name="3.29.1.3"></a>

#### <a name="3.29.1.3">3.29.1.3 else</a> [statements](#3 "A statement is a command which causes something to happen.")

when the proceeding if/elsif fails the code in this block is run.

<a name="3.29.1.4">

#### 3.29.1.4 end if

</a>

All [if block](#3.29.1 "Conditional if.")s must end in an end if. This is so the parser can work more easily.

<a name="3.29.2"></a>

#### <a name="3.29.2">3.29.2 while</a> [condition](conditions.md#6 "True or False") [statements](#3 "A statement is a command which causes something to happen.") end while

this block is used to run code while a [condition](conditions.md#6 "True or False") is still true.

<a name="3.29.3"></a>

#### <a name="3.29.3">3.29.3 force while</a> [condition](conditions.md#6 "True or False") [statements](#3 "A statement is a command which causes something to happen.") end while

this block is used to run code while a [condition](conditions.md#6 "True or False") is still true. Unlike a normal while, there is no waiting. Also, [exception](exceptions.md#4 "Special cases to break out of a code block")s will not work within a force while (e.g until)

<a name="3.29.4"></a>

#### <a name="3.29.4">3.29.4 begin loop</a> [statements](#3 "A statement is a command which causes something to happen.") end loop

Statements in this block loop forever unless an [exception](exceptions.md#4 "Special cases to break out of a code block") is true.

See also:

*   [Exceptions](exceptions.md#4 "Special cases to break out of a code block")

<a name="3.29.5"></a>

#### <a name="3.29.5">3.29.5 begin cinema</a> [statements](#3 "A statement is a command which causes something to happen.") end cinema

Takes control of the camera, the dialogue, the game speed feature, and sets the screen to widescreen mode. Statements after this will not be run until control is successful. At the end of a cinema sequence the game is returned to non widescreen, the spirits are sent home, and the game speed is set to normal. If you don't want the spririts to go home and wish to keep dialogue control then you can do "end cinema with spirits".

```
begin cinema

some code...

end cinema
```

<a name="3.29.6"></a>

#### <a name="3.29.6">3.29.6 begin cinema</a> [statements](#3 "A statement is a command which causes something to happen.") end cinema

Takes control of the camera, the dialogue, the game speed feature, and sets the screen to widescreen mode. Statements after this will not be run until control is successful. At the end of a cinema sequence the game is returned to non widescreen, the spirits are sent home, and the game speed is set to normal. If you don't want the spririts to go home and wish to keep dialogue control then you can do "end cinema with spirits".

```
begin cinema

some code...

end cinema
```

<a name="3.29.7"></a>

#### <a name="3.29.7">3.29.7 begin full screen cinema</a> [statements](#3 "A statement is a command which causes something to happen.") end cinema

Takes control of the camera, the dialogue, the game speed feature. Statements after this will not be run until control is successful. At the end of a cinema sequence the spirits are sent home, and the game speed is set to normal. If you don't want the spririts to go home and wish to keep dialogue control then you can do "end cinema with spirits".

```
begin cinema

some code...

end cinema
```

<a name="3.29.8"></a>

#### <a name="3.29.8">3.29.8 begin interactive camera</a> [statements](#3 "A statement is a command which causes something to happen.") end interactive camera

Takes control of the camera, the dialogue, the game speed feature. Statements after this will not be run until control is successful. At the end of a camera sequence, the spirits are sent home, and the game speed is set to normal. If you don't want the spirits to go home and wish to keep dialogue control then you can do "end camera with spirits".

```
begin interactive camera

some code...

end interactive camera
```

<a name="3.29.9"></a>

#### <a name="3.29.9">3.29.9 begin dialogue</a> [statements](#3 "A statement is a command which causes something to happen.") end dialogue

To send text to the game or control the spirits, you must be in this block. Statements after this will not be run until control is successful. At the end of a dialogue sequence the the spirits are sent home.

<a name="3.29.10"></a>

#### <a name="3.29.10">3.29.10 begin known dialogue</a> [statements](#3 "A statement is a command which causes something to happen.") end dialogue

Occasionally you need to be able to be in a function which is already in Dialogue control from the calling function Using this block means you can use the dialogue control you already have.

<a name="3.29.11"></a>

#### <a name="3.29.11">3.29.11 begin known cinema</a> [statements](#3 "A statement is a command which causes something to happen.") end dialogue

Occasionally you need to be able to be in a function which is already in Dialogue control from the calling function Using this block means you can use the cinema control you already have.

<a name="3.30.1">

### 3.30.1 Spirit Control

</a>

You can cause the good and evil help spirits to do various things from within the challenge language.

<a name="3.30.1.1"></a>

#### <a name="3.30.1.1">3.30.1.1 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") point to [object](objects.md#8 "return a game object")

When dealing with spirits, it is often not desirable to create [object](objects.md#8 "return a game object")s to refer to them. You can refer to a spirit directly by using its [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit"). This command makes the specified spirit appear, if necessary, and then point to the target [object](objects.md#8 "return a game object").

`make good spirit point to Sister`

<a name="3.30.1.2"></a>

#### <a name="3.30.1.2">3.30.1.2 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") point at position

Occasionally you might want to make an [object](objects.md#8 "return a game object") (usually a help spirit) point to another [object](objects.md#8 "return a game object"). You can do this via the make command.

`make good spirit point at {Sister}`

<a name="3.30.1.3"></a>

#### <a name="3.30.1.3">3.30.1.3 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") play across [expression](expressions.md#12 "Evaluates to a real number.") down [expression](expressions.md#12 "Evaluates to a real number.") [constant](constants.md#10 "A constant is used to refer to a game enumeration.") expression

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will play an animation at the set position, (percentage x across the screen, and percentage y down the screen) at an optionally defined speed percentage

`make good spirit play across 0.4 down 0.8 ANIM_HOVER expression`

<a name="3.30.1.4"></a>

#### <a name="3.30.1.4">3.30.1.4 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") play [constant](constants.md#10 "A constant is used to refer to a game enumeration.") at [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") in world expression

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will play an animation at the set position, (in the world) at an optionally defined speed percentage

`make good spirit play ANIM_BLOW at {MyPos} in world expression`

<a name="3.30.1.5"></a>

#### <a name="3.30.1.5">3.30.1.5 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") cling across [expression](expressions.md#12 "Evaluates to a real number.") down [expression](expressions.md#12 "Evaluates to a real number.")

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will cling to the edge of the screen, closest to the (percentage x across the screen, and percentage y down the screen) position given. This works when they have not been ejected, so they can cling from the start. To stop them clinging either eject or send home. They can still look around and point while clinging.

`make good spirit cling across 0.5 down 1`

<a name="3.30.1.6"></a>

#### <a name="3.30.1.6">3.30.1.6 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") fly across [expression](expressions.md#12 "Evaluates to a real number.") down [expression](expressions.md#12 "Evaluates to a real number.")

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will fly to the position on the screen, (percentage x across the screen, and percentage y down the screen)

`make good spirit fly across 0.5 down 1`

<a name="3.30.1.7"></a>

#### <a name="3.30.1.7">3.30.1.7 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") fly across [expression](expressions.md#12 "Evaluates to a real number.") down [expression](expressions.md#12 "Evaluates to a real number.")

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will fly to the position on the screen, (percentage x across the screen, and percentage y down the screen)

`make good spirit fly across 0.5 down 1`

<a name="3.30.1.8"></a>

#### <a name="3.30.1.8">3.30.1.8 stop</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") pointing

Stops the spirit pointing, irrespective of if it is.

`stop good spirit pointing`

<a name="3.30.1.9"></a>

#### <a name="3.30.1.9">3.30.1.9 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") look at position

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will look to the set position.

`make good spirit look at {12, 34, 54}`

<a name="3.30.1.10"></a>

#### <a name="3.30.1.10">3.30.1.10 make</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") look at [object](objects.md#8 "return a game object")

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will look at the target [object](objects.md#8 "return a game object").

`make good spirit look at Sister`

<a name="3.30.1.11"></a>

#### <a name="3.30.1.11">3.30.1.11 stop</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") looking

Stops the spirit looking, irrespective of if it is.

`stop good spirit looking`

<a name="3.30.1.12"></a>

#### <a name="3.30.1.12">3.30.1.12 eject</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit")

If the script is a help script the spirit will appear in front of the player in a puff of smoke, otherwise the spirit will zoom around on to the screen.

`eject evil spirit`

<a name="3.30.1.13"></a>

#### <a name="3.30.1.13">3.30.1.13 appear</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit")

Make the [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") Appear in front of the player in a puff of smoke. Irrespective of the script type.

`make evil spirit appear`

<a name="3.30.1.14"></a>

#### <a name="3.30.1.14">3.30.1.14 disappear</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit")

Make the [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") disappear in front of the player in a puff of smoke. Irrespective of the script type.

`make evil spirit disappear`

<a name="3.30.1.15"></a>

#### <a name="3.30.1.15">3.30.1.15 send</a> [spirit_type](spirit_type.md#13 "whether this is the evil spirit or good spirit") home

The specified [spirit type](spirit_type.md#13 "whether this is the evil spirit or good spirit") will move off the screen.

`send random spirit home`

<a name="3.30.2">

### 3.30.2 Text and Speech

</a>

Text within the game may or may not have sound attached to it, however this is no concern to the scripter. Some text functions can end with (with interaction, which forces the player to have to click through the text, without interaction which means no amount of clicking will skip the text, or nothing which will mean that text will end when read, or skipped by clicking.

<a name="3.30.2.1"></a>

#### <a name="3.30.2.1">3.30.2.1 request dialogue</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") (DIALOG_EVENT_TYPE in DialogManagerEnum.h) opt_with_[constant](constants.md#10 "A constant is used to refer to a game enumeration.") (DIALOG_MAGNITUDE)

Request that the relevant dialogue gets said

`request dialogue EVENT_TYPE_TAKE_TOWN with MAGNITUDE_HI`

<a name="3.30.2.2">

#### 3.30.2.2 say string

</a>

When developing a script it is useful to have a text out function to debug or put in temp text until the script has been scripted.

```
say "This is a temp string"

say single line "HELP_TEXT_BLAH" by MyVillager

say single line "HELP_TEXT_BLAH" with interaction by MyVillager
```

<a name="3.30.2.3">

#### 3.30.2.3 say database string

</a>

Say a string from the database id.

```
say database id MyId

say single line database id 201

say single line database id 233 by MyVillager
```

<a name="3.30.2.4">

#### 3.30.2.4 say random from group string

</a>

Say a random string from the group.

```
say random from group "HELP_TEXT"

say random single line from group "HELP_TEXT" by MyVillager

say random single line from group "HELP_TEXT" with interaction by MyVillager
```

<a name="3.30.2.5"></a>

#### <a name="3.30.2.5">3.30.2.5 say opt_single line</a> [expression](expressions.md#12 "Evaluates to a real number.") from group string interaction opt_narrator

say the given line from the text group

`say line 4 from group GroupID`

<a name="3.30.2.6"></a>

#### <a name="3.30.2.6">3.30.2.6 say string with number</a> [expression](expressions.md#12 "Evaluates to a real number.")

When developing a script it is useful to have a text out function to debug or put in temp text until the script has been scripted. This version places a value at the
$d-decimal $p-percentage (Gets the number follwed by a '%' drawn

`say "This is $p of a temp string" with number 40`

<a name="3.30.2.7"></a>

#### <a name="3.30.2.7">3.30.2.7 say</a> [constant](constants.md#10 "A constant is used to refer to a game enumeration.") with number [expression](expressions.md#12 "Evaluates to a real number.")

This displays text predefined which may have sound attached to it which will be automatically played. This version places a value at the
$d-decimal $p-percentage (Gets the number follwed by a '%' drawn

`say HELP_TEXT_WITH_NUMBER_SPECIAL with number 30`

<a name="3.30.2.8">

#### 3.30.2.8 clear dialogue

</a>

Clears the text in the dialogue window (Dark Bar)

`clear dialogue`

<a name="3.30.2.9">

#### 3.30.2.9 close dialogue

</a>

Closes the dialogue window (Dark Bar)

`close dialogue`

<a name="3.30.2.10">

#### 3.30.2.10 close dialogue

</a>

Closes the dialogue window (Dark Bar)

`close dialogue`

<a name="3.31.1">

#### 3.31.1 set camera zones to "filename"

</a>

Sets the camera zones to the one defined in a file

<a name="3.31.2">

#### 3.31.2 store camera details

</a>

stores the camera details, (foc, pos)

`store camera details`

<a name="3.31.3">

#### 3.31.3 restore camera details

</a>

restores the camera details, (foc, pos) from the last ones sent by the store function

`restore camera details`

<a name="3.31.4"></a>

#### <a name="3.31.4">3.31.4 reset camera lens time</a> [expression](expressions.md#12 "Evaluates to a real number.")

resets the camera lens.

`reset camera lens time 1`

<a name="3.31.5"></a>

#### <a name="3.31.5">3.31.5 enable_disable clipping distance <</a>[expression](expressions.md#12 "Evaluates to a real number.")>

sets the clipping distance

`disable clipping distance`

<a name="3.31.6"></a>

#### <a name="3.31.6">3.31.6 set camera lens</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera lens in an optional amount of time.

`set camera lens 132.1 time 5`

<a name="3.31.7"></a>

#### <a name="3.31.7">3.31.7 move camera position to position time</a> [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera position smoothly from where it is to the stated position in an amount of time.

`move camera position to [LostBrother] time 5`

<a name="3.31.8">

#### 3.31.8 set camera position to position

</a>

Sets the camera position instantly.

`set camera position to [LostBrother]`

<a name="3.31.9"></a>

#### <a name="3.31.9">3.31.9 move camera focus to position time</a> [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera focus smoothly from where it is to the stated position in an amount of time.

`move camera focus to [LostBrother] time 5`

<a name="3.31.10">

#### 3.31.10 set camera focus to position

</a>

Sets the camera focus instantly.

`set camera focus to [LostBrother]`

<a name="3.31.11"></a>

#### <a name="3.31.11">3.31.11 move camera to face</a> [object](objects.md#8 "return a game object") distance [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

moves the camera to face an [object](objects.md#8 "return a game object"), with a distance from the [object](objects.md#8 "return a game object") and a time to get to the said position.

`move camera to face LostBrother distance 10 time 5`

<a name="3.31.12"></a>

#### <a name="3.31.12">3.31.12 set camera to face</a> [object](objects.md#8 "return a game object") distance [expression](expressions.md#12 "Evaluates to a real number.")

sets the camera to face an [object](objects.md#8 "return a game object"), with a distance from the [object](objects.md#8 "return a game object").

`set camera to face LostBrother distance 10`

<a name="3.31.13"></a>

#### <a name="3.31.13">3.31.13 set camera focus follow</a> [object](objects.md#8 "return a game object") opt_offset

This sets the camera focus to follow on an [object](objects.md#8 "return a game object") with an optional offset.

```
set camera focus follow LostBrother offset {10,0,10}

set camera focus follow LostBrother offset {10,0,10}
```

<a name="3.31.14"></a>

#### <a name="3.31.14">3.31.14 set camera position follow</a> [object](objects.md#8 "return a game object") opt_offset

This sets the camera position to follow an [object](objects.md#8 "return a game object") with an optional offset.

```
set camera position follow LostBrother offset {10,0,10}

set camera position follow LostBrother offset {10,0,10}
```

<a name="3.31.15"></a>

#### <a name="3.31.15">3.31.15 move follow camera position offset</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.")

This moves the follow cameras offset position over time.

`move follow camera position offset {MyPos} time 5`

<a name="3.31.16"></a>

#### <a name="3.31.16">3.31.16 move follow camera foucs offset</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.")

This moves the follow cameras offset focus over time.

`move follow camera focus offset {MyPos} time 5`

<a name="3.31.17"></a>

#### <a name="3.31.17">3.31.17 move camera focus follow</a> [object](objects.md#8 "return a game object")

This moves the camera focus to follow on an [object](objects.md#8 "return a game object").

`move camera focus follow LostBrother`

<a name="3.31.18"></a>

#### <a name="3.31.18">3.31.18 move camera position follow</a> [object](objects.md#8 "return a game object")

This moves the camera position to follow an [object](objects.md#8 "return a game object") with the current heading.

`move camera position follow LostBrother`

<a name="3.31.19">

#### 3.31.19 set camera to camera_enum

</a>

Instantly sets the camera to a camera position and focus defined in the camera editor.

`set camera to ZOOM_TO_CREATURE TRACK01`

<a name="3.31.20"></a>

#### <a name="3.31.20">3.31.20 move camera to camera_enum time</a> [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera to a camera position and focus defined in the camera editor in a define time.

`move camera to ZOOM_TO_CREATURE TRACK01`

<a name="3.31.21">

#### 3.31.21 camera path camera_enum

</a>

In the camera editor you can create camera paths. An enum in cameraposenum.h

`camera path ZOOM_TO_CREATURE TRACK01`

<a name="3.31.22"></a>

#### <a name="3.31.22">3.31.22 enable/disable camera fixed rotation at</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

DANGEROUS - fixes the camera roration point. Used in learning script

`enable fixed camera rotation at {DanceGroup}`

<a name="3.31.23">

#### 3.31.23 start hand demo string

</a>

play hand demo of a prerecorded hand movement

`start hand demo "HandLand1"`

<a name="3.31.24"></a>

#### <a name="3.31.24">3.31.24 set camera position</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") focus [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") lens [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera position, focus and lens instantly.

`set camera position {LostBrother} focus {LostSis} lens 132.2`

<a name="3.31.25"></a>

#### <a name="3.31.25">3.31.25 move camera position</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") focus [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") lens [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera position, focus and lens in a given time.

`move camera position {LostBrother} focus {LostSis} lens 132.2 time 4`

<a name="3.31.26"></a>

#### <a name="3.31.26">3.31.26 shake camera strength</a> [expression](expressions.md#12 "Evaluates to a real number.")

Shakes the camera using swave and pwave

`shake camera strength 8.0`

<a name="3.31.27">

#### 3.31.27 stop camera shake

</a>

Stops the camera shaking

`stop camera shake`

<a name="3.31.28"></a>

#### <a name="3.31.28">3.31.28 set camera position relative to</a> [object](objects.md#8 "return a game object") T_AT [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Sets the camera position instantly. Sets the camera position relative to an [object](objects.md#8 "return a game object")s 3d space.

`set camera position relative to LostBrother at {offset}`

<a name="3.31.29"></a>

#### <a name="3.31.29">3.31.29 set camera focus relative to</a> [object](objects.md#8 "return a game object") T_AT [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.")

Sets the camera focus instantly. Sets the camera focus relative to an [object](objects.md#8 "return a game object")s 3d space.

`set camera focus relative to LostBrother at {offset}`

<a name="3.31.30"></a>

#### <a name="3.31.30">3.31.30 move camera position to</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.") easein [expression](expressions.md#12 "Evaluates to a real number.") easeout [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera position from the initial position to the given position over the given time and with the various speed [expression](expressions.md#12 "Evaluates to a real number.")s

`move camera position to {MyPos} time 5 easein 1.5 easeout 1.5`

<a name="3.31.31"></a>

#### <a name="3.31.31">3.31.31 set camera lens</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.") easein [expression](expressions.md#12 "Evaluates to a real number.") easeout [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera lens in an optional amount of time, with easein and easeout parameters.

`set camera lens 132.1 time 5 easein 2.2 easeout 1.6`

<a name="3.31.32"></a>

#### <a name="3.31.32">3.31.32 move camera focus to</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.") easein [expression](expressions.md#12 "Evaluates to a real number.") easeout [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera focus from the initial position to the given position over the given time and with the various speed [expression](expressions.md#12 "Evaluates to a real number.")s

`move camera focus to {MyPos} time 5 easein 1.5 easeout 1.5`

<a name="3.31.33"></a>

#### <a name="3.31.33">3.31.33 move camera position to</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.") catmullrom bias [expression](expressions.md#12 "Evaluates to a real number.") tension [expression](expressions.md#12 "Evaluates to a real number.")

Moves the camera position from the initial position to the given position over the given time and with the various spline [expression](expressions.md#12 "Evaluates to a real number.")s

`move camera position to {MyPos} time 5 catmullrom bias 1.0 tension 2.0`

<a name="3.31.34"></a>

#### <a name="3.31.34">3.31.34 move camera focus to</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.") catmullrom bias [expression](expressions.md#12 "Evaluates to a real number.") tension [expression](expressions.md#12 "Evaluates to a real number.")

Moves the focus position from the initial position to the given position over the given time and with the various spline [expression](expressions.md#12 "Evaluates to a real number.")s

`move camera focus to {MyPos} time 5 catmullrom bias 1.0 tension 2.0`

<a name="3.31.35"></a>

#### <a name="3.31.35">3.31.35 set camera lens to</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.") catmullrom [expression](expressions.md#12 "Evaluates to a real number.") bias tension [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera lens from the initial position to the given position over the given time and with the various spline [expression](expressions.md#12 "Evaluates to a real number.")s

`set camera lens to {MyPos} time 5 catmullrom bias 1.0 tension 2.0`

<a name="3.31.36"></a>

#### <a name="3.31.36">3.31.36 set camera roll</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.")

rolls the camera roll through the given number of degrees

`set camera roll 45 time 10`

<a name="3.31.37"></a>

#### <a name="3.31.37">3.31.37 set camera roll</a> [expression](expressions.md#12 "Evaluates to a real number.") time [expression](expressions.md#12 "Evaluates to a real number.") easein [expression](expressions.md#12 "Evaluates to a real number.") easeout [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera roll in an optional amount of time, with easein and easeout parameters.

`set camera roll 132.1 time 5 easein 2.2 easeout 1.6`

<a name="3.31.38"></a>

#### <a name="3.31.38">3.31.38 set camera roll to possition time</a> [expression](expressions.md#12 "Evaluates to a real number.") catmullrom bias [expression](expressions.md#12 "Evaluates to a real number.") tension [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera roll from the initial position to the given position over the given time and with the various spline [expression](expressions.md#12 "Evaluates to a real number.")s

`set camera roll to {MyPos} time 5 catmullrom bias 1.0 tension 2.0`

<a name="3.31.39"></a>

#### <a name="3.31.39">3.31.39 play camera path with easein</a> [expression](expressions.md#12 "Evaluates to a real number.") easeout [expression](expressions.md#12 "Evaluates to a real number.")

Plays the camera path that has been set up

```
play camera path with easein 1 easeout 1
play camera path with easein 1 easeout 1 method SCRIPT_CAMERAPATH_EQUALDISTANCE
```

<a name="3.31.40"></a>

#### <a name="3.31.40">3.31.40 queue camera move with position</a> [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") focus [coord_expression](position.md#11 "Positions in the game world can be specified in various ways.") time [expression](expressions.md#12 "Evaluates to a real number.")

Sets the camera roll from the initial position to the given position over the given time and with the various spline [expression](expressions.md#12 "Evaluates to a real number.")s

`set camera roll to {MyPos} time 5 catmullrom bias 1.0 tension 2.0`

<a name="3.31.41">

#### 3.31.41 reset camera path

</a>

Resets the camera path

`reset camera path`

This documentation generated by LHDOC, © Lionhead Studios 2000
