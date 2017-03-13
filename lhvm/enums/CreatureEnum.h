#ifndef __CREATURE_ENUM_H__
#define __CREATURE_ENUM_H__

// Last Saved,#2005-08-10 13:24:12#,"jmcfarlane"

//*****************************************************************************
// ENUM Values: CREATURE_TYPE
//*****************************************************************************
enum     CREATURE_TYPE
{
    CREATURE_TYPE_APE                                                          =  0 ,
    CREATURE_TYPE_COW                                                          =  1 ,
    CREATURE_TYPE_TIGER                                                        =  2 ,
    CREATURE_TYPE_WOLF                                                         =  3 ,
    CREATURE_TYPE_LION                                                         =  4 ,
    CREATURE_TYPE_GORILLA                                                      =  5 ,
    CREATURE_TYPE_MINOTAUR                                                     =  6 ,
    CREATURE_TYPE_JACKAL                                                       =  7 ,
    CREATURE_TYPE_JAGUAR                                                       =  8 ,
    CREATURE_TYPE_LAST                                                         =  9 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_DESIRE_SOURCE
//*****************************************************************************
enum     CREATURE_DESIRE_SOURCE
{
    IMPRESS_FROM_WATCHING_PLAYER                                               =  0 ,
    IMPRESS_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                               =  1 ,
    COMPASSION_FROM_WATCHING_PLAYER                                            =  2 ,
    COMPASSION_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                            =  3 ,
    COMPASSION_FROM_BEING_CONTENT                                              =  4 ,
    COMPASSION_INNATE_NICENESS                                                 =  5 ,
    ANGER_FROM_WATCHING_PLAYER                                                 =  6 ,
    ANGER_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                                 =  7 ,
    ANGER_FROM_BEING_DISSATISFIED                                              =  8 ,
    ANGER_FROM_BEING_DAMAGED                                                   =  9 ,
    ANGER_FROM_SADNESS                                                         =  10 ,
    ANGER_INNATE_AGGRESSION                                                    =  11 ,
    TO_PLAY_FROM_WATCHING_PLAYER                                               =  12 ,
    TO_PLAY_FROM_WATCHING_VILLAGERS                                            =  13 ,
    HUNGER_FROM_ENERGY                                                         =  14 ,
    HUNGER_FROM_WATCHING_VILLAGERS                                             =  15 ,
    HUNGER_FROM_SADNESS                                                        =  16 ,
    FEAR_FROM_DARKNESS                                                         =  17 ,
    FEAR_FROM_BEING_DAMAGED                                                    =  18 ,
    FEAR_FROM_SEEING_SCAREY_MAGIC                                              =  19 ,
    CURIOSITY                                                                  =  20 ,
    TO_POO_FROM_PHYSICAL_POO                                                   =  21 ,
    TIREDNESS_FROM_EXHAUSTION                                                  =  22 ,
    TIREDNESS_FROM_LAZINESS                                                    =  23 ,
    TIREDNESS_FROM_NIGHT_TIME                                                  =  24 ,
    TIREDNESS_FROM_SADNESS                                                     =  25 ,
    TIREDNESS_INNATE_LETHARGY                                                  =  26 ,
    TO_IDLE_AROUND_WITH_PLAYER                                                 =  27 ,
    WANDERLUST                                                                 =  28 ,
    TO_PUKE                                                                    =  29 ,
    TO_BUILD_HOME                                                              =  30 ,
    TO_BRING_STUFF_HOME                                                        =  31 ,
    FOR_WATER_FROM_DEHYDRATION                                                 =  32 ,
    TO_RESTORE_HEALTH_FROM_LIFE                                                =  33 ,
    TO_BE_FRIENDS                                                              =  34 ,
    TO_BE_FRIENDS_INNATE_FRIENDLINESS                                          =  35 ,
    TO_ATTRACT_PLAYERS_ATTENTION_FROM_LONELINESS                               =  36 ,
    TO_ATTRACT_PLAYERS_ATTENTION_FROM_LACK_OF_INTERACTION                      =  37 ,
    TO_MANIFEST_STATE                                                          =  38 ,
    TO_MANIFEST_STATE_INNATE_COMMUNICATIVENESS                                 =  39 ,
    TO_GET_WARMER                                                              =  40 ,
    TO_GET_COLDER                                                              =  41 ,
    TO_SCRATCH                                                                 =  42 ,
    TO_RUN_AWAY_FROM_PLAYER                                                    =  43 ,
    TO_REST                                                                    =  44 ,
    TO_OBEY_PLAYER                                                             =  45 ,
    ILLNESS                                                                    =  46 ,
    TO_OBEY_CREATURE                                                           =  47 ,
    SADNESS                                                                    =  48 ,
    TO_GO_HOME                                                                 =  49 ,
    TO_TELL_PLAYER_WHAT_YOU_THINK_OF_HIM                                       =  50 ,
    TO_PLAY_WITH_PLAYER                                                        =  51 ,
    TO_TELL_CREATURE_WHAT_YOU_THINK_OF_HIM                                     =  52 ,
    TO_EDUCATE_FRIEND                                                          =  53 ,
    TO_FOLLOW_PLAYER_DESIRE                                                    =  54 ,
    TO_GET_HIGH                                                                =  55 ,
    TO_HANG_AROUND_AT_HOME                                                     =  56 ,
    SOURCE_FOR_MENTAL_ILLNESS                                                  =  57 ,
    TO_MISS_FRIEND                                                             =  58 ,
    TO_LOOK_AROUND                                                             =  59 ,
    TO_STEAL                                                                   =  60 ,
    TO_MELEE_ATTACK_FROM_INNATE_AGGRESSION                                     =  61 ,
    TO_MELEE_ATTACK_FROM_BEING_ATTACKED                                        =  62 ,
    TO_MELEE_ATTACK_FROM_LEARNED_ANGER                                         =  63 ,
    TO_MELEE_ATTACK_TROOPS_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                =  64 ,
    TO_RANGED_ATTACK_FROM_INNATE_AGGRESSION                                    =  65 ,
    TO_RANGED_ATTACK_FROM_BEING_ATTACKED                                       =  66 ,
    TO_RANGED_ATTACK_FROM_LEARNED_ANGER                                        =  67 ,
    TO_RANGED_ATTACK_TROOPS_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT               =  68 ,
    TO_ATTACK_TOWN_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                        =  69 ,
    TO_DEFEND_FROM_INNATE_COMPASSION                                           =  70 ,
    TO_DEFEND_FROM_LEARNED_COMPASSION                                          =  71 ,
    TO_DEFEND_TROOPS_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                      =  72 ,
    TO_DEFEND_TOWN_FROM_SEEING_OBJECTS_WHICH_DESERVE_IT                        =  73 ,
    TO_BE_ARMY_GENERAL_FROM_HAVING_TROOPS_LEASHED                              =  74 ,
    TO_BE_ARMY_GENERAL_TROOPS_FROM_SEEING_OBJECTS_TO_ATTACK                    =  75 ,
    TO_BE_ARMY_GENERAL_TROOPS_FROM_SEEING_OBJECTS_TO_DEFEND                    =  76 ,
    TO_REMOVE_ARROWS_FROM_HAVING_ARROWS_STUCK_IN_ME                            =  77 ,
    TO_SHOW_PAIN_FROM_PHYSICAL_PAIN                                            =  78 ,
    TO_BUILD_HOME_FROM_HAVING_UNBUILT_HOME                                     =  79 ,
    TO_RETURN_TO_FRIENDLY_TERRITORY_FROM_BEING_IN_ENEMY_TERRITORY              =  80 ,
    TO_NEUTRALIZE_LAVA_FROM_SEEING_IT                                          =  81 ,
    TO_IDLE_IN_ARMY_MODE                                                       =  82 ,
    TO_RETRIEVE_TOY                                                            =  83 ,
    TO_LOOK_FOR_TOY                                                            =  84 ,
    TO_BE_DRY                                                                  =  85 ,
    TO_PERFORM_EXPRESSIVE_IDLE                                                 =  86 ,
    TO_ACKNOWLEDGE_PLAYER                                                      =  87 ,
    NUM_CREATURE_DESIRE_SOURCES                                                =  88 ,
    INVALID_CREATURE_DESIRE_SOURCE                                             =  88 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_DESIRE_ACTION_SIZE
//*****************************************************************************
enum     CREATURE_DESIRE_ACTION_SIZE
{
    MAX_NUM_SOURCES_FOR_EACH_DESIRE                                            =  8 ,
    MAX_NUM_ACTIONS_FOR_EACH_DESIRE                                            =  30 ,
    MAX_NUM_SOURCES_FOR_EACH_ACTION                                            =  5 ,
    MAX_NUM_MIMICKING_ACTIONS                                                  =  6 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_ACTION
//*****************************************************************************
enum     CREATURE_ACTION
{
    CREATURE_ERROR                                                             =  0 ,
    FIRST_CREATURE_ACTION                                                      =  0 ,
    NO_ACTION_SPECIFIED                                                        =  0 ,
    CREATURE_MOVE_TO_POS                                                       =  1 ,
    CREATURE_FLEE_FROM_OBJECT                                                  =  2 ,
    CREATURE_LOOK_AT_OBJECT                                                    =  3 ,
    CREATURE_FOLLOW_OBJECT                                                     =  4 ,
    CREATURE_INSPECT_OBJECT                                                    =  5 ,
    CREATURE_LOOK_AT_HAND                                                      =  6 ,
    CREATURE_DEAD                                                              =  7 ,
    CREATURE_EXAMINE_BY_PICKING_UP                                             =  8 ,
    CREATURE_EAT_OBJECT                                                        =  9 ,
    CREATURE_EAT_AFTER_EXAMINING                                               =  10 ,
    CREATURE_STOMP_AND_EAT                                                     =  11 ,
    CREATURE_STONE_AND_EAT                                                     =  12 ,
    CREATURE_HURL                                                              =  13 ,
    CREATURE_RUN_AWAY_FROM_OBJECT                                              =  14 ,
    CREATURE_SLEEP                                                             =  15 ,
    CREATURE_STOMP                                                             =  16 ,
    CREATURE_POO                                                               =  17 ,
    CREATURE_EXAMINE_BY_LOOKING                                                =  18 ,
    CREATURE_FIGHT                                                             =  19 ,
    CREATURE_FOLLOW_PLAYER                                                     =  20 ,
    CREATURE_COMMUNICATE_STATE                                                 =  21 ,
    CREATURE_SHOW_PLAYER_AN_OBJECT                                             =  22 ,
    CREATURE_GO_TO_TOP_OF_HILL_AND_LOOK                                        =  23 ,
    CREATURE_GO_TO_HILL_AND_SIT                                                =  24 ,
    CREATURE_GO_TO_HILL_AND_WALK_ALONG_RIDGE                                   =  25 ,
    CREATURE_HELP_BUILD_HOUSE                                                  =  26 ,
    CREATURE_HELP_REPAIR_HOUSE                                                 =  27 ,
    CREATURE_BRING_OBJECT_TO_TOWN                                              =  28 ,
    CREATURE_PUT_OUT_FIRE                                                      =  29 ,
    CREATURE_STROKE                                                            =  30 ,
    CREATURE_SHOW_IMPRESSIVE_ANIMATION                                         =  31 ,
    CREATURE_CAST_IMPRESSIVE_SPELL                                             =  32 ,
    CREATURE_DANCE_WITH_VILLAGERS                                              =  33 ,
    CREATURE_THROW_IN_THE_SEA                                                  =  34 ,
    CREATURE_PULL_SILLY_FACES                                                  =  35 ,
    CREATURE_CAST_LIGHTNING_BOLT                                               =  36 ,
    CREATURE_CAST_FIREBALL                                                     =  37 ,
    CREATURE_PUKE                                                              =  38 ,
    CREATURE_PRACTICE_THROW                                                    =  39 ,
    CREATURE_DESTROY_AGGRESSOR                                                 =  40 ,
    CREATURE_CAST_SHIELD                                                       =  41 ,
    CREATURE_DRINK_FROM_THE_SEA                                                =  42 ,
    CREATURE_HEAL_HIMSELF                                                      =  43 ,
    CREATURE_REST_TO_GET_BETTER                                                =  44 ,
    CREATURE_INSPECT_CREATURE                                                  =  45 ,
    CREATURE_HOLD_OBJECT                                                       =  46 ,
    CREATURE_EAT_FROM_STORAGE_PIT                                              =  47 ,
    CREATURE_EAT_FROM_FIELD                                                    =  48 ,
    CREATURE_PUT_DOWN                                                          =  49 ,
    CREATURE_THROW_AT_CAMERA                                                   =  50 ,
    CREATURE_SNEEZE                                                            =  51 ,
    CREATURE_SHIVER                                                            =  52 ,
    CREATURE_SHOW_HOTNESS                                                      =  53 ,
    CREATURE_EXPLORE_COAST                                                     =  54 ,
    CREATURE_EXPLORE_TOWNS                                                     =  55 ,
    CREATURE_SLEEP_BY_OBJECT                                                   =  56 ,
    CREATURE_EXAMINE_BY_FOLLOWING                                              =  57 ,
    CREATURE_LOOK_AT_FLYING_OBJECT                                             =  58 ,
    CREATURE_SIT                                                               =  59 ,
    CREATURE_LOOK_AT_CAMERA                                                    =  60 ,
    CREATURE_BRING_HOME                                                        =  61 ,
    CREATURE_SLEEP_AT_POS                                                      =  62 ,
    CREATURE_SHOW_LEARNT_LESSON                                                =  63 ,
    CREATURE_PRACTICE_DANCE                                                    =  64 ,
    CREATURE_GO_TO_MIDDLE_OF_SCREEN                                            =  65 ,
    CREATURE_WAVE_AT_PLAYER                                                    =  66 ,
    CREATURE_WAVE_AT_OBJECT                                                    =  67 ,
    CREATURE_LOOK_CONFUSED                                                     =  68 ,
    CREATURE_CAST_MAGIC_FOOD_PU1                                               =  69 ,
    CREATURE_CAST_HEAL_SPELL                                                   =  70 ,
    CREATURE_RUN_TO_OBJECT                                                     =  71 ,
    CREATURE_OBEY_CREATURE                                                     =  72 ,
    CREATURE_GO_TO_TELEPORT                                                    =  73 ,
    CREATURE_TAKE_OBJECT_FROM_HAND                                             =  74 ,
    CREATURE_GIVE_OBJECT_TO_HAND                                               =  75 ,
    CREATURE_FISH_AND_EAT                                                      =  76 ,
    CREATURE_RUN_AWAY_FROM_POS                                                 =  77 ,
    CREATURE_EXAMINE_POS                                                       =  78 ,
    CREATURE_EAT_FROM_MAGIC_FOOD_PILE                                          =  79 ,
    CREATURE_SMASH_STONES_IN_HALF                                              =  80 ,
    CREATURE_BE_SAD                                                            =  81 ,
    CREATURE_IDLE                                                              =  82 ,
    CREATURE_GO_HOME                                                           =  83 ,
    CREATURE_POINT_AT_OBJECT                                                   =  84 ,
    CREATURE_BRING_FOOD_HOME                                                   =  85 ,
    CREATURE_HANG_AROUND_AT_HOME                                               =  86 ,
    CREATURE_GO_OUT_AND_LOOK_FOR_FOOD                                          =  87 ,
    CREATURE_POINT_AT_CAMERA                                                   =  88 ,
    CREATURE_POINT_AT_HAND                                                     =  89 ,
    CREATURE_PLAY_THROWING_GAME_WITH_PLAYER                                    =  90 ,
    CREATURE_BE_SILLY_WITH_PLAYER                                              =  91 ,
    CREATURE_BE_FRIGHTENED_ON_THE_SPOT                                         =  92 ,
    CREATURE_POO_DISCRETELY                                                    =  93 ,
    CREATURE_FART                                                              =  94 ,
    CREATURE_REST_ON_THE_SPOT                                                  =  95 ,
    CREATURE_GO_HOME_TO_RECOVER                                                =  96 ,
    CREATURE_FOLLOW_PLAYER_DESIRE                                              =  97 ,
    CREATURE_GET_HIGH                                                          =  98 ,
    CREATURE_CAST_SHIELD_PU1                                                   =  99 ,
    CREATURE_CAST_PHYSICAL_SHIELD                                              =  100 ,
    CREATURE_LOOK_BUT_DONT_APPROACH                                            =  101 ,
    CREATURE_LOOK_FOREVER                                                      =  102 ,
    CREATURE_LOOK_AT_MOUNTAINS                                                 =  103 ,
    CREATURE_LOOK_OUT_TO_SEA                                                   =  104 ,
    CREATURE_LOOK_AT_SUN                                                       =  105 ,
    CREATURE_LOOK_AT_MOON                                                      =  106 ,
    CREATURE_LOOK_DOWN_CLIFF                                                   =  107 ,
    CREATURE_HURL_OBJECT_IN_HAND                                               =  108 ,
    CREATURE_ENTER_CITADEL                                                     =  109 ,
    CREATURE_BE_PATHETIC_TO_PLAYER                                             =  110 ,
    CREATURE_DIE_PERMANENTLY                                                   =  111 ,
    CREATURE_SIT_DOWN_ON_BEACH                                                 =  112 ,
    CREATURE_KICK                                                              =  113 ,
    CREATURE_CATCH                                                             =  114 ,
    CREATURE_PUT_OUT_FIRE_WITH_MAGIC_WATER                                     =  115 ,
    CREATURE_SPRINKLE_MAGIC_WATER_ON_CROPS                                     =  116 ,
    CREATURE_PUT_OUT_FIRE_ON_MYSELF                                            =  117 ,
    CREATURE_NOTICE_HELPFUL_ACTION                                             =  118 ,
    CREATURE_NOTICE_AGGRESSIVE_ACTION                                          =  119 ,
    CREATURE_NOTICE_ACTION                                                     =  120 ,
    CREATURE_PLANT_TREE                                                        =  121 ,
    CREATURE_DANCE_OUTSIDE_WORSHIP_SITE                                        =  122 ,
    CREATURE_DANCE_AROUND_ARTEFACT                                             =  123 ,
    CREATURE_THROW_TO_IMPRESS                                                  =  124 ,
    CREATURE_CATCH_FIREBALL_AND_THROW_BACK                                     =  125 ,
    CREATURE_DEAD_FOREVER                                                      =  126 ,
    CREATURE_THROW_AROUND                                                      =  127 ,
    CREATURE_BREAK_ROCK                                                        =  128 ,
    CREATURE_NOTICE_STEALING_ACTION                                            =  129 ,
    CREATURE_NOTICE_PLAYFUL_ACTION                                             =  130 ,
    CREATURE_EXAMINE_OBJECT_IN_HAND                                            =  131 ,
    CREATURE_EAT_OBJECT_IN_HAND                                                =  132 ,
    CREATURE_STROKE_OBJECT_IN_HAND                                             =  133 ,
    CREATURE_THROW_OBJECT_IN_HAND                                              =  134 ,
    CREATURE_SACRIFICE                                                         =  135 ,
    CREATURE_SET_FIRE_TO_OBJECT                                                =  136 ,
    CREATURE_WATCH_PLAYER_WHILE_HE_HAS_YOUR_ATTENTION                          =  137 ,
    CREATURE_CAST_SHIELD_AROUND_TOWN                                           =  138 ,
    CREATURE_PLAY_GAME_WITH_VILLAGERS                                          =  139 ,
    CREATURE_TAKE_VILLAGER_HOME_TO_SLEEP                                       =  140 ,
    CREATURE_KICK_BALL_AROUND                                                  =  141 ,
    CREATURE_THROW_BALL_AT_OBJECT                                              =  142 ,
    CREATURE_DANCE_ON_YOUR_OWN_BY_THE_SEA                                      =  143 ,
    CREATURE_DANCE_PLAYFULLY_WITH_VILLAGERS_WATCHING                           =  144 ,
    CREATURE_DANCE_PLAYFULLY_WITH_VILLAGERS_PARTICIPATING                      =  145 ,
    CREATURE_PLAYFULLY_FRIGHTEN_VILLAGERS                                      =  146 ,
    CREATURE_PLAYFULLY_INTERACT_WITH_VILLAGER                                  =  147 ,
    CREATURE_PLAYFULLY_KISS_VILLAGER                                           =  148 ,
    CREATURE_BRING_VILLAGERS_TO_WORSHIP_SITE                                   =  149 ,
    CREATURE_WATER_TREE                                                        =  150 ,
    CREATURE_WATER_FIELD                                                       =  151 ,
    CREATURE_STEAL_FOOD_FROM_FARM                                              =  152 ,
    CREATURE_STEAL_FOOD_FROM_STORAGE_PIT                                       =  153 ,
    CREATURE_STEAL_WOOD_FROM_STORAGE_PIT                                       =  154 ,
    CREATURE_DANCE_AMOROUSLY_WITH_VILLAGERS                                    =  155 ,
    CREATURE_STEAL_SPELL_SEED                                                  =  156 ,
    CREATURE_STEAL_ANIMAL                                                      =  157 ,
    CREATURE_STEAL_VILLAGER                                                    =  158 ,
    CREATURE_SLEEP_ON_THE_SPOT                                                 =  159 ,
    CREATURE_LOOK_AT_CAMERA_IN_WIDE_SCREEN                                     =  160 ,
    CREATURE_HOWL_AT_PLAYER                                                    =  161 ,
    CREATURE_PRAY_TO_PLAYER                                                    =  162 ,
    CREATURE_POINT_OUT_HIGHLIGHT                                               =  163 ,
    CREATURE_TAKE_TOY_HOME                                                     =  164 ,
    CREATURE_STROKE_TOY                                                        =  165 ,
    CREATURE_THROW_DIE                                                         =  166 ,
    CREATURE_WATER_TREE_FOR_TOWN                                               =  167 ,
    CREATURE_WATER_TREE_PU1_FOR_TOWN                                           =  168 ,
    CREATURE_CREATE_PLANNED_ABODE                                              =  169 ,
    CREATURE_CREATE_PLANNED_CIVIC_BUILDING                                     =  170 ,
    CREATURE_CAST_ANTI_SPELL                                                   =  171 ,
    CREATURE_CAST_FAST_SPELL                                                   =  172 ,
    CREATURE_KICK_AT_POS                                                       =  173 ,
    CREATURE_PLAY_ANGRY_ANIMATION                                              =  174 ,
    CREATURE_STOMP_ON_PLATOON                                                  =  175 ,
    CREATURE_CAST_FIREBALL_ON_PLATOON                                          =  176 ,
    CREATURE_CAST_LIGHTNING_BOLT_ON_PLATOON                                    =  177 ,
    CREATURE_GIVE_PLATOON_A_MORALE_BOOST                                       =  178 ,
    CREATURE_DO_AND_EAT_POO                                                    =  179 ,
    CREATURE_THROW_OBJECT_AT_PLATOON                                           =  180 ,
    CREATURE_SMASH_WALL_WITH_THROWN_ROCKS                                      =  181 ,
    CREATURE_KICK_PLATOON                                                      =  182 ,
    CREATURE_SHIELD_TROOPS                                                     =  183 ,
    CREATURE_HEAL_TROOPS                                                       =  184 ,
    CREATURE_LEAD_PLATOON                                                      =  185 ,
    CREATURE_SWEEP_ENEMY_PLATOON_WITH_TREE                                     =  186 ,
    CREATURE_ATTACK_ENEMY_PLATOON_WITH_SLIDE                                   =  187 ,
    CREATURE_CATCH_WAR_PROJECTILE                                              =  188 ,
    CREATURE_SMASH_WALL_WITH_SHOULDER_BARGE                                    =  189 ,
    CREATURE_SMASH_WALL_WITH_FIREBALL                                          =  190 ,
    CREATURE_ATTACK_BUILDINGS_BY_STOMPING                                      =  191 ,
    CREATURE_PUT_OUT_FIRES                                                     =  192 ,
    CREATURE_HEAL_CIVILIANS                                                    =  193 ,
    CREATURE_SCARE_ENEMY_TROOPS                                                =  194 ,
    CREATURE_CRUSH_PLATOON_WITH_OBJECT                                         =  195 ,
    CREATURE_LOW_PUNCH_PLATOON                                                 =  196 ,
    CREATURE_SHOW_PAIN                                                         =  197 ,
    CREATURE_ATTACK_TROOPS_SPECIAL_MOVE_1                                      =  198 ,
    CREATURE_ATTACK_TROOPS_SPECIAL_MOVE_2                                      =  199 ,
    CREATURE_SMASH_WALL_BY_CHARGING                                            =  200 ,
    CREATURE_SMASH_WALL_BY_POUNDING                                            =  201 ,
    CREATURE_SMASH_WALL_BY_LOW_KICK_PUNCH                                      =  202 ,
    CREATURE_SMASH_WALL_BY_CLEARING_RUBBLE                                     =  203 ,
    CREATURE_ATTACK_TROOPS_BY_MULTI_STOMP                                      =  204 ,
    CREATURE_CAST_FIREBOMB_THROW                                               =  205 ,
    CREATURE_ATTACK_TROOPS_ON_WALL_BY_FLICK                                    =  206 ,
    CREATURE_BRUSH_OFF_ARROWS                                                  =  207 ,
    CREATURE_CAST_FLAME_THROWER                                                =  208 ,
    CREATURE_BUILD_HOME                                                        =  209 ,
    CREATURE_IDLE_WITH_TROOPS                                                  =  210 ,
    CREATURE_ORDER_GENERIC_ATTACK                                              =  211 ,
    CREATURE_ORDER_ATTACHED_PLATOON_TO_ATTACK                                  =  212 ,
    CREATURE_RETURN_TO_FRIENDLY_TERRITORY                                      =  213 ,
    CREATURE_CAST_VECTOR_WATER                                                 =  214 ,
    CREATURE_CAST_DECAY_BOMB                                                   =  215 ,
    CREATURE_ATTACK_TROOPS_WITH_ICE_BOMB                                       =  216 ,
    CREATURE_SING_ALONG_OUTSIDE_PUB                                            =  217 ,
    CREATURE_GET_ANGRY_WITH_PISSHEADS                                          =  218 ,
    CREATURE_GET_PISSED                                                        =  219 ,
    CREATURE_KISS_OBJECT                                                       =  220 ,
    CREATURE_CAST_ICE_ON_LAVA                                                  =  221 ,
    CREATURE_CAST_WATER_ON_LAVA                                                =  222 ,
    CREATURE_CAST_SUPER_HEAL                                                   =  223 ,
    CREATURE_PLANT_TREES_FOR_NEW_GROWTH                                        =  224 ,
    CREATURE_ENCOURAGE_WORSHIPPERS                                             =  225 ,
    CREATURE_MOVE_ANGRY_PEOPLE_TO_CHILL_OUT                                    =  226 ,
    CREATURE_WATCH_VILLAGERS_AT_HOME_COMPASSIONATELY                           =  227 ,
    CREATURE_PLAY_WITH_CHILDREN_IN_CRECHE                                      =  228 ,
    CREATURE_RETURN_RUNAWAYS_TO_CRECHE                                         =  229 ,
    CREATURE_FERTILIZE_FIELDS_WITH_POO                                         =  230 ,
    CREATURE_LIE_DOWN_AND_PLAY_WITH_VILLAGERS                                  =  231 ,
    CREATURE_SNARL_IN_HOUSES                                                   =  232 ,
    CREATURE_SACRIFICE_OBJECT                                                  =  233 ,
    CREATURE_RIP_VILLAGER_APART                                                =  234 ,
    CREATURE_TERRORIZE_WORSHIPPERS                                             =  235 ,
    CREATURE_IDLE_IN_STATE_OF_READINESS                                        =  236 ,
    CREATURE_BRACE_GATES                                                       =  237 ,
    CREATURE_BARGE_GATES                                                       =  238 ,
    CREATURE_REACT_TO_ARMY_BEING_ATTACHED                                      =  239 ,
    CREATURE_KNOCK_OVER_VILLAGERS_WITH_WATER_JET                               =  240 ,
    CREATURE_KICK_OBJECT_AT_OBJECT                                             =  241 ,
    CREATURE_BRUSH_OFF_FIRE                                                    =  242 ,
    CREATURE_STOMP_ON_SIEGE_WEAPON                                             =  243 ,
    CREATURE_CAST_FIREBALL_AT_SIEGE_WEAPON                                     =  244 ,
    CREATURE_CAST_LIGHTNING_AT_SIEGE_WEAPON                                    =  245 ,
    CREATURE_THROW_OBJECT_AT_SIEGE_WEAPON                                      =  246 ,
    CREATURE_KICK_AT_SIEGE_WEAPON                                              =  247 ,
    CREATURE_ATTACK_BUILDING_WITH_AGGRESSIVE_SPELLS                            =  248 ,
    CREATURE_RAISE_MORALE_THROUGH_FEAR                                         =  249 ,
    CREATURE_PLAY_WITH_TOYS_FOR_VILLAGERS                                      =  250 ,
    CREATURE_LOOK_AT_VOLCANO                                                   =  251 ,
    CREATURE_LOOK_AT_SHIPS                                                     =  252 ,
    CREATURE_FART_ON_ENEMIES                                                   =  253 ,
    CREATURE_KICK_BUILDING                                                     =  254 ,
    CREATURE_CAST_SHIELD_AROUND_TROOPS                                         =  255 ,
    CREATURE_PASSIFY_RIOTER                                                    =  256 ,
    CREATURE_JAIL_RIOTER                                                       =  257 ,
    CREATURE_SPRAY_RIOTER                                                      =  258 ,
    CREATURE_ATTACK_CREATURE_WITH_TOY                                          =  259 ,
    CREATURE_LOOK_FOR_TOY                                                      =  260 ,
    CREATURE_SHAKE_OFF_WATER                                                   =  261 ,
    CREATURE_PERFORM_EXPRESSIVE_IDLE                                           =  262 ,
    CREATURE_ACKNOWLEDGE_PLAYER                                                =  263 ,
    CREATURE_PICK_UP                                                           =  264 ,
    CREATURE_MOVE_TO_OBJECT                                                    =  265 ,
    CREATURE_PUT_OBJECT_BY_OBJECT                                              =  266 ,
    CREATURE_TAKE_RESOURCE_FROM_POT                                            =  267 ,
    CREATURE_TAKE_ORE_FROM_MINE                                                =  268 ,
    CREATURE_TAKE_FOOD_FROM_FIELD                                              =  269 ,
    CREATURE_TAKE_FISH_FROM_FISH_FARM                                          =  270 ,
    CREATURE_GIVE_WOOD_TO_BUILDING_SITE                                        =  271 ,
    CREATURE_GIVE_TREE_TO_BUILDING_SITE                                        =  272 ,
    CREATURE_GIVE_ORE_TO_BUILDING_SITE                                         =  273 ,
    CREATURE_GIVE_WOOD_TO_STORAGE_PIT                                          =  274 ,
    CREATURE_GIVE_TREE_TO_STORAGE_PIT                                          =  275 ,
    CREATURE_GIVE_ORE_TO_STORAGE_PIT                                           =  276 ,
    CREATURE_GIVE_FOOD_TO_STORAGE_PIT                                          =  277 ,
    CREATURE_GIVE_COW_TO_STORAGE_PIT                                           =  278 ,
    CREATURE_GIVE_FOOD_POT_TO_PILE                                             =  279 ,
    CREATURE_GIVE_WOOD_POT_TO_PILE                                             =  280 ,
    CREATURE_GIVE_ORE_POT_TO_PILE                                              =  281 ,
    CREATURE_GET_IN_POSITION_TO_ATTACK_PLATOON                                 =  282 ,
    CREATURE_PLAY_WITH_TOY                                                     =  283 ,
    CREATURE_WEIGHTLIFT                                                        =  284 ,
    CREATURE_GET_READY_TO_CATCH                                                =  285 ,
    CREATURE_THROW_TOY_AT_PLAYER                                               =  286 ,
    CREATURE_THROW_TOY_AT_OBJECT                                               =  287 ,
    CREATURE_FETCH_TOY                                                         =  288 ,
    CREATURE_BE_POSSESSIVE_WITH_TOY                                            =  289 ,
    CREATURE_PLAY_ENTERTAIN_ANIM                                               =  290 ,
    CREATURE_PLAY_MEXICAN_WAVE                                                 =  291 ,
    CREATURE_PATROL                                                            =  292 ,
    CREATURE_THROW_OBJECT_OUT_OF_PEN                                           =  293 ,
    CREATURE_FAIL_ACTION                                                       =  294 ,
    CREATURE_FAIL_MOVE                                                         =  295 ,
    CREATURE_FAIL_ROLE                                                         =  296 ,
    CREATURE_FAIL_SILENT                                                       =  297 ,
    NUM_CREATURE_ACTIONS                                                       =  298 ,
};


//*****************************************************************************
// ENUM Values: ATTRIBUTE_TYPE
//*****************************************************************************
enum     ATTRIBUTE_TYPE
{
    ATTRIBUTE_TYPE_FIRST                                                       =  0 ,
    ATTRIBUTE_TYPE_ALLEGIANCE                                                  =  0 ,
    ATTRIBUTE_TYPE_ORIGIN                                                      =  1 ,
    ATTRIBUTE_TYPE_ANIMATE                                                     =  2 ,
    ATTRIBUTE_TYPE_PLAYER_NUMBER                                               =  3 ,
    ATTRIBUTE_TYPE_HARDER_THAN_ME                                              =  4 ,
    ATTRIBUTE_TYPE_CREATURE_TYPE                                               =  5 ,
    ATTRIBUTE_TYPE_TYPE                                                        =  6 ,
    ATTRIBUTE_TYPE_LIFE                                                        =  7 ,
    ATTRIBUTE_TYPE_TRIBE                                                       =  8 ,
    ATTRIBUTE_TYPE_RELIGIOUS_BELIEF_IN_YOU                                     =  9 ,
    ATTRIBUTE_TYPE_TOWN_NEEDS_MOST                                             =  10 ,
    ATTRIBUTE_TYPE_TOWN_SIZE                                                   =  11 ,
    ATTRIBUTE_TYPE_CREATURE_DOMINANT_DESIRE                                    =  12 ,
    ATTRIBUTE_TYPE_CREATURE_HEIGHT                                             =  13 ,
    ATTRIBUTE_TYPE_CREATURE_SPELL_KNOWLEDGE                                    =  14 ,
    ATTRIBUTE_TYPE_CREATURE_CARRYING                                           =  15 ,
    ATTRIBUTE_TYPE_FOREST_SIZE                                                 =  16 ,
    ATTRIBUTE_TYPE_VILLAGER_JOB                                                =  17 ,
    ATTRIBUTE_TYPE_SEX                                                         =  18 ,
    ATTRIBUTE_TYPE_MOBILE_OBJECT_TYPE                                          =  19 ,
    ATTRIBUTE_TYPE_ABODE_TYPE                                                  =  20 ,
    ATTRIBUTE_TYPE_ABODE_BEING_BUILT                                           =  21 ,
    ATTRIBUTE_TYPE_ABODE_ON_FIRE                                               =  22 ,
    ATTRIBUTE_TYPE_LAST                                                        =  23 ,
    ATTRIBUTE_TYPE_ERROR                                                       =  23 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_DESIRE_ATTRIBUTE_SIZE
//*****************************************************************************
enum     CREATURE_DESIRE_ATTRIBUTE_SIZE
{
    MAX_NUM_ATTRIBUTES_TO_CONSIDER                                             =  10 ,
};


//*****************************************************************************
// ENUM Values: DEVELOPMENT_PHASE
//*****************************************************************************
enum     DEVELOPMENT_PHASE
{
    DEVELOPMENT_PHASE_INITIAL                                                  =  0 ,
    DEVELOPMENT_PHASE_FIRST                                                    =  0 ,
    DEVELOPMENT_PHASE_LEARN_TO_TAKE_FROM_PLAYER_AND_EAT                        =  1 ,
    DEVELOPMENT_PHASE_PUNISHMENT                                               =  2 ,
    DEVELOPMENT_PHASE_LEASH_PULL_AND_PICKUP                                    =  3 ,
    DEVELOPMENT_PHASE_LEASH_ATTACH_TO_HOUSE                                    =  4 ,
    DEVELOPMENT_PHASE_MEET_GUIDE                                               =  5 ,
    DEVELOPMENT_PHASE_FRIENDS_WITH_GUIDE                                       =  6 ,
    DEVELOPMENT_PHASE_GUIDE_EXPLAINS_HISTORY                                   =  7 ,
    DEVELOPMENT_PHASE_GUIDE_TEACHES_SPELLS                                     =  8 ,
    DEVELOPMENT_PHASE_IMPRESS_TOWN                                             =  9 ,
    DEVELOPMENT_PHASE_LEARN_TO_FIGHT                                           =  10 ,
    DEVELOPMENT_PHASE_HELP_TOWN                                                =  11 ,
    DEVELOPMENT_PHASE_LEASH_GOOD_AND_EVIL                                      =  12 ,
    DEVELOPMENT_PHASE_FULLY_MATURE                                             =  13 ,
    DEVELOPMENT_PHASE_LAST                                                     =  14 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_NUM_DESIRES_IN_DEVELOPMENT_PHASE
//*****************************************************************************
enum     CREATURE_NUM_DESIRES_IN_DEVELOPMENT_PHASE
{
    MAX_NUM_DESIRES_TO_ADD                                                     =  20 ,
    MAX_NUM_DESIRES_TO_REMOVE                                                  =  4 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_TUTORIAL
//*****************************************************************************
enum     CREATURE_TUTORIAL
{
    CREATURE_TUTORIAL_SELECT                                                   =  0 ,
    CREATURE_TUTORIAL_RUN                                                      =  1 ,
    CREATURE_TUTORIAL_HAND_OVER                                                =  2 ,
    CREATURE_TUTORIAL_DESELECT                                                 =  3 ,
    CREATURE_TUTORIAL_MORE_ROCKS_NEEDED_FOR_HOME                               =  4 ,
    CREATURE_TUTORIAL_PICK_UP                                                  =  5 ,
    CREATURE_TUTORIAL_HELP_BUILD                                               =  6 ,
    CREATURE_TUTORIAL_DROP                                                     =  7 ,
    CREATURE_TUTORIAL_EAT                                                      =  8 ,
    CREATURE_TUTORIAL_REWARD_PUNISH                                            =  9 ,
    CREATURE_TUTORIAL_DRINK                                                    =  10 ,
    CREATURE_TUTORIAL_POO                                                      =  11 ,
    CREATURE_TUTORIAL_LAST                                                     =  12 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_HELP_TYPE
//*****************************************************************************
enum     CREATURE_HELP_TYPE
{
    CREATURE_HELP_TYPE_SHOW_LESSON_INCREASE_SOURCE                             =  0 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_DECREASE_SOURCE                             =  1 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_INCREASE_DESIRE                             =  2 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_DECREASE_DESIRE                             =  3 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_INCREASE_OPINION                            =  4 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_DECREASE_OPINION                            =  5 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_LEARN_NORMAL_ACTION                         =  6 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_LEARN_MAGIC_ACTION                          =  7 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_NEARLY_LEARNT_NORMAL_ACTION                 =  8 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_NEARLY_LEARNT_MAGIC_ACTION                  =  9 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_CANT_LEARN_NORMAL_ACTION_YET                =  10 ,
    CREATURE_HELP_TYPE_SHOW_LESSON_CANT_LEARN_MAGIC_ACTION_YET                 =  11 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_INITIAL                               =  12 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_LEARN_TO_TAKE_FROM_PLAYER_AND_EAT     =  13 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_PUNISHMENT                            =  14 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_LEASH_PULL_AND_PICKUP                 =  15 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_LEASH_ATTACH_TO_HOUSE                 =  16 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_MEET_GUIDE                            =  17 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_FRIENDS_WITH_GUIDE                    =  18 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_GUIDE_EXPLAINS_HISTORY                =  19 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_GUIDE_TEACHES_SPELLS                  =  20 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_IMPRESS_TOWN                          =  21 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_LEARN_TO_FIGHT                        =  22 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_HELP_TOWN                             =  23 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_LEASH_GOOD_AND_EVIL                   =  24 ,
    CREATURE_HELP_TYPE_DEVELOPMENT_PHASE_FULLY_MATURE                          =  25 ,
    CREATURE_HELP_TYPE_RECEIVED_SPELL                                          =  26 ,
    CREATURE_HELP_TYPE_FINISHED_RECEIVING_SPELL                                =  27 ,
    CREATURE_HELP_TYPE_TUTORIAL                                                =  28 ,
    CREATURE_HELP_TYPE_SHOW_CURRENT_SOURCE                                     =  29 ,
    CREATURE_HELP_TYPE_SHOW_PHYSICAL_PROBLEM                                   =  30 ,
    CREATURE_HELP_TYPE_SHOW_MENTAL_PROBLEM                                     =  31 ,
    CREATURE_HELP_TYPE_PROMPT_HASNT_LEARNT_NORMAL_ACTION                       =  32 ,
    CREATURE_HELP_TYPE_SHOW_TOWN_ATTITUDE_TO_CREATURE                          =  33 ,
    CREATURE_HELP_TYPE_CANNOT_LEARN_ACTION_IN_THIS_DEVELOPMENT_PHASE           =  34 ,
    CREATURE_HELP_TYPE_SHOW_DEVELOPMENT_CRITERIA                               =  35 ,
    CREATURE_HELP_TYPE_SOMETHING_INTERESTING_OFF_SCREEN                        =  36 ,
    CREATURE_HELP_TYPE_MISCELLANEOUS_STACKED                                   =  37 ,
    CREATURE_HELP_TYPE_MISCELLANEOUS_UNSTACKED                                 =  38 ,
    CREATURE_HELP_TYPE_ACTION_MESSED_UP                                        =  39 ,
    CREATURE_HELP_TYPE_FAILURE_EXPLANATION                                     =  40 ,
    CREATURE_HELP_TYPE_CURRENT_DESIRE                                          =  41 ,
    CREATURE_HELP_TYPE_LAST                                                    =  42 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_MISCELLANEOUS_HELP_STACKED
//*****************************************************************************
enum     CREATURE_MISCELLANEOUS_HELP_STACKED
{
    CREATURE_MISCELLANEOUS_HELP_STACKED_NICE_MUSIC                             =  0 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_NASTY_MUSIC                            =  1 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_FRIGHTENING_MUSIC                      =  2 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_CREATURE_HAS_FAINTED                   =  3 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_PLAYER_STROKE_BUT_NOT_LEARNING         =  4 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_PLAYER_SLAP_BUT_NOT_LEARNING           =  5 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_CREATURE_TRANSPORTED_HOME              =  6 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_CREATURE_CANNOT_PICK_UP                =  7 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_TYKE_CANNOT_MIMIC                      =  8 ,
    CREATURE_MISCELLANEOUS_HELP_STACKED_LAST                                   =  9 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_MISCELLANEOUS_HELP_UNSTACKED
//*****************************************************************************
enum     CREATURE_MISCELLANEOUS_HELP_UNSTACKED
{
    CREATURE_MISCELLANEOUS_HELP_UNSTACKED_OFF_SCREEN_INTERESTINGNESS           =  0 ,
    CREATURE_MISCELLANEOUS_HELP_UNSTACKED_LAST                                 =  1 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_MESSED_UP
//*****************************************************************************
enum     CREATURE_MESSED_UP
{
    CREATURE_MESSED_UP_ACTION_THROW                                            =  0 ,
    CREATURE_MESSED_UP_ACTION_SPELL                                            =  1 ,
    CREATURE_MESSED_UP_ACTION_FISH                                             =  2 ,
    CREATURE_MESSED_UP_ACTION_DANCE_WITH_VILLAGERS                             =  3 ,
    CREATURE_MESSED_UP_ACTION_MAKE_FIRE                                        =  4 ,
    CREATURE_MESSED_UP_ACTION_IMPRESS_VILLAGERS                                =  5 ,
    CREATURE_MESSED_UP_ACTION_RAISE_TOTEM                                      =  6 ,
    CREATURE_MESSED_UP_ACTION_LAST                                             =  7 ,
};


//*****************************************************************************
// ENUM Values: SCRIPT_PERFORMED_ACTION
//*****************************************************************************
enum     SCRIPT_PERFORMED_ACTION
{
    SCRIPT_PERFORMED_ACTION_EAT                                                =  0 ,
    SCRIPT_PERFORMED_ACTION_DESTROY                                            =  1 ,
    SCRIPT_PERFORMED_ACTION_SAVE                                               =  2 ,
    SCRIPT_PERFORMED_ACTION_LAST                                               =  3 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_FAILURE_EXPLANATION
//*****************************************************************************
enum     CREATURE_FAILURE_EXPLANATION
{
    CREATURE_FAILURE_EXPLANATION_DOESNT_WANT_TO_FIGHT_BECAUSE_DAMAGED          =  0 ,
    CREATURE_FAILURE_EXPLANATION_CANT_FIND_ROUTE                               =  1 ,
    CREATURE_FAILURE_EXPLANATION_ROUTE_BLOCKED                                 =  2 ,
    CREATURE_FAILURE_EXPLANATION_ROUTE_INACCESSIBLE                            =  3 ,
    CREATURE_FAILURE_EXPLANATION_OPPONENT_REFUSED_TO_FIGHT                     =  4 ,
    CREATURE_FAILURE_EXPLANATION_OPPONENT_REFUSED_TO_PLAY                      =  5 ,
    CREATURE_FAILURE_EXPLANATION_OPPONENT_REFUSED_TO_BE_FRIENDS                =  6 ,
    CREATURE_FAILURE_EXPLANATION_LEASH_STOPPED_CREATURE                        =  7 ,
    CREATURE_FAILURE_EXPLANATION_CREATURE_LOST_OBJECT_HE_WAS_TRACKING          =  8 ,
    CREATURE_FAILURE_EXPLANATION_LAST                                          =  9 ,
};


//*****************************************************************************
// ENUM Values: THING_TO_LOOK_AT_TYPE
//*****************************************************************************
enum     THING_TO_LOOK_AT_TYPE
{
    THING_TO_LOOK_AT_TYPE_OBJECT                                               =  0 ,
    THING_TO_LOOK_AT_TYPE_MOUNTAIN                                             =  1 ,
    THING_TO_LOOK_AT_TYPE_SEA                                                  =  2 ,
    THING_TO_LOOK_AT_TYPE_LAST                                                 =  3 ,
};


//*****************************************************************************
// ENUM Values: MIMIC_STAGE
//*****************************************************************************
enum     MIMIC_STAGE
{
    MIMIC_STAGE_NOTICE                                                         =  0 ,
    MIMIC_STAGE_COPY_ACTION                                                    =  1 ,
    MIMIC_STAGE_COPY_DESIRE                                                    =  2 ,
    MIMIC_STAGE_LAST                                                           =  3 ,
};


//*****************************************************************************
// ENUM Values: DETECTED_PLAYER_ACTION
//*****************************************************************************
enum     DETECTED_PLAYER_ACTION
{
    DETECTED_PLAYER_ACTION_PUT_FOOD_IN_WORSHIP_SITE                            =  0 ,
    DETECTED_PLAYER_ACTION_CAST_MAGIC_FOOD_IN_WORSHIP_SITE                     =  1 ,
    DETECTED_PLAYER_ACTION_PUT_FOOD_IN_STORAGE_PIT                             =  2 ,
    DETECTED_PLAYER_ACTION_CAST_MAGIC_FOOD_IN_STORAGE_PIT                      =  3 ,
    DETECTED_PLAYER_ACTION_PUT_WOOD_IN_STORAGE_PIT                             =  4 ,
    DETECTED_PLAYER_ACTION_CAST_MAGIC_WOOD_IN_STORAGE_PIT                      =  5 ,
    DETECTED_PLAYER_ACTION_BUILD_HOUSE                                         =  6 ,
    DETECTED_PLAYER_ACTION_PUT_WOOD_IN_BUILDING_SITE                           =  7 ,
    DETECTED_PLAYER_ACTION_CAST_MAGIC_WOOD_BY_BUILDING_SITE                    =  8 ,
    DETECTED_PLAYER_ACTION_PUT_WOOD_IN_WORKSHOP                                =  9 ,
    DETECTED_PLAYER_ACTION_CAST_MAGIC_WOOD_BY_WORKSHOP                         =  10 ,
    DETECTED_PLAYER_ACTION_PLANT_TREE                                          =  11 ,
    DETECTED_PLAYER_ACTION_GIVE_TOWN_PROTECTION_WITH_SHIELD                    =  12 ,
    DETECTED_PLAYER_ACTION_BRING_PEOPLE_TO_WORSHIP                             =  13 ,
    DETECTED_PLAYER_ACTION_MAKE_ARTEFACT                                       =  14 ,
    DETECTED_PLAYER_ACTION_DAMAGE_BY_THROWING                                  =  15 ,
    DETECTED_PLAYER_ACTION_DAMAGE_BY_THROWING_AT                               =  16 ,
    DETECTED_PLAYER_ACTION_DAMAGE_WITH_FIRE                                    =  17 ,
    DETECTED_PLAYER_ACTION_DAMAGE_WITH_MAGIC                                   =  18 ,
    DETECTED_PLAYER_ACTION_IMPRESS_BY_THROWING                                 =  19 ,
    DETECTED_PLAYER_ACTION_IMPRESS_WITH_MAGIC                                  =  20 ,
    DETECTED_PLAYER_ACTION_THROW_IN_THE_SEA                                    =  21 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_FARMER                                =  22 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_FORESTER                              =  23 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_FISHERMAN                             =  24 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_BUILDER                               =  25 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_BREEDER                               =  26 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_PROTECTION                            =  27 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_MISSIONARY                            =  28 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_CRAFTSMAN                             =  29 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_CHANGE_HOUSE                          =  30 ,
    DETECTED_PLAYER_ACTION_MAKE_DISCIPLE_WORSHIP                               =  31 ,
    DETECTED_PLAYER_ACTION_TAKE_OBJECT_HOME                                    =  32 ,
    DETECTED_PLAYER_ACTION_CAST_WATER_ON_CROPS                                 =  33 ,
    DETECTED_PLAYER_ACTION_CAST_WATER_TO_PUT_OUT_FIRE                          =  34 ,
    DETECTED_PLAYER_ACTION_STEAL_OBJECT_AND_PUT_IN_TOWN                        =  35 ,
    DETECTED_PLAYER_ACTION_STEAL_OBJECT_AND_PUT_BY_CITADEL                     =  36 ,
    DETECTED_PLAYER_ACTION_BREAK_ROCKS                                         =  37 ,
    DETECTED_PLAYER_ACTION_SACRIFICE                                           =  38 ,
    DETECTED_PLAYER_ACTION_PLAY_WITH_TOY                                       =  39 ,
    DETECTED_PLAYER_ACTION_HEAL                                                =  40 ,
    DETECTED_PLAYER_ACTION_STEAL_FOOD_FROM_FARM                                =  41 ,
    DETECTED_PLAYER_ACTION_STEAL_FOOD_FROM_STORAGE_PIT                         =  42 ,
    DETECTED_PLAYER_ACTION_STEAL_WOOD_FROM_STORAGE_PIT                         =  43 ,
    DETECTED_PLAYER_ACTION_LAST                                                =  44 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_BLUEPRINT
//*****************************************************************************
enum     CREATURE_BLUEPRINT
{
    CREATURE_BLUEPRINT_AREA_HEAL                                               =  0 ,
    CREATURE_BLUEPRINT_AREA_INVISIBLE                                          =  1 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_SHIELD                                       =  2 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_VECTOR_FLAME                                 =  3 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_VECTOR_WATER                                 =  4 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_VECTOR_LIGHTNING                             =  5 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_BOMB_FIRE                                    =  6 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_BOMB_ICE                                     =  7 ,
    CREATURE_BLUEPRINT_MAGIC_TYPE_BOMB_DECAY                                   =  8 ,
    CREATURE_BLUEPRINT_ARMY_ACTION_GENERIC_ATTACK                              =  9 ,
    CREATURE_BLUEPRINT_ARMY_ACTION_PINCER_ATTACK                               =  10 ,
    CREATURE_BLUEPRINT_LAST                                                    =  11 ,
    CREATURE_BLUEPRINT_NONE                                                    =  11 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_BLUEPRINT_TYPE
//*****************************************************************************
enum     CREATURE_BLUEPRINT_TYPE
{
    CREATURE_BLUEPRINT_TYPE_MAGIC                                              =  0 ,
    CREATURE_BLUEPRINT_TYPE_ARMY_ACTION                                        =  1 ,
    CREATURE_BLUEPRINT_TYPE_LAST                                               =  2 ,
    CREATURE_BLUEPRINT_TYPE_INVALID                                            =  3 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_NUM_ACTIONS_FOR_BLUEPRINT
//*****************************************************************************
enum     CREATURE_NUM_ACTIONS_FOR_BLUEPRINT
{
    MAX_NUM_BLUEPRINT_WAIT_ACTIONS                                             =  2 ,
    MAX_NUM_BLUEPRINT_ACTIONS                                                  =  4 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_CIVIC_ORDER
//*****************************************************************************
enum     CREATURE_CIVIC_ORDER
{
    CREATURE_CIVIC_ORDER_GATHER                                                =  0 ,
    CREATURE_CIVIC_ORDER_BUILD                                                 =  1 ,
    CREATURE_CIVIC_ORDER_ENTERTAIN                                             =  2 ,
    CREATURE_CIVIC_ORDER_MAINTAIN                                              =  3 ,
    CREATURE_CIVIC_ORDER_INVALID                                               =  4 ,
    CREATURE_CIVIC_ORDER_LAST                                                  =  4 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_ARMY_ORDER
//*****************************************************************************
enum     CREATURE_ARMY_ORDER
{
    CREATURE_ARMY_ORDER_DEFEND                                                 =  0 ,
    CREATURE_ARMY_ORDER_ATTACK                                                 =  1 ,
    CREATURE_ARMY_ORDER_HARRASS                                                =  2 ,
    CREATURE_ARMY_ORDER_SUPPORT                                                =  3 ,
    CREATURE_ARMY_ORDER_INVALID                                                =  4 ,
    CREATURE_ARMY_ORDER_LAST                                                   =  4 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_ARMY_ORDER_CONSTANTS
//*****************************************************************************
enum     CREATURE_ARMY_ORDER_CONSTANTS
{
    MAX_NUM_ARMY_ORDER_DESIRES                                                 =  6 ,
    MAX_NUM_IDLE_ARMY_ORDER_ACTIONS                                            =  3 ,
    MAX_NUM_UNSUITABLE_ARMY_ORDER_ACTIONS                                      =  1 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_PERSONAL_ORDER
//*****************************************************************************
enum     CREATURE_PERSONAL_ORDER
{
    CREATURE_PERSONAL_ORDER_BE_NICE                                            =  0 ,
    CREATURE_PERSONAL_ORDER_BE_NASTY                                           =  1 ,
    CREATURE_PERSONAL_ORDER_BE_ONESELF                                         =  2 ,
    CREATURE_PERSONAL_ORDER_INVALID                                            =  3 ,
    CREATURE_PERSONAL_ORDER_LAST                                               =  3 ,
};


//*****************************************************************************
// ENUM Values: CREATURE_DESIRE_IMPORTANCE
//*****************************************************************************
enum     CREATURE_DESIRE_IMPORTANCE
{
    CREATURE_DESIRE_IMPORTANCE_LIFE_OR_DEATH                                   =  0 ,
    CREATURE_DESIRE_IMPORTANCE_EMERGENCY                                       =  1 ,
    CREATURE_DESIRE_IMPORTANCE_SLEEP                                           =  2 ,
    CREATURE_DESIRE_IMPORTANCE_ARMY                                            =  3 ,
    CREATURE_DESIRE_IMPORTANCE_NORMAL_DESIRE                                   =  4 ,
    CREATURE_DESIRE_IMPORTANCE_LOW_PRIORITY                                    =  5 ,
    CREATURE_DESIRE_IMPORTANCE_FLUFF                                           =  6 ,
    CREATURE_DESIRE_IMPORTANCE_LAST                                            =  7 ,
};

#endif    // __CREATURE_ENUM_H__