#ifndef __LIVING_STATES_ENUM_H__
#define __LIVING_STATES_ENUM_H__

// Last Saved,#2004-06-08 13:40:07#,"Lionhead Studios"

//*****************************************************************************
// ENUM Values: LIVING_STATES
//*****************************************************************************
enum     LIVING_STATES
{
    LIVING_INVALID                                  =  0 ,
    LIVING_MOVE_TO_POS                              =  1 ,
    LIVING_MOVE_TO_OBJECT                           =  2 ,
    LIVING_MOVE_ON_STRUCTURE                        =  3 ,
    LIVING_MOVE_TO_QUEUE_POSITION                   =  4 ,
    LIVING_IN_QUEUE                                 =  5 ,
    LIVING_IN_SCRIPT                                =  6 ,
    LIVING_IN_DANCE                                 =  7 ,
    LIVING_FLEE_FROM_OBJECT_REACTION                =  8 ,
    LIVING_LOOK_AT_OBJECT_REACTION                  =  9 ,
    LIVING_FOLLOW_OBJECT_REACTION                   =  10 ,
    LIVING_INSPECT_OBJECT_REACTION                  =  11 ,
    LIVING_FLYING                                   =  12 ,
    LIVING_LANDED                                   =  13 ,
    LIVING_LOOK_AT_FLYING_OBJECT_REACTION           =  14 ,
    LIVING_SET_DYING                                =  15 ,
    LIVING_DYING                                    =  16 ,
    LIVING_DEAD                                     =  17 ,
    LIVING_DROWNING                                 =  18 ,
    LIVING_DOWNED                                   =  19 ,
    LIVING_BEING_EATEN                              =  20 ,
    LIVING_GOTO_FOOD_REACTION                       =  21 ,
    LIVING_ARRIVES_AT_FOOD_REACTION                 =  22 ,
    LIVING_GOTO_WOOD_REACTION                       =  23 ,
    LIVING_ARRIVES_AT_WOOD_REACTION                 =  24 ,
    LIVING_GOTO_ORE_REACTION                        =  25 ,
    LIVING_ARRIVES_AT_ORE_REACTION                  =  26 ,
    LIVING_WAIT_FOR_ANIMATION                       =  27 ,
    LIVING_IN_HAND                                  =  28 ,
    LIVING_GOTO_PICKUP_BALL_REACTION                =  29 ,
    LIVING_ARRIVES_AT_PICKUP_BALL_REACTION          =  30 ,
    LIVING_MOVE_IN_FLOCK                            =  31 ,
    LIVING_MOVE_ALONG_PATH                          =  32 ,
    LIVING_MOVE_ON_PATH                             =  33 ,
    LIVING_FLEEING_LOOK_AT_OBJECT_REACTION          =  34 ,
    LIVING_FLEE_FROM_REACTION                       =  35 ,
    LIVING_LAST                                     =  36 ,
};

#endif    // __LIVING_STATES_ENUM_H__