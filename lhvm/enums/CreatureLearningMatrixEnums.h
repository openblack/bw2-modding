/**********************************************************************************
*	
*	filename:	CreatureLearningMatrixEnums.h
*	file path:	C:\dev\BW2\white
*
*	purpose:	Learning Matrix Enums
*
*	author:		Thomas Busser
*	created:	25/03/2005
*	last Modified by $Author: tbusser $ on $Date: 2005/08/04 $
*
**********************************************************************************/

#if !defined( CREATURELEARNINGMATRIXENUMS_H )
#define CREATURELEARNINGMATRIXENUMS_H


//-----------------------------------------------------------------------------
// Categories of actions the creature can learn about
//-----------------------------------------------------------------------------
enum LEARN_ACTION
{
	LA_EAT,
	LA_SLEEP,
	LA_POO,
	LA_STEAL,
	LA_WEIGHTLIFT,
	LA_GATHER,
	LA_BUILD,
	LA_PLAY,
	LA_WATER,
	LA_HEAL,
	LA_ATTACK,
	LA_SACRIFICE,
	LA_EXPLORE,
	LA_MAX,
	LA_UNDEFINED = LA_MAX
};

//-----------------------------------------------------------------------------
// Categories of objects the creature can learn about
//-----------------------------------------------------------------------------
enum LEARN_OBJECT
{
	LO_PLAYER_VILLAGER,
	LO_OPPONENT_VILLAGER,
	LO_PLAYER_PLATOON,
	LO_OPPONENT_PLATOON,
	LO_PLAYER_DEFENCES,
	LO_OPPONENT_DEFENCES,
	LO_PLAYER_STORAGE_PIT,
	LO_OPPONENT_STORAGE_PIT,
	LO_PLAYER_BUILDING,
	LO_OPPONENT_BUILDING,
	LO_CREATURE_PEN,
	LO_ANIMALS,
	LO_ROCKS,
	LO_MINE,
	LO_ORE_ROCKS,
	LO_ORE,
	LO_TREES,
	LO_WOOD,
	LO_FIELDS,
	LO_GRAIN,
	LO_TOYS,
	LO_POO,
	LO_SPELL_ORBS,

	LO_NO_OBJECT,

	LO_MAX,
	LO_UNDEFINED = LO_MAX
};

//-----------------------------------------------------------------------------
// Influence of action/object on alignment 
//-----------------------------------------------------------------------------
enum LEARN_ALIGNMENT
{
	LAL_VERY_BAD,
	LAL_QUITE_BAD,
	LAL_NEUTRAL,
	LAL_QUITE_GOOD,
	LAL_VERY_GOOD,
};

//-----------------------------------------------------------------------------
// Action/object activation
//-----------------------------------------------------------------------------
enum LEARN_ITEM_TYPE
{
	LIT_ENABLED,
	LIT_NAUGHTY,
	LIT_DISABLED
};

//-----------------------------------------------------------------------------
// How often the creature should consider doing a action-object pair
//-----------------------------------------------------------------------------
enum LEARN_FREQUENCY
{
	LF_NEVER,
	LF_SELDOM,
	LF_SOMETIMES,
	LF_OFTEN,
	LF_ALWAYS,

	LF_MAX
};

//-----------------------------------------------------------------------------
// Results from EvaluateActionObjectPair
//-----------------------------------------------------------------------------
enum							EVALUATION_RESULT
{
	LR_NOT_IN_MATRIX,		// the action-object pair is *NOT* in the learning matrix
	LR_DISABLED,			// the action-object pair is in the matrix but is tagged as *DISABLED*
	LR_NOT_TAUGHT_YET,		// the action-object pair is in the matrix and *NO* player feedback has been given yet
	LR_FORBIDDEN_BY_PLAYER,	// the player has told the creature to never ever to that
	LR_ALREADY_TAUGHT		// the action-object pair is in the matrix and *SOME* player feedback has been given yet
};

//-------------------------------------------------------------------------
// Feedback from the player
//-------------------------------------------------------------------------
enum LEARN_FEEDBACK
{
	LFB_MORE,
	LFB_LESS
};

//-------------------------------------------------------------------------
// Thought bubble mode
//-------------------------------------------------------------------------
enum LEARN_THOUGHT_MODE
{
	LTM_QUESTION,
	LTM_AFFIRMATION,
	LTM_OPINION,
	LTM_VERB,
	LTM_NOUN
};

#endif // #if !defined( CREATURELEARNINGMATRIXENUMS_H )

