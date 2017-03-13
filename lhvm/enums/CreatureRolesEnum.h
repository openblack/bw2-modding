//*********************************************************************************
// Creature roles enum
//*********************************************************************************

#ifndef CREATUREROLES_ENUM_H
#define CREATUREROLES_ENUM_H

enum CREATURE_ROLE
{
	CR_NONE				= 0,
	CR_GATHERER			= 1,
	CR_BUILDER			= 2,
	CR_ENTERTAINER		= 3,
	CR_SOLDIER			= 4,

	CR_NUM_ROLES
};

enum CREATURE_ROLE_LEVEL
{
	RL_LEVEL_1 = 0,
	RL_LEVEL_2,
	RL_LEVEL_3,

	RL_NUM_LEVELS,
	RL_UNDEFINED_LEVEL = RL_NUM_LEVELS
};

#endif //CREATUREROLES_ENUM_H