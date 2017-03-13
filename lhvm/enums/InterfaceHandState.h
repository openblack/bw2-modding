#pragma once

//------------------------------------------------------------------------------------------------------------------------
enum	HAND_STATE
{
//Nothing.
	HAND_STATE_NONE						=	-1,

//Empty hand states.
	HAND_STATE_NORMAL					=	0,	//Not over or doing anything interesting.
	HAND_STATE_OVER_OBJECT,						//Over something interesting.
	HAND_STATE_CAN_PICKUP,						//Over something that can be picked up.
	HAND_STATE_OVER_SKY,						//Hand is over sky.

//Grabbing sky state
	HAND_STATE_GRAB_SKY,

//Grabbing hand states
	HAND_STATE_GRAB_ROAD,						//Fixed to current point.
	HAND_STATE_GRAB_BUILDING,					//Fixed to top of object.
	HAND_STATE_GRAB_OBJECT,						//Fixed to object point.
	HAND_STATE_TUG_OBJECT,						//Leans within constraint.
    
//Full hand state
	HAND_STATE_OBJECT_IN_HAND,					//Something in hand.
	HAND_STATE_HAS_MAGIC,						//This something is magical.
	HAND_STATE_IN_THROW,						//While throwing->Weighty.
	HAND_STATE_IN_THROW_WITH_LOWERING,			//While throwing->And lowering to the ground.

//Placing walls and buildings.
	HAND_STATE_BLUEPRINT,
	HAND_STATE_LOCKED_BLUEPRINT,
	HAND_STATE_ROAD_BLUEPRINT,

//Fist hand states
	HAND_STATE_FIST_WITH_LOWERING,				//Empty hand, clenching, lowering.
	HAND_STATE_FIST_WEAK,						//Empty hand, open, along ground.
	HAND_STATE_FIST_STRONG,						//Empty hand, clenched, along ground.

	HAND_STATE_FIST_CREATURE_AIR,				//Empty hand, open, off creature.
	HAND_STATE_FIST_CREATURE_WEAK,				//Empty hand, open, around creature.
	HAND_STATE_FIST_CREATURE_REWARD,			//Empty hand, stroking creature.
	HAND_STATE_FIST_CREATURE_STRONG,			//Empty hand, slapping, around creature.
	HAND_STATE_FIST_CREATURE_MEGA,				//Empty hand, clenched, around creature.

//Not in world
	HAND_STATE_OVER_GAME_PANEL,
	HAND_STATE_OVER_TOOLBAR,

//Totem/Towers
	HAND_STATE_CAN_SELECT_LOCK_PROCESS,
	HAND_STATE_SELECT_LOCK_PROCESS,

//Grain
	HAND_STATE_CAN_APPLY_LOCK_PROCESS,
	HAND_STATE_APPLY_LOCK_PROCESS,

//Pouring
	HAND_STATE_POUR,
	HAND_STATE_POUR_LOCKED,

//Creature
	HAND_STATE_CREATURE_INTERACTION,			//Interacting with creature
	HAND_STATE_CAN_GIVE_TO_CREATURE,			//Can give something to creature
	HAND_STATE_WAIT_FOR_GIVE,					//Giving something to creature

//Leash
	HAND_STATE_LEASH_INTERACT,					//Leash interact
	HAND_STATE_OVER_LEASH,						//Over a leash

//Navigation
	HAND_STATE_GRIP_LANDSCAPE,					//Gripping landscape
	HAND_STATE_ROTATE_LANDSCAPE,				//Rotating landscape
	HAND_STATE_ZOOM_LANDSCAPE,					//Zooming landscape

//Toggling
	HAND_STATE_OFF,

//To go.
	HAND_STATE_BUBBLE_GRIP,						//To go.

//Multi pickup and putdown
	HAND_STATE_MULTI_PICKUP,
	HAND_STATE_MULTI_PUTDOWN,

//Locked anims
	HAND_STATE_LOCKED_ANIM,
	HAND_STATE_LOCKED_ANIM_SET_POSITION,

	HAND_STATE_LAST,
};