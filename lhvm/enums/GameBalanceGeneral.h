#ifndef	__GAME_BALANCE_GENERAL_H__
#define	__GAME_BALANCE_GENERAL_H__

// Last Saved,#2005-08-18 12:29:47#,"Lionhead"

//*****************************************************************************
// Town
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOWN_BALANCE_TYPE
//*****************************************************************************
enum	TOWN_BALANCE_TYPE
{
	TOWN_BALANCE_TYPE_TOWN                                                         =  0 ,
	TOWN_BALANCE_TYPE_LAST                                                         =  1 ,
};


//*****************************************************************************
// CLASS Definition: GTownBalance
//*****************************************************************************
class	GTownBalance
{
private:
	float	SecondsPerSmelt;
	float	MinutesInPrison;
	float	ConstructionTooltipPingTime;
	float	FirefliesPerMap;
	float	TributePerFirefly;
	float	UnhappyBound;
	float	HappyBound;
	float	SecondsBetweenHappinessAlignmentChange;
	float	PercentageResourceFromDemolition;
	float	NominalPopulationCap;
	float	MinimumBirthRate;
	float	BirthRateSigmoidSoftness;

public:
			GTownBalance()
			{
				SecondsPerSmelt                                                    = 0.0f;
				MinutesInPrison                                                    = 0.0f;
				ConstructionTooltipPingTime                                        = 0.0f;
				FirefliesPerMap                                                    = 0.0f;
				TributePerFirefly                                                  = 0.0f;
				UnhappyBound                                                       = 0.0f;
				HappyBound                                                         = 0.0f;
				SecondsBetweenHappinessAlignmentChange                             = 0.0f;
				PercentageResourceFromDemolition                                   = 0.0f;
				NominalPopulationCap                                               = 0.0f;
				MinimumBirthRate                                                   = 0.0f;
				BirthRateSigmoidSoftness                                           = 0.0f;
			}

	float	GetSecondsPerSmelt() const                     { return SecondsPerSmelt; }
	float	GetMinutesInPrison() const                     { return MinutesInPrison; }
	float	GetConstructionTooltipPingTime() const         { return ConstructionTooltipPingTime; }
	float	GetFirefliesPerMap() const                     { return FirefliesPerMap; }
	float	GetTributePerFirefly() const                   { return TributePerFirefly; }
	float	GetUnhappyBound() const                        { return UnhappyBound; }
	float	GetHappyBound() const                          { return HappyBound; }
	float	GetSecondsBetweenHappinessAlignmentChange() const
                                                    { return SecondsBetweenHappinessAlignmentChange; }
	float	GetPercentageResourceFromDemolition() const    { return PercentageResourceFromDemolition; }
	float	GetNominalPopulationCap() const                { return NominalPopulationCap; }
	float	GetMinimumBirthRate() const                    { return MinimumBirthRate; }
	float	GetBirthRateSigmoidSoftness() const            { return BirthRateSigmoidSoftness; }

	static	GTownBalance	Info[TOWN_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// TownDesires
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOWNDESIRES_BALANCE_TYPE
//*****************************************************************************
enum	TOWNDESIRES_BALANCE_TYPE
{
	TOWNDESIRES_BALANCE_TYPE_FOOD                                                  =  0 ,
	TOWNDESIRES_BALANCE_TYPE_WOOD                                                  =  1 ,
	TOWNDESIRES_BALANCE_TYPE_ORE                                                   =  2 ,
	TOWNDESIRES_BALANCE_TYPE_BREED                                                 =  3 ,
	TOWNDESIRES_BALANCE_TYPE_BUILD                                                 =  4 ,
	TOWNDESIRES_BALANCE_TYPE_REPAIR                                                =  5 ,
	TOWNDESIRES_BALANCE_TYPE_SECURITY                                              =  6 ,
	TOWNDESIRES_BALANCE_TYPE_ATTACK                                                =  7 ,
	TOWNDESIRES_BALANCE_TYPE_MERCY                                                 =  8 ,
	TOWNDESIRES_BALANCE_TYPE_MANA                                                  =  9 ,
	TOWNDESIRES_BALANCE_TYPE_EPIC_MANA                                             =  10 ,
	TOWNDESIRES_BALANCE_TYPE_SLEEP                                                 =  11 ,
	TOWNDESIRES_BALANCE_TYPE_SPARE_TIME                                            =  12 ,
	TOWNDESIRES_BALANCE_TYPE_MIGRATION                                             =  13 ,
	TOWNDESIRES_BALANCE_TYPE_HOMES                                                 =  14 ,
	TOWNDESIRES_BALANCE_TYPE_LAST                                                  =  15 ,
};


//*****************************************************************************
// CLASS Definition: GTownDesiresBalance
//*****************************************************************************
class	GTownDesiresBalance
{
private:
	float	SatisfactionWeights;
	float	MaxIncreasePerTurn;
	float	MaxDesireAmount;
	float	ReductionPerVillagerAssigned;
	float	Parameter1;
	float	Parameter2;
	float	Parameter3;
	float	Parameter4;

public:
			GTownDesiresBalance()
			{
				SatisfactionWeights                                                = 0.0f;
				MaxIncreasePerTurn                                                 = 0.0f;
				MaxDesireAmount                                                    = 0.0f;
				ReductionPerVillagerAssigned                                       = 0.0f;
				Parameter1                                                         = 0.0f;
				Parameter2                                                         = 0.0f;
				Parameter3                                                         = 0.0f;
				Parameter4                                                         = 0.0f;
			}

	float	GetSatisfactionWeights() const                 { return SatisfactionWeights; }
	float	GetMaxIncreasePerTurn() const                  { return MaxIncreasePerTurn; }
	float	GetMaxDesireAmount() const                     { return MaxDesireAmount; }
	float	GetReductionPerVillagerAssigned() const        { return ReductionPerVillagerAssigned; }
	float	GetParameter1() const                          { return Parameter1; }
	float	GetParameter2() const                          { return Parameter2; }
	float	GetParameter3() const                          { return Parameter3; }
	float	GetParameter4() const                          { return Parameter4; }

	static	GTownDesiresBalance	Info[TOWNDESIRES_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// HandPos
//*****************************************************************************
//*****************************************************************************
// ENUM Values: HANDPOS_BALANCE_TYPE
//*****************************************************************************
enum	HANDPOS_BALANCE_TYPE
{
	HANDPOS_BALANCE_TYPE_HAND                                                      =  0 ,
	HANDPOS_BALANCE_TYPE_LAST                                                      =  1 ,
};


//*****************************************************************************
// CLASS Definition: GHandPosBalance
//*****************************************************************************
class	GHandPosBalance
{
private:
	float	Clearobjectdistance;
	float	Handaddedheight;
	float	Handaddeddepth;
	float	Addedheightwithobject;
	float	Minhandheight;
	float	Closehanddistance;
	float	Normalhanddistance;
	float	Maxhanddistance;
	float	Normalscale;
	float	Minimumscale;
	float	Minhandscalingfactor;
	float	Leanspeedthreshold;
	float	Raiseheight;
	float	Timeforidle;
	float	Idlechance;
	float	Hardfistspeed;
	float	Gentlefistwait;
	float	Hardcreaturefistspeed;
	float	Gentlecreaturefistwait;
	float	Creaturefistforcemultiple;
	float	Rewardcreaturefistspeed;
	float	Gentlecreaturefistrewardwait;

public:
			GHandPosBalance()
			{
				Clearobjectdistance                                                = 0.0f;
				Handaddedheight                                                    = 0.0f;
				Handaddeddepth                                                     = 0.0f;
				Addedheightwithobject                                              = 0.0f;
				Minhandheight                                                      = 0.0f;
				Closehanddistance                                                  = 0.0f;
				Normalhanddistance                                                 = 0.0f;
				Maxhanddistance                                                    = 0.0f;
				Normalscale                                                        = 0.0f;
				Minimumscale                                                       = 0.0f;
				Minhandscalingfactor                                               = 0.0f;
				Leanspeedthreshold                                                 = 0.0f;
				Raiseheight                                                        = 0.0f;
				Timeforidle                                                        = 0.0f;
				Idlechance                                                         = 0.0f;
				Hardfistspeed                                                      = 0.0f;
				Gentlefistwait                                                     = 0.0f;
				Hardcreaturefistspeed                                              = 0.0f;
				Gentlecreaturefistwait                                             = 0.0f;
				Creaturefistforcemultiple                                          = 0.0f;
				Rewardcreaturefistspeed                                            = 0.0f;
				Gentlecreaturefistrewardwait                                       = 0.0f;
			}

	float	GetClearobjectdistance() const                 { return Clearobjectdistance; }
	float	GetHandaddedheight() const                     { return Handaddedheight; }
	float	GetHandaddeddepth() const                      { return Handaddeddepth; }
	float	GetAddedheightwithobject() const               { return Addedheightwithobject; }
	float	GetMinhandheight() const                       { return Minhandheight; }
	float	GetClosehanddistance() const                   { return Closehanddistance; }
	float	GetNormalhanddistance() const                  { return Normalhanddistance; }
	float	GetMaxhanddistance() const                     { return Maxhanddistance; }
	float	GetNormalscale() const                         { return Normalscale; }
	float	GetMinimumscale() const                        { return Minimumscale; }
	float	GetMinhandscalingfactor() const                { return Minhandscalingfactor; }
	float	GetLeanspeedthreshold() const                  { return Leanspeedthreshold; }
	float	GetRaiseheight() const                         { return Raiseheight; }
	float	GetTimeforidle() const                         { return Timeforidle; }
	float	GetIdlechance() const                          { return Idlechance; }
	float	GetHardfistspeed() const                       { return Hardfistspeed; }
	float	GetGentlefistwait() const                      { return Gentlefistwait; }
	float	GetHardcreaturefistspeed() const               { return Hardcreaturefistspeed; }
	float	GetGentlecreaturefistwait() const              { return Gentlecreaturefistwait; }
	float	GetCreaturefistforcemultiple() const           { return Creaturefistforcemultiple; }
	float	GetRewardcreaturefistspeed() const             { return Rewardcreaturefistspeed; }
	float	GetGentlecreaturefistrewardwait() const        { return Gentlecreaturefistrewardwait; }

	static	GHandPosBalance	Info[HANDPOS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Pickup
//*****************************************************************************
//*****************************************************************************
// ENUM Values: PICKUP_BALANCE_TYPE
//*****************************************************************************
enum	PICKUP_BALANCE_TYPE
{
	PICKUP_BALANCE_TYPE_VILLAGER                                                   =  0 ,
	PICKUP_BALANCE_TYPE_SMALLOBJECT                                                =  1 ,
	PICKUP_BALANCE_TYPE_MEDIUMOBJECT                                               =  2 ,
	PICKUP_BALANCE_TYPE_LARGEOBJECT                                                =  3 ,
	PICKUP_BALANCE_TYPE_ROAD                                                       =  4 ,
	PICKUP_BALANCE_TYPE_SMALLTREE                                                  =  5 ,
	PICKUP_BALANCE_TYPE_TREE                                                       =  6 ,
	PICKUP_BALANCE_TYPE_SPELLSEED                                                  =  7 ,
	PICKUP_BALANCE_TYPE_ABODE                                                      =  8 ,
	PICKUP_BALANCE_TYPE_ARMYFLAG                                                   =  9 ,
	PICKUP_BALANCE_TYPE_FIELD                                                      =  10 ,
	PICKUP_BALANCE_TYPE_TOWER                                                      =  11 ,
	PICKUP_BALANCE_TYPE_LAST                                                       =  12 ,
};


//*****************************************************************************
// CLASS Definition: GPickupBalance
//*****************************************************************************
class	GPickupBalance
{
private:
	float	Secondstopickup;
	float	Manaforsinglepickup;
	float	Levelforsinglepickup;
	float	Manapermultipickup;
	float	Levelormultipickup;

public:
			GPickupBalance()
			{
				Secondstopickup                                                    = 0.0f;
				Manaforsinglepickup                                                = 0.0f;
				Levelforsinglepickup                                               = 0.0f;
				Manapermultipickup                                                 = 0.0f;
				Levelormultipickup                                                 = 0.0f;
			}

	float	GetSecondstopickup() const                     { return Secondstopickup; }
	float	GetManaforsinglepickup() const                 { return Manaforsinglepickup; }
	float	GetLevelforsinglepickup() const                { return Levelforsinglepickup; }
	float	GetManapermultipickup() const                  { return Manapermultipickup; }
	float	GetLevelormultipickup() const                  { return Levelormultipickup; }

	static	GPickupBalance	Info[PICKUP_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// ManaCost
//*****************************************************************************
//*****************************************************************************
// ENUM Values: MANACOST_BALANCE_TYPE
//*****************************************************************************
enum	MANACOST_BALANCE_TYPE
{
	MANACOST_BALANCE_TYPE_CREATEDISCIPLE                                           =  0 ,
	MANACOST_BALANCE_TYPE_PLACEBLUEPRINT                                           =  1 ,
	MANACOST_BALANCE_TYPE_INITIATEFIST                                             =  2 ,
	MANACOST_BALANCE_TYPE_INITIATECREATUREFIST                                     =  3 ,
	MANACOST_BALANCE_TYPE_PERSECONDINFIST                                          =  4 ,
	MANACOST_BALANCE_TYPE_ENTERTIMECHANGE                                          =  5 ,
	MANACOST_BALANCE_TYPE_PERHOURCHANGED                                           =  6 ,
	MANACOST_BALANCE_TYPE_CRACKROCK                                                =  7 ,
	MANACOST_BALANCE_TYPE_TAPBUILDING                                              =  8 ,
	MANACOST_BALANCE_TYPE_GODBUILD                                                 =  9 ,
	MANACOST_BALANCE_TYPE_MULTIPICKUP                                              =  10 ,
	MANACOST_BALANCE_TYPE_GESTURES                                                 =  11 ,
	MANACOST_BALANCE_TYPE_LAST                                                     =  12 ,
};


//*****************************************************************************
// CLASS Definition: GManaCostBalance
//*****************************************************************************
class	GManaCostBalance
{
private:
	float	Manacost;
	float	Levelrequired;

public:
			GManaCostBalance()
			{
				Manacost                                                           = 0.0f;
				Levelrequired                                                      = 0.0f;
			}

	float	GetManacost() const                            { return Manacost; }
	float	GetLevelrequired() const                       { return Levelrequired; }

	static	GManaCostBalance	Info[MANACOST_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Interface
//*****************************************************************************
//*****************************************************************************
// ENUM Values: INTERFACE_BALANCE_TYPE
//*****************************************************************************
enum	INTERFACE_BALANCE_TYPE
{
	INTERFACE_BALANCE_TYPE_INTERFACE                                               =  0 ,
	INTERFACE_BALANCE_TYPE_LAST                                                    =  1 ,
};


//*****************************************************************************
// CLASS Definition: GInterfaceBalance
//*****************************************************************************
class	GInterfaceBalance
{
private:
	float	Searchradiusnormal;
	float	Searchradiussmall;
	float	Distancenormal;
	float	Distanceclose;
	float	Villagerpriority;
	float	Roadpriority;
	float	Flagpriority;
	float	Spellseedpriority;
	float	Buildingpriority;
	float	Unbuiltbuildingpriority;
	float	Scriptpositionobjectpriority;
	float	Raisemousedytody;
	float	Rotatemousedeadzone;
	float	Rotatemousemultiple;
	float	Skygrabmousedeadzone;
	float	Skygrabmousemultiple;
	float	Godbuildminamountpertick;
	float	Godbuildmaxamountpertick;
	float	Godbuildsecondstorampupover;
	float	Godbuildresourcewaste;
	float	Godbuildusemana;
	float	PickupMaxAmountPerTick;
	float	PickupMinAmountPerTick;
	float	PickupSecondsToRampupOver;

public:
			GInterfaceBalance()
			{
				Searchradiusnormal                                                 = 0.0f;
				Searchradiussmall                                                  = 0.0f;
				Distancenormal                                                     = 0.0f;
				Distanceclose                                                      = 0.0f;
				Villagerpriority                                                   = 0.0f;
				Roadpriority                                                       = 0.0f;
				Flagpriority                                                       = 0.0f;
				Spellseedpriority                                                  = 0.0f;
				Buildingpriority                                                   = 0.0f;
				Unbuiltbuildingpriority                                            = 0.0f;
				Scriptpositionobjectpriority                                       = 0.0f;
				Raisemousedytody                                                   = 0.0f;
				Rotatemousedeadzone                                                = 0.0f;
				Rotatemousemultiple                                                = 0.0f;
				Skygrabmousedeadzone                                               = 0.0f;
				Skygrabmousemultiple                                               = 0.0f;
				Godbuildminamountpertick                                           = 0.0f;
				Godbuildmaxamountpertick                                           = 0.0f;
				Godbuildsecondstorampupover                                        = 0.0f;
				Godbuildresourcewaste                                              = 0.0f;
				Godbuildusemana                                                    = 0.0f;
				PickupMaxAmountPerTick                                             = 0.0f;
				PickupMinAmountPerTick                                             = 0.0f;
				PickupSecondsToRampupOver                                          = 0.0f;
			}

	float	GetSearchradiusnormal() const                  { return Searchradiusnormal; }
	float	GetSearchradiussmall() const                   { return Searchradiussmall; }
	float	GetDistancenormal() const                      { return Distancenormal; }
	float	GetDistanceclose() const                       { return Distanceclose; }
	float	GetVillagerpriority() const                    { return Villagerpriority; }
	float	GetRoadpriority() const                        { return Roadpriority; }
	float	GetFlagpriority() const                        { return Flagpriority; }
	float	GetSpellseedpriority() const                   { return Spellseedpriority; }
	float	GetBuildingpriority() const                    { return Buildingpriority; }
	float	GetUnbuiltbuildingpriority() const             { return Unbuiltbuildingpriority; }
	float	GetScriptpositionobjectpriority() const        { return Scriptpositionobjectpriority; }
	float	GetRaisemousedytody() const                    { return Raisemousedytody; }
	float	GetRotatemousedeadzone() const                 { return Rotatemousedeadzone; }
	float	GetRotatemousemultiple() const                 { return Rotatemousemultiple; }
	float	GetSkygrabmousedeadzone() const                { return Skygrabmousedeadzone; }
	float	GetSkygrabmousemultiple() const                { return Skygrabmousemultiple; }
	float	GetGodbuildminamountpertick() const            { return Godbuildminamountpertick; }
	float	GetGodbuildmaxamountpertick() const            { return Godbuildmaxamountpertick; }
	float	GetGodbuildsecondstorampupover() const         { return Godbuildsecondstorampupover; }
	float	GetGodbuildresourcewaste() const               { return Godbuildresourcewaste; }
	float	GetGodbuildusemana() const                     { return Godbuildusemana; }
	float	GetPickupMaxAmountPerTick() const              { return PickupMaxAmountPerTick; }
	float	GetPickupMinAmountPerTick() const              { return PickupMinAmountPerTick; }
	float	GetPickupSecondsToRampupOver() const           { return PickupSecondsToRampupOver; }

	static	GInterfaceBalance	Info[INTERFACE_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Productivity
//*****************************************************************************
//*****************************************************************************
// ENUM Values: PRODUCTIVITY_BALANCE_TYPE
//*****************************************************************************
enum	PRODUCTIVITY_BALANCE_TYPE
{
	PRODUCTIVITY_BALANCE_TYPE_DEFAULT                                              =  0 ,
	PRODUCTIVITY_BALANCE_TYPE_LAST                                                 =  1 ,
};


//*****************************************************************************
// CLASS Definition: GProductivityBalance
//*****************************************************************************
class	GProductivityBalance
{
private:
	float	ScoreForBuildingSites;
	float	ScoreForHomelessVillagers;
	float	DistanceForBuildingSites;
	float	DistanceForHomelessVillagers;
	float	ScoreForBadReactions;
	float	ScoreForGoodReactions;
	float	PercentOfTargetProductivity;

public:
			GProductivityBalance()
			{
				ScoreForBuildingSites                                              = 0.0f;
				ScoreForHomelessVillagers                                          = 0.0f;
				DistanceForBuildingSites                                           = 0.0f;
				DistanceForHomelessVillagers                                       = 0.0f;
				ScoreForBadReactions                                               = 0.0f;
				ScoreForGoodReactions                                              = 0.0f;
				PercentOfTargetProductivity                                        = 0.0f;
			}

	float	GetScoreForBuildingSites() const               { return ScoreForBuildingSites; }
	float	GetScoreForHomelessVillagers() const           { return ScoreForHomelessVillagers; }
	float	GetDistanceForBuildingSites() const            { return DistanceForBuildingSites; }
	float	GetDistanceForHomelessVillagers() const        { return DistanceForHomelessVillagers; }
	float	GetScoreForBadReactions() const                { return ScoreForBadReactions; }
	float	GetScoreForGoodReactions() const               { return ScoreForGoodReactions; }
	float	GetPercentOfTargetProductivity() const         { return PercentOfTargetProductivity; }

	static	GProductivityBalance	Info[PRODUCTIVITY_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// SpreadableEffects
//*****************************************************************************
//*****************************************************************************
// ENUM Values: SPREADABLEEFFECTS_BALANCE_TYPE
//*****************************************************************************
enum	SPREADABLEEFFECTS_BALANCE_TYPE
{
	SPREADABLEEFFECTS_BALANCE_TYPE_HEAT                                            =  0 ,
	SPREADABLEEFFECTS_BALANCE_TYPE_LAST                                            =  1 ,
};


//*****************************************************************************
// CLASS Definition: GSpreadableEffectsBalance
//*****************************************************************************
class	GSpreadableEffectsBalance
{
private:
	float	MaxRadius;
	float	PositiveDecayTime;
	float	PositiveSpreadTime;
	float	PositiveForcedDamageTime;
	float	NegativeDecayTime;
	float	NegativeSpreadTime;
	float	NegativeForcedDamageTime;

public:
			GSpreadableEffectsBalance()
			{
				MaxRadius                                                          = 0.0f;
				PositiveDecayTime                                                  = 0.0f;
				PositiveSpreadTime                                                 = 0.0f;
				PositiveForcedDamageTime                                           = 0.0f;
				NegativeDecayTime                                                  = 0.0f;
				NegativeSpreadTime                                                 = 0.0f;
				NegativeForcedDamageTime                                           = 0.0f;
			}

	float	GetMaxRadius() const                           { return MaxRadius; }
	float	GetPositiveDecayTime() const                   { return PositiveDecayTime; }
	float	GetPositiveSpreadTime() const                  { return PositiveSpreadTime; }
	float	GetPositiveForcedDamageTime() const            { return PositiveForcedDamageTime; }
	float	GetNegativeDecayTime() const                   { return NegativeDecayTime; }
	float	GetNegativeSpreadTime() const                  { return NegativeSpreadTime; }
	float	GetNegativeForcedDamageTime() const            { return NegativeForcedDamageTime; }

	static	GSpreadableEffectsBalance	Info[SPREADABLEEFFECTS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Impressiveness
//*****************************************************************************
//*****************************************************************************
// ENUM Values: IMPRESSIVENESS_BALANCE_TYPE
//*****************************************************************************
enum	IMPRESSIVENESS_BALANCE_TYPE
{
	IMPRESSIVENESS_BALANCE_TYPE_DEFAULT                                            =  0 ,
	IMPRESSIVENESS_BALANCE_TYPE_LAST                                               =  1 ,
};


//*****************************************************************************
// CLASS Definition: GImpressivenessBalance
//*****************************************************************************
class	GImpressivenessBalance
{
private:
	float	MultiplierForPopulation;
	float	MultiplierForDevelopment;
	float	MultiplierForEnvironment;
	float	MultiplierForDesires;
	float	MultiplierForDefence;
	float	MultiplierForArmies;
	float	MultiplierForArrangement;
	float	MultiplierForAesthetics;
	float	HousedPersonScore;
	float	HomelessPersonPenalty;
	float	ScoreForRoadConnected;
	float	ScoreForManuallyRotated;
	float	PercentageOfAlignmentToUse;
	float	ScoreForMaxedAlignment;
	float	LowerBoundForImpressivenessFalloff;

public:
			GImpressivenessBalance()
			{
				MultiplierForPopulation                                            = 0.0f;
				MultiplierForDevelopment                                           = 0.0f;
				MultiplierForEnvironment                                           = 0.0f;
				MultiplierForDesires                                               = 0.0f;
				MultiplierForDefence                                               = 0.0f;
				MultiplierForArmies                                                = 0.0f;
				MultiplierForArrangement                                           = 0.0f;
				MultiplierForAesthetics                                            = 0.0f;
				HousedPersonScore                                                  = 0.0f;
				HomelessPersonPenalty                                              = 0.0f;
				ScoreForRoadConnected                                              = 0.0f;
				ScoreForManuallyRotated                                            = 0.0f;
				PercentageOfAlignmentToUse                                         = 0.0f;
				ScoreForMaxedAlignment                                             = 0.0f;
				LowerBoundForImpressivenessFalloff                                 = 0.0f;
			}

	float	GetMultiplierForPopulation() const             { return MultiplierForPopulation; }
	float	GetMultiplierForDevelopment() const            { return MultiplierForDevelopment; }
	float	GetMultiplierForEnvironment() const            { return MultiplierForEnvironment; }
	float	GetMultiplierForDesires() const                { return MultiplierForDesires; }
	float	GetMultiplierForDefence() const                { return MultiplierForDefence; }
	float	GetMultiplierForArmies() const                 { return MultiplierForArmies; }
	float	GetMultiplierForArrangement() const            { return MultiplierForArrangement; }
	float	GetMultiplierForAesthetics() const             { return MultiplierForAesthetics; }
	float	GetHousedPersonScore() const                   { return HousedPersonScore; }
	float	GetHomelessPersonPenalty() const               { return HomelessPersonPenalty; }
	float	GetScoreForRoadConnected() const               { return ScoreForRoadConnected; }
	float	GetScoreForManuallyRotated() const             { return ScoreForManuallyRotated; }
	float	GetPercentageOfAlignmentToUse() const          { return PercentageOfAlignmentToUse; }
	float	GetScoreForMaxedAlignment() const              { return ScoreForMaxedAlignment; }
	float	GetLowerBoundForImpressivenessFalloff() const  { return LowerBoundForImpressivenessFalloff; }

	static	GImpressivenessBalance	Info[IMPRESSIVENESS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// ImpressiveGroups
//*****************************************************************************
//*****************************************************************************
// ENUM Values: IMPRESSIVEGROUPS_BALANCE_TYPE
//*****************************************************************************
enum	IMPRESSIVEGROUPS_BALANCE_TYPE
{
	IMPRESSIVEGROUPS_BALANCE_TYPE_DEFAULT                                          =  0 ,
	IMPRESSIVEGROUPS_BALANCE_TYPE_LAST                                             =  1 ,
};


//*****************************************************************************
// CLASS Definition: GImpressiveGroupsBalance
//*****************************************************************************
class	GImpressiveGroupsBalance
{
private:
	float	DwellingScore;
	float	CivicScore;
	float	IndustrialScore;
	float	EmbellishmentScore;
	float	MilitaryScore;
	float	EnclosedTownScore;
	float	ChargedWonderScore;
	float	FiredWonderScore;
	float	AccumalativeFiring;

public:
			GImpressiveGroupsBalance()
			{
				DwellingScore                                                      = 0.0f;
				CivicScore                                                         = 0.0f;
				IndustrialScore                                                    = 0.0f;
				EmbellishmentScore                                                 = 0.0f;
				MilitaryScore                                                      = 0.0f;
				EnclosedTownScore                                                  = 0.0f;
				ChargedWonderScore                                                 = 0.0f;
				FiredWonderScore                                                   = 0.0f;
				AccumalativeFiring                                                 = 0.0f;
			}

	float	GetDwellingScore() const                       { return DwellingScore; }
	float	GetCivicScore() const                          { return CivicScore; }
	float	GetIndustrialScore() const                     { return IndustrialScore; }
	float	GetEmbellishmentScore() const                  { return EmbellishmentScore; }
	float	GetMilitaryScore() const                       { return MilitaryScore; }
	float	GetEnclosedTownScore() const                   { return EnclosedTownScore; }
	float	GetChargedWonderScore() const                  { return ChargedWonderScore; }
	float	GetFiredWonderScore() const                    { return FiredWonderScore; }
	float	GetAccumalativeFiring() const                  { return AccumalativeFiring; }

	static	GImpressiveGroupsBalance	Info[IMPRESSIVEGROUPS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Refinery
//*****************************************************************************
//*****************************************************************************
// ENUM Values: REFINERY_BALANCE_TYPE
//*****************************************************************************
enum	REFINERY_BALANCE_TYPE
{
	REFINERY_BALANCE_TYPE_SMELTER                                                  =  0 ,
	REFINERY_BALANCE_TYPE_GRANARY                                                  =  1 ,
	REFINERY_BALANCE_TYPE_LUMBER_MILL                                              =  2 ,
	REFINERY_BALANCE_TYPE_LAST                                                     =  3 ,
};


//*****************************************************************************
// CLASS Definition: GRefineryBalance
//*****************************************************************************
class	GRefineryBalance
{
private:
	float	PercentIncrement;
	float	FalloffPerDuplicate;

public:
			GRefineryBalance()
			{
				PercentIncrement                                                   = 0.0f;
				FalloffPerDuplicate                                                = 0.0f;
			}

	float	GetPercentIncrement() const                    { return PercentIncrement; }
	float	GetFalloffPerDuplicate() const                 { return FalloffPerDuplicate; }

	static	GRefineryBalance	Info[REFINERY_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// TooltipClass
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOOLTIPCLASS_BALANCE_TYPE
//*****************************************************************************
enum	TOOLTIPCLASS_BALANCE_TYPE
{
	TOOLTIPCLASS_BALANCE_TYPE_EMERGENCY                                            =  0 ,
	TOOLTIPCLASS_BALANCE_TYPE_QUICKINFO                                            =  1 ,
	TOOLTIPCLASS_BALANCE_TYPE_HOLDINFO                                             =  2 ,
	TOOLTIPCLASS_BALANCE_TYPE_GLOBAL                                               =  3 ,
	TOOLTIPCLASS_BALANCE_TYPE_DESIRE                                               =  4 ,
	TOOLTIPCLASS_BALANCE_TYPE_HISTORY                                              =  5 ,
	TOOLTIPCLASS_BALANCE_TYPE_INHAND1                                              =  6 ,
	TOOLTIPCLASS_BALANCE_TYPE_INHAND2                                              =  7 ,
	TOOLTIPCLASS_BALANCE_TYPE_TOOLBAR                                              =  8 ,
	TOOLTIPCLASS_BALANCE_TYPE_LAST                                                 =  9 ,
};


//*****************************************************************************
// CLASS Definition: GTooltipClassBalance
//*****************************************************************************
class	GTooltipClassBalance
{
private:
	float	PreFadeIn;
	float	FadeIn;
	float	FadeOut;
	float	MinDuration;
	float	MaxDuration;
	float	MouseSpeed;

public:
			GTooltipClassBalance()
			{
				PreFadeIn                                                          = 0.0f;
				FadeIn                                                             = 0.0f;
				FadeOut                                                            = 0.0f;
				MinDuration                                                        = 0.0f;
				MaxDuration                                                        = 0.0f;
				MouseSpeed                                                         = 0.0f;
			}

	float	GetPreFadeIn() const                           { return PreFadeIn; }
	float	GetFadeIn() const                              { return FadeIn; }
	float	GetFadeOut() const                             { return FadeOut; }
	float	GetMinDuration() const                         { return MinDuration; }
	float	GetMaxDuration() const                         { return MaxDuration; }
	float	GetMouseSpeed() const                          { return MouseSpeed; }

	static	GTooltipClassBalance	Info[TOOLTIPCLASS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// TooltipData
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOOLTIPDATA_BALANCE_TYPE
//*****************************************************************************
enum	TOOLTIPDATA_BALANCE_TYPE
{
	TOOLTIPDATA_BALANCE_TYPE_DEFAULT                                               =  0 ,
	TOOLTIPDATA_BALANCE_TYPE_LAST                                                  =  1 ,
};


//*****************************************************************************
// CLASS Definition: GTooltipDataBalance
//*****************************************************************************
class	GTooltipDataBalance
{
private:
	float	DesireToBeShown;
	float	MaxHeightHandOverVisible;
	float	MaxHeightEffectedVisible;
	float	EnemyBuildingDelay;
	float	EmergencyRepairAutoDisplay;
	float	PopupDelayScale;
	float	PopupDelayMax;
	float	ZoomedOutExtraDelay;

public:
			GTooltipDataBalance()
			{
				DesireToBeShown                                                    = 0.0f;
				MaxHeightHandOverVisible                                           = 0.0f;
				MaxHeightEffectedVisible                                           = 0.0f;
				EnemyBuildingDelay                                                 = 0.0f;
				EmergencyRepairAutoDisplay                                         = 0.0f;
				PopupDelayScale                                                    = 0.0f;
				PopupDelayMax                                                      = 0.0f;
				ZoomedOutExtraDelay                                                = 0.0f;
			}

	float	GetDesireToBeShown() const                     { return DesireToBeShown; }
	float	GetMaxHeightHandOverVisible() const            { return MaxHeightHandOverVisible; }
	float	GetMaxHeightEffectedVisible() const            { return MaxHeightEffectedVisible; }
	float	GetEnemyBuildingDelay() const                  { return EnemyBuildingDelay; }
	float	GetEmergencyRepairAutoDisplay() const          { return EmergencyRepairAutoDisplay; }
	float	GetPopupDelayScale() const                     { return PopupDelayScale; }
	float	GetPopupDelayMax() const                       { return PopupDelayMax; }
	float	GetZoomedOutExtraDelay() const                 { return ZoomedOutExtraDelay; }

	static	GTooltipDataBalance	Info[TOOLTIPDATA_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Influence
//*****************************************************************************
//*****************************************************************************
// ENUM Values: INFLUENCE_BALANCE_TYPE
//*****************************************************************************
enum	INFLUENCE_BALANCE_TYPE
{
	INFLUENCE_BALANCE_TYPE_DEFAULT                                                 =  0 ,
	INFLUENCE_BALANCE_TYPE_LAST                                                    =  1 ,
};


//*****************************************************************************
// CLASS Definition: GInfluenceBalance
//*****************************************************************************
class	GInfluenceBalance
{
private:
	float	Townimpressivenessscaler;
	float	TownImpressivenessWorshipperBonus;
	float	Radius;
	float	Maximumdistance;
	float	Maximumtime;
	float	Usemana;
	float	Useinfluence;
	float	Useworshippers;

public:
			GInfluenceBalance()
			{
				Townimpressivenessscaler                                           = 0.0f;
				TownImpressivenessWorshipperBonus                                  = 0.0f;
				Radius                                                             = 0.0f;
				Maximumdistance                                                    = 0.0f;
				Maximumtime                                                        = 0.0f;
				Usemana                                                            = 0.0f;
				Useinfluence                                                       = 0.0f;
				Useworshippers                                                     = 0.0f;
			}

	float	GetTownimpressivenessscaler() const            { return Townimpressivenessscaler; }
	float	GetTownImpressivenessWorshipperBonus() const   { return TownImpressivenessWorshipperBonus; }
	float	GetRadius() const                              { return Radius; }
	float	GetMaximumdistance() const                     { return Maximumdistance; }
	float	GetMaximumtime() const                         { return Maximumtime; }
	float	GetUsemana() const                             { return Usemana; }
	float	GetUseinfluence() const                        { return Useinfluence; }
	float	GetUseworshippers() const                      { return Useworshippers; }

	static	GInfluenceBalance	Info[INFLUENCE_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// BuildingPlacementSpline
//*****************************************************************************
//*****************************************************************************
// ENUM Values: BUILDINGPLACEMENTSPLINE_BALANCE_TYPE
//*****************************************************************************
enum	BUILDINGPLACEMENTSPLINE_BALANCE_TYPE
{
	BUILDINGPLACEMENTSPLINE_BALANCE_TYPE_ROADS                                     =  0 ,
	BUILDINGPLACEMENTSPLINE_BALANCE_TYPE_WALLS                                     =  1 ,
	BUILDINGPLACEMENTSPLINE_BALANCE_TYPE_LAST                                      =  2 ,
};


//*****************************************************************************
// CLASS Definition: GBuildingPlacementSplineBalance
//*****************************************************************************
class	GBuildingPlacementSplineBalance
{
private:
	float	Maximumlength;
	float	Minimumlength;
	float	Distancebetweenpoints;
	float	Stickyattachdistance;
	float	Stickydetachdistance;
	float	Connectingdistance;
	float	Minimumdistancetoself;
	float	Canbuildonuneventerrain;
	float	Maximumlevelofuneventerrain;
	float	Distancebetweenobjects;

public:
			GBuildingPlacementSplineBalance()
			{
				Maximumlength                                                      = 0.0f;
				Minimumlength                                                      = 0.0f;
				Distancebetweenpoints                                              = 0.0f;
				Stickyattachdistance                                               = 0.0f;
				Stickydetachdistance                                               = 0.0f;
				Connectingdistance                                                 = 0.0f;
				Minimumdistancetoself                                              = 0.0f;
				Canbuildonuneventerrain                                            = 0.0f;
				Maximumlevelofuneventerrain                                        = 0.0f;
				Distancebetweenobjects                                             = 0.0f;
			}

	float	GetMaximumlength() const                       { return Maximumlength; }
	float	GetMinimumlength() const                       { return Minimumlength; }
	float	GetDistancebetweenpoints() const               { return Distancebetweenpoints; }
	float	GetStickyattachdistance() const                { return Stickyattachdistance; }
	float	GetStickydetachdistance() const                { return Stickydetachdistance; }
	float	GetConnectingdistance() const                  { return Connectingdistance; }
	float	GetMinimumdistancetoself() const               { return Minimumdistancetoself; }
	float	GetCanbuildonuneventerrain() const             { return Canbuildonuneventerrain; }
	float	GetMaximumlevelofuneventerrain() const         { return Maximumlevelofuneventerrain; }
	float	GetDistancebetweenobjects() const              { return Distancebetweenobjects; }

	static	GBuildingPlacementSplineBalance	Info[BUILDINGPLACEMENTSPLINE_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// Personalisation
//*****************************************************************************
//*****************************************************************************
// ENUM Values: PERSONALISATION_BALANCE_TYPE
//*****************************************************************************
enum	PERSONALISATION_BALANCE_TYPE
{
	PERSONALISATION_BALANCE_TYPE_DEFAULT                                           =  0 ,
	PERSONALISATION_BALANCE_TYPE_LAST                                              =  1 ,
};


//*****************************************************************************
// CLASS Definition: GPersonalisationBalance
//*****************************************************************************
class	GPersonalisationBalance
{
private:
	float	Timebetweenbuilds;
	float	Sizetopersonalisationratio;
	float	Distancebetweenpersonalisationsonroads;

public:
			GPersonalisationBalance()
			{
				Timebetweenbuilds                                                  = 0.0f;
				Sizetopersonalisationratio                                         = 0.0f;
				Distancebetweenpersonalisationsonroads                             = 0.0f;
			}

	float	GetTimebetweenbuilds() const                   { return Timebetweenbuilds; }
	float	GetSizetopersonalisationratio() const          { return Sizetopersonalisationratio; }
	float	GetDistancebetweenpersonalisationsonroads() const
                                                    { return Distancebetweenpersonalisationsonroads; }

	static	GPersonalisationBalance	Info[PERSONALISATION_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// TownLevelBonus
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOWNLEVELBONUS_BALANCE_TYPE
//*****************************************************************************
enum	TOWNLEVELBONUS_BALANCE_TYPE
{
	TOWNLEVELBONUS_BALANCE_TYPE_DEFAULT                                            =  0 ,
	TOWNLEVELBONUS_BALANCE_TYPE_LAST                                               =  1 ,
};


//*****************************************************************************
// CLASS Definition: GTownLevelBonusBalance
//*****************************************************************************
class	GTownLevelBonusBalance
{
private:
	float	Village;
	float	Town;
	float	City;
	float	Metro;

public:
			GTownLevelBonusBalance()
			{
				Village                                                            = 0.0f;
				Town                                                               = 0.0f;
				City                                                               = 0.0f;
				Metro                                                              = 0.0f;
			}

	float	GetVillage() const                             { return Village; }
	float	GetTown() const                                { return Town; }
	float	GetCity() const                                { return City; }
	float	GetMetro() const                               { return Metro; }

	static	GTownLevelBonusBalance	Info[TOWNLEVELBONUS_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// ForestGrowth
//*****************************************************************************
//*****************************************************************************
// ENUM Values: FORESTGROWTH_BALANCE_TYPE
//*****************************************************************************
enum	FORESTGROWTH_BALANCE_TYPE
{
	FORESTGROWTH_BALANCE_TYPE_DEFAULT                                              =  0 ,
	FORESTGROWTH_BALANCE_TYPE_LAST                                                 =  1 ,
};


//*****************************************************************************
// CLASS Definition: GForestGrowthBalance
//*****************************************************************************
class	GForestGrowthBalance
{
private:
	float	MinSaplingDist;
	float	MaxSaplingDist;
	float	TreeGrowthRate;
	float	TreeGrowthAmout;
	float	WaterSpawnTickDelay;
	float	TreeCollisionRadius;
	float	BaseSaplingSpawnSpeed;
	float	ScenicTreeDist;
	float	MaxNumberOfTreesForBonus;
	float	MaxDropSpeedIncrease;
	float	CreaturePooBonus;

public:
			GForestGrowthBalance()
			{
				MinSaplingDist                                                     = 0.0f;
				MaxSaplingDist                                                     = 0.0f;
				TreeGrowthRate                                                     = 0.0f;
				TreeGrowthAmout                                                    = 0.0f;
				WaterSpawnTickDelay                                                = 0.0f;
				TreeCollisionRadius                                                = 0.0f;
				BaseSaplingSpawnSpeed                                              = 0.0f;
				ScenicTreeDist                                                     = 0.0f;
				MaxNumberOfTreesForBonus                                           = 0.0f;
				MaxDropSpeedIncrease                                               = 0.0f;
				CreaturePooBonus                                                   = 0.0f;
			}

	float	GetMinSaplingDist() const                      { return MinSaplingDist; }
	float	GetMaxSaplingDist() const                      { return MaxSaplingDist; }
	float	GetTreeGrowthRate() const                      { return TreeGrowthRate; }
	float	GetTreeGrowthAmout() const                     { return TreeGrowthAmout; }
	float	GetWaterSpawnTickDelay() const                 { return WaterSpawnTickDelay; }
	float	GetTreeCollisionRadius() const                 { return TreeCollisionRadius; }
	float	GetBaseSaplingSpawnSpeed() const               { return BaseSaplingSpawnSpeed; }
	float	GetScenicTreeDist() const                      { return ScenicTreeDist; }
	float	GetMaxNumberOfTreesForBonus() const            { return MaxNumberOfTreesForBonus; }
	float	GetMaxDropSpeedIncrease() const                { return MaxDropSpeedIncrease; }
	float	GetCreaturePooBonus() const                    { return CreaturePooBonus; }

	static	GForestGrowthBalance	Info[FORESTGROWTH_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// DidYouKnow
//*****************************************************************************
//*****************************************************************************
// ENUM Values: DIDYOUKNOW_BALANCE_TYPE
//*****************************************************************************
enum	DIDYOUKNOW_BALANCE_TYPE
{
	DIDYOUKNOW_BALANCE_TYPE_DEFAULT                                                =  0 ,
	DIDYOUKNOW_BALANCE_TYPE_LAST                                                   =  1 ,
};


//*****************************************************************************
// CLASS Definition: GDidYouKnowBalance
//*****************************************************************************
class	GDidYouKnowBalance
{
private:
	float	DistanceFromHand;
	float	DistanceFromCamera;

public:
			GDidYouKnowBalance()
			{
				DistanceFromHand                                                   = 0.0f;
				DistanceFromCamera                                                 = 0.0f;
			}

	float	GetDistanceFromHand() const                    { return DistanceFromHand; }
	float	GetDistanceFromCamera() const                  { return DistanceFromCamera; }

	static	GDidYouKnowBalance	Info[DIDYOUKNOW_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};


//*****************************************************************************
// TownCentreTTIcon
//*****************************************************************************
//*****************************************************************************
// ENUM Values: TOWNCENTRETTICON_BALANCE_TYPE
//*****************************************************************************
enum	TOWNCENTRETTICON_BALANCE_TYPE
{
	TOWNCENTRETTICON_BALANCE_TYPE_IMPRESSIVENESS                                   =  0 ,
	TOWNCENTRETTICON_BALANCE_TYPE_ADULT_POPULATION                                 =  1 ,
	TOWNCENTRETTICON_BALANCE_TYPE_CHILD_POPULATION                                 =  2 ,
	TOWNCENTRETTICON_BALANCE_TYPE_LAST                                             =  3 ,
};


//*****************************************************************************
// CLASS Definition: GTownCentreTTIconBalance
//*****************************************************************************
class	GTownCentreTTIconBalance
{
private:
	float	MidPoint;

public:
			GTownCentreTTIconBalance()
			{
				MidPoint                                                           = 0.0f;
			}

	float	GetMidPoint() const                            { return MidPoint; }

	static	GTownCentreTTIconBalance	Info[TOWNCENTRETTICON_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};

#endif	//	__GAME_BALANCE_GENERAL_H__