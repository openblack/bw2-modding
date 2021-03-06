#ifndef TRIBUTE_OBJECTIVE_TYPE_STATE_ENUM_H_
#define TRIBUTE_OBJECTIVE_TYPE_STATE_ENUM_H_


enum TRIBUTE_OBJECTIVE_STATE
{
	TRIBUTE_OBJECTIVE_STATE_NO_CHANGE = 0,
	TRIBUTE_OBJECTIVE_STATE_FAILED,
	TRIBUTE_OBJECTIVE_STATE_COMPLETE,

	TRIBUTE_OBJECTIVE_STATE_FAILED_HIDDEN,
	TRIBUTE_OBJECTIVE_STATE_COMPLETE_HIDDEN,	//<<This means it is not shown on tribute menu, but is shown on the menu toolbar

	TRIBUTE_OBJECTIVE_STATE_HIDDEN,

	TRIBUTE_OBJECTIVE_STATE_MAX_TYPE

};

#endif    // TRIBUTE_OBJECTIVE_TYPE_STATE_ENUM_H_