/**********************************************************************************
*	
*	filename:	StateDrivenNavigationEnums.h
*
*	purpose:	Stores the enumerations used for statedrivens in navigation
*				requests
*
*	author:		Triston Attridge & Sam Martin
*	created:	17/2/2005	(16:49)
*
*	Copyright (C) Lionhead Ltd 2002-5
*	This file contains unpublished source code which is the confidential property of Lionhead Ltd.  
*	Publication or transmission by any medium is strictly forbidden without written permission.
*
**********************************************************************************/

//*********************************************************************************
#ifndef STATE_DRIVEN_NAVIGATIONENUMS_H
#define STATE_DRIVEN_NAVIGATIONENUMS_H
//*********************************************************************************

enum NAV_FAILURE_STATE;
//------------------------------------------------------------------------------------------------
enum NAV_FAILURE_MODE
{
			//In this mode we never fail, if we detect an obstacle, we switch to straight line movement.
	NAV_FAILURE_MODE_NEVER_FAIL_STRAIGHT_LINE = 0, 
			//if we fail, we stop immediately
	NAV_FAILURE_MODE_STOP_IMMEDIATELY, 
			//if we fail, and we had a path, carry on the path as far as we can.
	NAV_FAILURE_MODE_GO_TO_CLOSEST_POINT,

	NAV_FAILURE_MODE_MAX_TYPE
};


//------------------------------------------------------------------------------------------------
enum NAV_STATE
{
	NAV_STATE_NONE = 0,			//This entity is not currently navigating
	NAV_STATE_NAVIGATING,	//This entity is navigating
	NAV_STATE_SUCCEEDED,	//This entity has succeeded in navigating
	NAV_STATE_FAILING,		//This entity is in the process of failing
	NAV_STATE_FAILED,		//This entity has failed, and is not doing anything else.

	NAV_STATE_MAX_TYPE
};



//*********************************************************************************
#endif //STATE_DRIVEN_NAVIGATIONENUMS_H
//*********************************************************************************
//*********************************************************************************
//*********************************************************************************
//*********************************************************************************
