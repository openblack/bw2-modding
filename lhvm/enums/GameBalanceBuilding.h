#ifndef	__GAME_BALANCE_BUILDING_H__
#define	__GAME_BALANCE_BUILDING_H__

// Last Saved,#2005-08-24 14:58:28#,"nwallace"

namespace	GGeneralBalanceBuilding
{
	bool	LoadAll(char* file);
};

//*****************************************************************************
// Building
//*****************************************************************************
//*****************************************************************************
// ENUM Values: BUILDING_BALANCE_TYPE
//*****************************************************************************
enum	BUILDING_BALANCE_TYPE
{
	BUILDING_BALANCE_TYPE_AZTEC_ABODE_A                                            =  0 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ABODE_A                                         =  1 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ABODE_A                                         =  2 ,
	BUILDING_BALANCE_TYPE_GREEK_ABODE_A                                            =  3 ,
	BUILDING_BALANCE_TYPE_NORSE_ABODE_A                                            =  4 ,
	BUILDING_BALANCE_TYPE_AZTEC_ABODE_B                                            =  5 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ABODE_B                                         =  6 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ABODE_B                                         =  7 ,
	BUILDING_BALANCE_TYPE_GREEK_ABODE_B                                            =  8 ,
	BUILDING_BALANCE_TYPE_NORSE_ABODE_B                                            =  9 ,
	BUILDING_BALANCE_TYPE_AZTEC_ABODE_C                                            =  10 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ABODE_C                                         =  11 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ABODE_C                                         =  12 ,
	BUILDING_BALANCE_TYPE_GREEK_ABODE_C                                            =  13 ,
	BUILDING_BALANCE_TYPE_NORSE_ABODE_C                                            =  14 ,
	BUILDING_BALANCE_TYPE_AZTEC_ABODE_D                                            =  15 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ABODE_D                                         =  16 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ABODE_D                                         =  17 ,
	BUILDING_BALANCE_TYPE_GREEK_ABODE_D                                            =  18 ,
	BUILDING_BALANCE_TYPE_NORSE_ABODE_D                                            =  19 ,
	BUILDING_BALANCE_TYPE_AZTEC_ABODE_E                                            =  20 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ABODE_E                                         =  21 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ABODE_E                                         =  22 ,
	BUILDING_BALANCE_TYPE_GREEK_ABODE_E                                            =  23 ,
	BUILDING_BALANCE_TYPE_NORSE_ABODE_E                                            =  24 ,
	BUILDING_BALANCE_TYPE_AZTEC_SKYSCRAPER                                         =  25 ,
	BUILDING_BALANCE_TYPE_JAPANESE_SKYSCRAPER                                      =  26 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_SKYSCRAPER                                      =  27 ,
	BUILDING_BALANCE_TYPE_GREEK_SKYSCRAPER                                         =  28 ,
	BUILDING_BALANCE_TYPE_NORSE_SKYSCRAPER                                         =  29 ,
	BUILDING_BALANCE_TYPE_AZTEC_MELEE_ARMOURY                                      =  30 ,
	BUILDING_BALANCE_TYPE_JAPANESE_MELEE_ARMOURY                                   =  31 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_MELEE_ARMOURY                                   =  32 ,
	BUILDING_BALANCE_TYPE_GREEK_MELEE_ARMOURY                                      =  33 ,
	BUILDING_BALANCE_TYPE_NORSE_MELEE_ARMOURY                                      =  34 ,
	BUILDING_BALANCE_TYPE_AZTEC_RANGED_ARMOURY                                     =  35 ,
	BUILDING_BALANCE_TYPE_JAPANESE_RANGED_ARMOURY                                  =  36 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_RANGED_ARMOURY                                  =  37 ,
	BUILDING_BALANCE_TYPE_GREEK_RANGED_ARMOURY                                     =  38 ,
	BUILDING_BALANCE_TYPE_NORSE_RANGED_ARMOURY                                     =  39 ,
	BUILDING_BALANCE_TYPE_AZTEC_WORKSHOP                                           =  40 ,
	BUILDING_BALANCE_TYPE_JAPANESE_WORKSHOP                                        =  41 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_WORKSHOP                                        =  42 ,
	BUILDING_BALANCE_TYPE_GREEK_WORKSHOP                                           =  43 ,
	BUILDING_BALANCE_TYPE_NORSE_WORKSHOP                                           =  44 ,
	BUILDING_BALANCE_TYPE_AZTEC_WALLS                                              =  45 ,
	BUILDING_BALANCE_TYPE_JAPANESE_WALLS                                           =  46 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_WALLS                                           =  47 ,
	BUILDING_BALANCE_TYPE_GREEK_WALLS                                              =  48 ,
	BUILDING_BALANCE_TYPE_NORSE_WALLS                                              =  49 ,
	BUILDING_BALANCE_TYPE_AZTEC_HEAVY_WALLS                                        =  50 ,
	BUILDING_BALANCE_TYPE_JAPANESE_HEAVY_WALLS                                     =  51 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_HEAVY_WALLS                                     =  52 ,
	BUILDING_BALANCE_TYPE_GREEK_HEAVY_WALLS                                        =  53 ,
	BUILDING_BALANCE_TYPE_NORSE_HEAVY_WALLS                                        =  54 ,
	BUILDING_BALANCE_TYPE_AZTEC_WALLTOWER                                          =  55 ,
	BUILDING_BALANCE_TYPE_JAPANESE_WALLTOWER                                       =  56 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_WALLTOWER                                       =  57 ,
	BUILDING_BALANCE_TYPE_GREEK_WALLTOWER                                          =  58 ,
	BUILDING_BALANCE_TYPE_NORSE_WALLTOWER                                          =  59 ,
	BUILDING_BALANCE_TYPE_AZTEC_HEAVY_WALLTOWER                                    =  60 ,
	BUILDING_BALANCE_TYPE_JAPANESE_HEAVY_WALLTOWER                                 =  61 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_HEAVY_WALLTOWER                                 =  62 ,
	BUILDING_BALANCE_TYPE_GREEK_HEAVY_WALLTOWER                                    =  63 ,
	BUILDING_BALANCE_TYPE_NORSE_HEAVY_WALLTOWER                                    =  64 ,
	BUILDING_BALANCE_TYPE_AZTEC_GATEHOUSE                                          =  65 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GATEHOUSE                                       =  66 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_GATEHOUSE                                       =  67 ,
	BUILDING_BALANCE_TYPE_GREEK_GATEHOUSE                                          =  68 ,
	BUILDING_BALANCE_TYPE_NORSE_GATEHOUSE                                          =  69 ,
	BUILDING_BALANCE_TYPE_AZTEC_HEAVY_GATEHOUSE                                    =  70 ,
	BUILDING_BALANCE_TYPE_JAPANESE_HEAVY_GATEHOUSE                                 =  71 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_HEAVY_GATEHOUSE                                 =  72 ,
	BUILDING_BALANCE_TYPE_GREEK_HEAVY_GATEHOUSE                                    =  73 ,
	BUILDING_BALANCE_TYPE_NORSE_HEAVY_GATEHOUSE                                    =  74 ,
	BUILDING_BALANCE_TYPE_AZTEC_GATE                                               =  75 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GATE                                            =  76 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_GATE                                            =  77 ,
	BUILDING_BALANCE_TYPE_GREEK_GATE                                               =  78 ,
	BUILDING_BALANCE_TYPE_NORSE_GATE                                               =  79 ,
	BUILDING_BALANCE_TYPE_AZTEC_HEAVY_GATE                                         =  80 ,
	BUILDING_BALANCE_TYPE_JAPANESE_HEAVY_GATE                                      =  81 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_HEAVY_GATE                                      =  82 ,
	BUILDING_BALANCE_TYPE_GREEK_HEAVY_GATE                                         =  83 ,
	BUILDING_BALANCE_TYPE_NORSE_HEAVY_GATE                                         =  84 ,
	BUILDING_BALANCE_TYPE_AZTEC_VILLAGE_HALL                                       =  85 ,
	BUILDING_BALANCE_TYPE_JAPANESE_VILLAGE_HALL                                    =  86 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_VILLAGE_HALL                                    =  87 ,
	BUILDING_BALANCE_TYPE_GREEK_VILLAGE_HALL                                       =  88 ,
	BUILDING_BALANCE_TYPE_NORSE_VILLAGE_HALL                                       =  89 ,
	BUILDING_BALANCE_TYPE_AZTEC_TOWN_CENTRE                                        =  90 ,
	BUILDING_BALANCE_TYPE_JAPANESE_TOWN_CENTRE                                     =  91 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_TOWN_CENTRE                                     =  92 ,
	BUILDING_BALANCE_TYPE_GREEK_TOWN_CENTRE                                        =  93 ,
	BUILDING_BALANCE_TYPE_NORSE_TOWN_CENTRE                                        =  94 ,
	BUILDING_BALANCE_TYPE_AZTEC_CITY_CENTRE                                        =  95 ,
	BUILDING_BALANCE_TYPE_JAPANESE_CITY_CENTRE                                     =  96 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_CITY_CENTRE                                     =  97 ,
	BUILDING_BALANCE_TYPE_GREEK_CITY_CENTRE                                        =  98 ,
	BUILDING_BALANCE_TYPE_NORSE_CITY_CENTRE                                        =  99 ,
	BUILDING_BALANCE_TYPE_AZTEC_METRO_CENTRE                                       =  100 ,
	BUILDING_BALANCE_TYPE_JAPANESE_METRO_CENTRE                                    =  101 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_METRO_CENTRE                                    =  102 ,
	BUILDING_BALANCE_TYPE_GREEK_METRO_CENTRE                                       =  103 ,
	BUILDING_BALANCE_TYPE_NORSE_METRO_CENTRE                                       =  104 ,
	BUILDING_BALANCE_TYPE_AZTEC_VILLAGE_STORE                                      =  105 ,
	BUILDING_BALANCE_TYPE_JAPANESE_VILLAGE_STORE                                   =  106 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_VILLAGE_STORE                                   =  107 ,
	BUILDING_BALANCE_TYPE_GREEK_VILLAGE_STORE                                      =  108 ,
	BUILDING_BALANCE_TYPE_NORSE_VILLAGE_STORE                                      =  109 ,
	BUILDING_BALANCE_TYPE_AZTEC_ALTAR                                              =  110 ,
	BUILDING_BALANCE_TYPE_JAPANESE_ALTAR                                           =  111 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_ALTAR                                           =  112 ,
	BUILDING_BALANCE_TYPE_GREEK_ALTAR                                              =  113 ,
	BUILDING_BALANCE_TYPE_NORSE_ALTAR                                              =  114 ,
	BUILDING_BALANCE_TYPE_AZTEC_FIELD                                              =  115 ,
	BUILDING_BALANCE_TYPE_JAPANESE_FIELD                                           =  116 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_FIELD                                           =  117 ,
	BUILDING_BALANCE_TYPE_GREEK_FIELD                                              =  118 ,
	BUILDING_BALANCE_TYPE_NORSE_FIELD                                              =  119 ,
	BUILDING_BALANCE_TYPE_AZTEC_CRECHE                                             =  120 ,
	BUILDING_BALANCE_TYPE_JAPANESE_CRECHE                                          =  121 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_CRECHE                                          =  122 ,
	BUILDING_BALANCE_TYPE_GREEK_CRECHE                                             =  123 ,
	BUILDING_BALANCE_TYPE_NORSE_CRECHE                                             =  124 ,
	BUILDING_BALANCE_TYPE_AZTEC_PUB                                                =  125 ,
	BUILDING_BALANCE_TYPE_JAPANESE_PUB                                             =  126 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_PUB                                             =  127 ,
	BUILDING_BALANCE_TYPE_GREEK_PUB                                                =  128 ,
	BUILDING_BALANCE_TYPE_NORSE_PUB                                                =  129 ,
	BUILDING_BALANCE_TYPE_AZTEC_TEMPLE                                             =  130 ,
	BUILDING_BALANCE_TYPE_JAPANESE_TEMPLE                                          =  131 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_TEMPLE                                          =  132 ,
	BUILDING_BALANCE_TYPE_GREEK_TEMPLE                                             =  133 ,
	BUILDING_BALANCE_TYPE_NORSE_TEMPLE                                             =  134 ,
	BUILDING_BALANCE_TYPE_AZTEC_UNIVERSITY                                         =  135 ,
	BUILDING_BALANCE_TYPE_JAPANESE_UNIVERSITY                                      =  136 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_UNIVERSITY                                      =  137 ,
	BUILDING_BALANCE_TYPE_GREEK_UNIVERSITY                                         =  138 ,
	BUILDING_BALANCE_TYPE_NORSE_UNIVERSITY                                         =  139 ,
	BUILDING_BALANCE_TYPE_AZTEC_CREATURE_PEN                                       =  140 ,
	BUILDING_BALANCE_TYPE_JAPANESE_CREATURE_PEN                                    =  141 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_CREATURE_PEN                                    =  142 ,
	BUILDING_BALANCE_TYPE_GREEK_CREATURE_PEN                                       =  143 ,
	BUILDING_BALANCE_TYPE_NORSE_CREATURE_PEN                                       =  144 ,
	BUILDING_BALANCE_TYPE_AZTEC_PRISON                                             =  145 ,
	BUILDING_BALANCE_TYPE_JAPANESE_PRISON                                          =  146 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_PRISON                                          =  147 ,
	BUILDING_BALANCE_TYPE_GREEK_PRISON                                             =  148 ,
	BUILDING_BALANCE_TYPE_NORSE_PRISON                                             =  149 ,
	BUILDING_BALANCE_TYPE_AZTEC_LUMBER_MILL                                        =  150 ,
	BUILDING_BALANCE_TYPE_JAPANESE_LUMBER_MILL                                     =  151 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_LUMBER_MILL                                     =  152 ,
	BUILDING_BALANCE_TYPE_GREEK_LUMBER_MILL                                        =  153 ,
	BUILDING_BALANCE_TYPE_NORSE_LUMBER_MILL                                        =  154 ,
	BUILDING_BALANCE_TYPE_AZTEC_GRANARY                                            =  155 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GRANARY                                         =  156 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_GRANARY                                         =  157 ,
	BUILDING_BALANCE_TYPE_GREEK_GRANARY                                            =  158 ,
	BUILDING_BALANCE_TYPE_NORSE_GRANARY                                            =  159 ,
	BUILDING_BALANCE_TYPE_AZTEC_SMELTER                                            =  160 ,
	BUILDING_BALANCE_TYPE_JAPANESE_SMELTER                                         =  161 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_SMELTER                                         =  162 ,
	BUILDING_BALANCE_TYPE_GREEK_SMELTER                                            =  163 ,
	BUILDING_BALANCE_TYPE_NORSE_SMELTER                                            =  164 ,
	BUILDING_BALANCE_TYPE_AZTEC_OLD_PERSONS_HOME                                   =  165 ,
	BUILDING_BALANCE_TYPE_JAPANESE_OLD_PERSONS_HOME                                =  166 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_OLD_PERSONS_HOME                                =  167 ,
	BUILDING_BALANCE_TYPE_GREEK_OLD_PERSONS_HOME                                   =  168 ,
	BUILDING_BALANCE_TYPE_NORSE_OLD_PERSONS_HOME                                   =  169 ,
	BUILDING_BALANCE_TYPE_AZTEC_BATH_HOUSE                                         =  170 ,
	BUILDING_BALANCE_TYPE_JAPANESE_BATH_HOUSE                                      =  171 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_BATH_HOUSE                                      =  172 ,
	BUILDING_BALANCE_TYPE_GREEK_BATH_HOUSE                                         =  173 ,
	BUILDING_BALANCE_TYPE_NORSE_BATH_HOUSE                                         =  174 ,
	BUILDING_BALANCE_TYPE_AZTEC_GRAVEYARD                                          =  175 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GRAVEYARD                                       =  176 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_GRAVEYARD                                       =  177 ,
	BUILDING_BALANCE_TYPE_GREEK_GRAVEYARD                                          =  178 ,
	BUILDING_BALANCE_TYPE_NORSE_GRAVEYARD                                          =  179 ,
	BUILDING_BALANCE_TYPE_AZTEC_AMPITHEATRE                                        =  180 ,
	BUILDING_BALANCE_TYPE_JAPANESE_AMPITHEATRE                                     =  181 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_AMPITHEATRE                                     =  182 ,
	BUILDING_BALANCE_TYPE_GREEK_AMPITHEATRE                                        =  183 ,
	BUILDING_BALANCE_TYPE_NORSE_AMPITHEATRE                                        =  184 ,
	BUILDING_BALANCE_TYPE_AZTEC_MARKET_POT                                         =  185 ,
	BUILDING_BALANCE_TYPE_JAPANESE_MARKET_POT                                      =  186 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_MARKET_POT                                      =  187 ,
	BUILDING_BALANCE_TYPE_GREEK_MARKET_POT                                         =  188 ,
	BUILDING_BALANCE_TYPE_NORSE_MARKET_POT                                         =  189 ,
	BUILDING_BALANCE_TYPE_AZTEC_MARKET_STATUE                                      =  190 ,
	BUILDING_BALANCE_TYPE_JAPANESE_MARKET_STATUE                                   =  191 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_MARKET_STATUE                                   =  192 ,
	BUILDING_BALANCE_TYPE_GREEK_MARKET_STATUE                                      =  193 ,
	BUILDING_BALANCE_TYPE_NORSE_MARKET_STATUE                                      =  194 ,
	BUILDING_BALANCE_TYPE_AZTEC_MARKET_PLANT                                       =  195 ,
	BUILDING_BALANCE_TYPE_JAPANESE_MARKET_PLANT                                    =  196 ,
	BUILDING_BALANCE_TYPE_EGYPTIAN_MARKET_PLANT                                    =  197 ,
	BUILDING_BALANCE_TYPE_GREEK_MARKET_PLANT                                       =  198 ,
	BUILDING_BALANCE_TYPE_NORSE_MARKET_PLANT                                       =  199 ,
	BUILDING_BALANCE_TYPE_HURRICANE_WONDER                                         =  200 ,
	BUILDING_BALANCE_TYPE_EARTHQUAKE_WONDER                                        =  201 ,
	BUILDING_BALANCE_TYPE_VOLCANO_WONDER                                           =  202 ,
	BUILDING_BALANCE_TYPE_VERDANT_WONDER                                           =  203 ,
	BUILDING_BALANCE_TYPE_STOPTIME_WONDER                                          =  204 ,
	BUILDING_BALANCE_TYPE_SIREN_WONDER                                             =  205 ,
	BUILDING_BALANCE_TYPE_WOMD_WONDER                                              =  206 ,
	BUILDING_BALANCE_TYPE_AZTEC_FOUNTAIN                                           =  207 ,
	BUILDING_BALANCE_TYPE_AZTEC_FOUNTAIN_GOOD                                      =  208 ,
	BUILDING_BALANCE_TYPE_AZTEC_FOUNTAIN_EVIL                                      =  209 ,
	BUILDING_BALANCE_TYPE_AZTEC_STATUE                                             =  210 ,
	BUILDING_BALANCE_TYPE_AZTEC_STATUE_GOOD                                        =  211 ,
	BUILDING_BALANCE_TYPE_AZTEC_STATUE_EVIL                                        =  212 ,
	BUILDING_BALANCE_TYPE_JAPANESE_FOUNTAIN                                        =  213 ,
	BUILDING_BALANCE_TYPE_JAPANESE_FOUNTAIN_GOOD                                   =  214 ,
	BUILDING_BALANCE_TYPE_JAPANESE_FOUNTAIN_EVIL                                   =  215 ,
	BUILDING_BALANCE_TYPE_JAPANESE_SHRINE                                          =  216 ,
	BUILDING_BALANCE_TYPE_JAPANESE_SHRINE_GOOD                                     =  217 ,
	BUILDING_BALANCE_TYPE_JAPANESE_SHRINE_EVIL                                     =  218 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GARDEN                                          =  219 ,
	BUILDING_BALANCE_TYPE_JAPANESE_GARDEN_EVIL                                     =  220 ,
	BUILDING_BALANCE_TYPE_NORSE_FOUNTAIN                                           =  221 ,
	BUILDING_BALANCE_TYPE_NORSE_FOUNTAIN_GOOD                                      =  222 ,
	BUILDING_BALANCE_TYPE_NORSE_FOUNTAIN_EVIL                                      =  223 ,
	BUILDING_BALANCE_TYPE_NORSE_STATUE                                             =  224 ,
	BUILDING_BALANCE_TYPE_NORSE_STATUE_GOOD                                        =  225 ,
	BUILDING_BALANCE_TYPE_NORSE_STATUE_EVIL                                        =  226 ,
	BUILDING_BALANCE_TYPE_GREEK_FERTILITY_STATUE                                   =  227 ,
	BUILDING_BALANCE_TYPE_GREEK_FOUNTAIN                                           =  228 ,
	BUILDING_BALANCE_TYPE_GREEK_STREET_LAMP                                        =  229 ,
	BUILDING_BALANCE_TYPE_GREEK_TORTURE_PIT                                        =  230 ,
	BUILDING_BALANCE_TYPE_GREEK_COLUMN                                             =  231 ,
	BUILDING_BALANCE_TYPE_GREEK_GARDEN                                             =  232 ,
	BUILDING_BALANCE_TYPE_GREEK_WELL                                               =  233 ,
	BUILDING_BALANCE_TYPE_GREEK_HEAD_ON_A_SPIKE                                    =  234 ,
	BUILDING_BALANCE_TYPE_GREEK_MIRACLE_ENHANCER                                   =  235 ,
	BUILDING_BALANCE_TYPE_LAST                                                     =  236 ,
};


//*****************************************************************************
// CLASS Definition: GBuildingBalance
//*****************************************************************************
class	GBuildingBalance
{
private:
	float	WoodValue;
	float	OreValue;
	float	BuildTime;
	float	CalculatedBuildTime;
	float	MaxVillagersToWorkOn;
	float	AdditionalDiscipleBuilders;
	float	AdultHousingCapacity;
	float	ChildrenHousingCapacity;
	float	AdultHousingCapacityCap;
	float	ChildrenHousingCapacityCap;
	float	InfluenceRadiusBoost;
	float	MaxAltitude;
	float	AddsToInfluence;
	float	CanBeRightClickedToDuplicate;
	float	TimeToDestroy;
	float	JobScanRadius;
	float	DesireToBuild;
	float	DesireToRepair;
	float	ObstacleAtBuildPercentage;
	float	SoundMaterial;
	float	SelectionRadiusMultiple;
	float	AlignmentForPlacement;

public:
			GBuildingBalance()
			{
				WoodValue                                                          = 0.0f;
				OreValue                                                           = 0.0f;
				BuildTime                                                          = 0.0f;
				CalculatedBuildTime                                                = 0.0f;
				MaxVillagersToWorkOn                                               = 0.0f;
				AdditionalDiscipleBuilders                                         = 0.0f;
				AdultHousingCapacity                                               = 0.0f;
				ChildrenHousingCapacity                                            = 0.0f;
				AdultHousingCapacityCap                                            = 0.0f;
				ChildrenHousingCapacityCap                                         = 0.0f;
				InfluenceRadiusBoost                                               = 0.0f;
				MaxAltitude                                                        = 0.0f;
				AddsToInfluence                                                    = 0.0f;
				CanBeRightClickedToDuplicate                                       = 0.0f;
				TimeToDestroy                                                      = 0.0f;
				JobScanRadius                                                      = 0.0f;
				DesireToBuild                                                      = 0.0f;
				DesireToRepair                                                     = 0.0f;
				ObstacleAtBuildPercentage                                          = 0.0f;
				SoundMaterial                                                      = 0.0f;
				SelectionRadiusMultiple                                            = 0.0f;
				AlignmentForPlacement                                              = 0.0f;
			}

	float	GetWoodValue() const                           { return WoodValue; }
	float	GetOreValue() const                            { return OreValue; }
	float	GetBuildTime() const                           { return BuildTime; }
	float	GetCalculatedBuildTime() const                 { return CalculatedBuildTime; }
	float	GetMaxVillagersToWorkOn() const                { return MaxVillagersToWorkOn; }
	float	GetAdditionalDiscipleBuilders() const          { return AdditionalDiscipleBuilders; }
	float	GetAdultHousingCapacity() const                { return AdultHousingCapacity; }
	float	GetChildrenHousingCapacity() const             { return ChildrenHousingCapacity; }
	float	GetAdultHousingCapacityCap() const             { return AdultHousingCapacityCap; }
	float	GetChildrenHousingCapacityCap() const          { return ChildrenHousingCapacityCap; }
	float	GetInfluenceRadiusBoost() const                { return InfluenceRadiusBoost; }
	float	GetMaxAltitude() const                         { return MaxAltitude; }
	float	GetAddsToInfluence() const                     { return AddsToInfluence; }
	float	GetCanBeRightClickedToDuplicate() const        { return CanBeRightClickedToDuplicate; }
	float	GetTimeToDestroy() const                       { return TimeToDestroy; }
	float	GetJobScanRadius() const                       { return JobScanRadius; }
	float	GetDesireToBuild() const                       { return DesireToBuild; }
	float	GetDesireToRepair() const                      { return DesireToRepair; }
	float	GetObstacleAtBuildPercentage() const           { return ObstacleAtBuildPercentage; }
	float	GetSoundMaterial() const                       { return SoundMaterial; }
	float	GetSelectionRadiusMultiple() const             { return SelectionRadiusMultiple; }
	float	GetAlignmentForPlacement() const               { return AlignmentForPlacement; }

	static	GBuildingBalance	Info[BUILDING_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// BuildingPrereq
//*****************************************************************************
//*****************************************************************************
// ENUM Values: BUILDINGPREREQ_BALANCE_TYPE
//*****************************************************************************
enum	BUILDINGPREREQ_BALANCE_TYPE
{
	BUILDINGPREREQ_BALANCE_TYPE_AZTEC_VILLAGE_HALL                                 =  0 ,
	BUILDINGPREREQ_BALANCE_TYPE_JAPANESE_VILLAGE_HALL                              =  1 ,
	BUILDINGPREREQ_BALANCE_TYPE_EGYPTIAN_VILLAGE_HALL                              =  2 ,
	BUILDINGPREREQ_BALANCE_TYPE_GREEK_VILLAGE_HALL                                 =  3 ,
	BUILDINGPREREQ_BALANCE_TYPE_NORSE_VILLAGE_HALL                                 =  4 ,
	BUILDINGPREREQ_BALANCE_TYPE_AZTEC_TOWN_CENTRE                                  =  5 ,
	BUILDINGPREREQ_BALANCE_TYPE_JAPANESE_TOWN_CENTRE                               =  6 ,
	BUILDINGPREREQ_BALANCE_TYPE_EGYPTIAN_TOWN_CENTRE                               =  7 ,
	BUILDINGPREREQ_BALANCE_TYPE_GREEK_TOWN_CENTRE                                  =  8 ,
	BUILDINGPREREQ_BALANCE_TYPE_NORSE_TOWN_CENTRE                                  =  9 ,
	BUILDINGPREREQ_BALANCE_TYPE_AZTEC_CITY_CENTRE                                  =  10 ,
	BUILDINGPREREQ_BALANCE_TYPE_JAPANESE_CITY_CENTRE                               =  11 ,
	BUILDINGPREREQ_BALANCE_TYPE_EGYPTIAN_CITY_CENTRE                               =  12 ,
	BUILDINGPREREQ_BALANCE_TYPE_GREEK_CITY_CENTRE                                  =  13 ,
	BUILDINGPREREQ_BALANCE_TYPE_NORSE_CITY_CENTRE                                  =  14 ,
	BUILDINGPREREQ_BALANCE_TYPE_AZTEC_METRO_CENTRE                                 =  15 ,
	BUILDINGPREREQ_BALANCE_TYPE_JAPANESE_METRO_CENTRE                              =  16 ,
	BUILDINGPREREQ_BALANCE_TYPE_EGYPTIAN_METRO_CENTRE                              =  17 ,
	BUILDINGPREREQ_BALANCE_TYPE_GREEK_METRO_CENTRE                                 =  18 ,
	BUILDINGPREREQ_BALANCE_TYPE_NORSE_METRO_CENTRE                                 =  19 ,
	BUILDINGPREREQ_BALANCE_TYPE_LAST                                               =  20 ,
};


//*****************************************************************************
// CLASS Definition: GBuildingPrereqBalance
//*****************************************************************************
class	GBuildingPrereqBalance
{
private:
	float	Percenttobuild;
	float	Population;

public:
			GBuildingPrereqBalance()
			{
				Percenttobuild                                                     = 0.0f;
				Population                                                         = 0.0f;
			}

	float	GetPercenttobuild() const                      { return Percenttobuild; }
	float	GetPopulation() const                          { return Population; }

	static	GBuildingPrereqBalance	Info[BUILDINGPREREQ_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// BuildingAlignment
//*****************************************************************************
//*****************************************************************************
// ENUM Values: BUILDINGALIGNMENT_BALANCE_TYPE
//*****************************************************************************
enum	BUILDINGALIGNMENT_BALANCE_TYPE
{
	BUILDINGALIGNMENT_BALANCE_TYPE_NORMAL                                          =  0 ,
	BUILDINGALIGNMENT_BALANCE_TYPE_LAST                                            =  1 ,
};


//*****************************************************************************
// CLASS Definition: GBuildingAlignmentBalance
//*****************************************************************************
class	GBuildingAlignmentBalance
{
private:
	float	MinSafeDistanceBuilding;
	float	MinSafeDistanceRoad;
	float	AlignmentThresholdBuilding;
	float	AlignmentThresholdRoad;
	float	MinDistanceBetweenTwoBuildings;
	float	RoadPlacementDistance;

public:
			GBuildingAlignmentBalance()
			{
				MinSafeDistanceBuilding                                            = 0.0f;
				MinSafeDistanceRoad                                                = 0.0f;
				AlignmentThresholdBuilding                                         = 0.0f;
				AlignmentThresholdRoad                                             = 0.0f;
				MinDistanceBetweenTwoBuildings                                     = 0.0f;
				RoadPlacementDistance                                              = 0.0f;
			}

	float	GetMinSafeDistanceBuilding() const             { return MinSafeDistanceBuilding; }
	float	GetMinSafeDistanceRoad() const                 { return MinSafeDistanceRoad; }
	float	GetAlignmentThresholdBuilding() const          { return AlignmentThresholdBuilding; }
	float	GetAlignmentThresholdRoad() const              { return AlignmentThresholdRoad; }
	float	GetMinDistanceBetweenTwoBuildings() const      { return MinDistanceBetweenTwoBuildings; }
	float	GetRoadPlacementDistance() const               { return RoadPlacementDistance; }

	static	GBuildingAlignmentBalance	Info[BUILDINGALIGNMENT_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// MigrationValues
//*****************************************************************************
//*****************************************************************************
// ENUM Values: MIGRATIONVALUES_BALANCE_TYPE
//*****************************************************************************
enum	MIGRATIONVALUES_BALANCE_TYPE
{
	MIGRATIONVALUES_BALANCE_TYPE_NORMAL                                            =  0 ,
	MIGRATIONVALUES_BALANCE_TYPE_LAST                                              =  1 ,
};


//*****************************************************************************
// CLASS Definition: GMigrationValuesBalance
//*****************************************************************************
class	GMigrationValuesBalance
{
private:
	float	SettlementMultiplier;
	float	TownMultiplier;
	float	FailureTimeout;
	float	ImmunityTimeout;
	float	PercentageIncreaseOnRejection;
	float	InitimadationThresholdIncrease;
	float	MinimumFalloffDistance;
	float	MaximumFalloffDistance;
	float	ThresholdIncreaseAtMaxDistance;

public:
			GMigrationValuesBalance()
			{
				SettlementMultiplier                                               = 0.0f;
				TownMultiplier                                                     = 0.0f;
				FailureTimeout                                                     = 0.0f;
				ImmunityTimeout                                                    = 0.0f;
				PercentageIncreaseOnRejection                                      = 0.0f;
				InitimadationThresholdIncrease                                     = 0.0f;
				MinimumFalloffDistance                                             = 0.0f;
				MaximumFalloffDistance                                             = 0.0f;
				ThresholdIncreaseAtMaxDistance                                     = 0.0f;
			}

	float	GetSettlementMultiplier() const                { return SettlementMultiplier; }
	float	GetTownMultiplier() const                      { return TownMultiplier; }
	float	GetFailureTimeout() const                      { return FailureTimeout; }
	float	GetImmunityTimeout() const                     { return ImmunityTimeout; }
	float	GetPercentageIncreaseOnRejection() const       { return PercentageIncreaseOnRejection; }
	float	GetInitimadationThresholdIncrease() const      { return InitimadationThresholdIncrease; }
	float	GetMinimumFalloffDistance() const              { return MinimumFalloffDistance; }
	float	GetMaximumFalloffDistance() const              { return MaximumFalloffDistance; }
	float	GetThresholdIncreaseAtMaxDistance() const      { return ThresholdIncreaseAtMaxDistance; }

	static	GMigrationValuesBalance	Info[MIGRATIONVALUES_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// ObjectiveTweaks
//*****************************************************************************
//*****************************************************************************
// ENUM Values: OBJECTIVETWEAKS_BALANCE_TYPE
//*****************************************************************************
enum	OBJECTIVETWEAKS_BALANCE_TYPE
{
	OBJECTIVETWEAKS_BALANCE_TYPE_NORMAL                                            =  0 ,
	OBJECTIVETWEAKS_BALANCE_TYPE_LAST                                              =  1 ,
};


//*****************************************************************************
// CLASS Definition: GObjectiveTweaksBalance
//*****************************************************************************
class	GObjectiveTweaksBalance
{
private:
	float	MostFertileLandRatio;
	float	MostImpressiveLandRatio;
	float	HappyTownRating;
	float	ConvertedToGood;
	float	ConvertedToEvil;
	float	UltimateGoodThreshold;
	float	UltimateEvilThreshold;

public:
			GObjectiveTweaksBalance()
			{
				MostFertileLandRatio                                               = 0.0f;
				MostImpressiveLandRatio                                            = 0.0f;
				HappyTownRating                                                    = 0.0f;
				ConvertedToGood                                                    = 0.0f;
				ConvertedToEvil                                                    = 0.0f;
				UltimateGoodThreshold                                              = 0.0f;
				UltimateEvilThreshold                                              = 0.0f;
			}

	float	GetMostFertileLandRatio() const                { return MostFertileLandRatio; }
	float	GetMostImpressiveLandRatio() const             { return MostImpressiveLandRatio; }
	float	GetHappyTownRating() const                     { return HappyTownRating; }
	float	GetConvertedToGood() const                     { return ConvertedToGood; }
	float	GetConvertedToEvil() const                     { return ConvertedToEvil; }
	float	GetUltimateGoodThreshold() const               { return UltimateGoodThreshold; }
	float	GetUltimateEvilThreshold() const               { return UltimateEvilThreshold; }

	static	GObjectiveTweaksBalance	Info[OBJECTIVETWEAKS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};

#endif	//	__GAME_BALANCE_BUILDING_H__