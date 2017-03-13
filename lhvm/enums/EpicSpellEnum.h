#pragma once
#ifndef __EPIC_SPELL_ENUM_H__
#define __EPIC_SPELL_ENUM_H__

// Last Saved,#2003-04-29 14:37:20#,"gwatts"
// Not in info.xls any more.

//*****************************************************************************
// ENUM Values: EPIC_SPELL
//*****************************************************************************
enum     EPIC_SPELL
{
	ZERO										=	0,

	//Specific to siren
	EPIC_MOVE_VILLAGERS							=	1,
	EPIC_BEAM_DOWN								=	2,
	EPIC_SHOW_SIREN								=	3,
	EPIC_SUMMON_NYMPHS							=	4,
	EPIC_ADD_NYMPHS								=	5,
	EPIC_TRIGGER_NYMPHS_GESTURE					=	6,
	EPIC_TRIGGER_NYMPHS							=	7,
	EPIC_REMOVE_SIREN							=	8,
	EPIC_END_SPELL								=	9,
	EPIC_SHUT_DOWN_BEAM							=	10,
	
	// Specific to volcano.
	EPIC_START_SHOCKWAVE						=	1,
												
	EPIC_START_RISING							=	3,
	EPIC_START_LAVA								=	4,
	EPIC_STOP_LAVA								=	5,
												
	EPIC_START_SWIRL							=	6,
												
	EPIC_START_EXPLOSION						=	7,
	EPIC_FLASH									=	8,
	EPIC_STOP_EXPLOSION							=	11,
												
	EPIC_START_LAVA_EXPLOSION					=	12,
	EPIC_START_PLUME							=	13,
	EPIC_STOP_PLUME								=	14,
	EPIC_START_ASH								=	15,
	EPIC_STOP_ASH								=	16,
	EPIC_START_SMOKE							=	17,
	EPIC_STOP_SMOKE								=	18,
	EPIC_START_BUBBLING_LAVA					=	19,
	EPIC_STOP_BUBBLING_LAVA						=	20,

	EPIC_SPAWN_ROCKS							=	21,
	EPIC_SPAWN_SMALL_CRATER						=	22,

	EPIC_START_ROCK_SHOWER						=	23,
	EPIC_END_ROCK_SHOWER						=	24,
	
	EPIC_START_FALLING							=	25,
	
	// Specific to earthquake
	EPIC_START_CASTING							=	1,
	EPIC_START_SINKING							=	3,
	EPIC_START_CRACKING							=	4,
	EPIC_START_SHIFTING							=	5,
	EPIC_PULSE_UP								=	6,
	EPIC_PULSE_DOWN								=	8,
	EPIC_CRUMBLE_BUILDINGS						=	11,
	EPIC_START_STEAM							=	12,
	EPIC_START_CLOSING							=	13,
	EPIC_ADD_NAVIGATION							=	113,
	EPIC_REMOVE_NAVIGATION						=	114,

	// Specific to hurricane
	EPIC_HURRICANE_BEAM_DOWN					=	1,
	EPIC_HURRICANE_END_BEAM						=	2,
	EPIC_START_GROUND_SWIRL						=	3,
	EPIC_START_TOP_SWIRL						=	4,
	EPIC_CREATE_CLOUDS							=	5,
	EPIC_SET_CLOUDS_STORM						=	6,
	EPIC_MOVE_TORNADO							=	7,
	EPIC_ENABLE_TORNADO_DESTRUCTION				=	8,
	EPIC_DISABLE_TORNADO_DESTRUCTION			=	9,
	EPIC_ENTER_TORNADO							=	10,
	EPIC_EXIT_TORNADO							=	11,
	EPIC_STOP_TORNADO							=	12,
	EPIC_CLEAR_CLOUDS							=	13,
	EPIC_END_TORNADO							=	14,

	// Specific to WOMD
	EPIC_WMD_BEAM_START							=	1,
	EPIC_WMD_BEAM_STOP							=	2,
	EPIC_WMD_EXPLOSION							=	3,
	EPIC_WMD_PROJECTILES						=	4,
	EPIC_WMD_GROWTH_START						=	5,
	EPIC_WMD_GROWTH_STOP						=	6,
};												
#endif    // __EPIC_SPELL_ENUM_H__
	