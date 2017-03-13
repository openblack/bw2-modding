#ifndef	__GAME_BALANCE_SIEGE_H__
#define	__GAME_BALANCE_SIEGE_H__

// Last Saved,#2005-08-28 11:39:30#,"Matthew Wiggins"

//*****************************************************************************
// Siege
//*****************************************************************************
//*****************************************************************************
// ENUM Values: SIEGE_BALANCE_TYPE
//*****************************************************************************
enum	SIEGE_BALANCE_TYPE
{
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_1                                            =  0 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_2                                            =  1 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_3                                            =  2 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_4                                            =  3 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_5                                            =  4 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_6                                            =  5 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_7                                            =  6 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_8                                            =  7 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_9                                            =  8 ,
	SIEGE_BALANCE_TYPE_CATAPULT_LEVEL_10                                           =  9 ,
	SIEGE_BALANCE_TYPE_LAST                                                        =  10 ,
};


//*****************************************************************************
// CLASS Definition: GSiegeBalance
//*****************************************************************************
class	GSiegeBalance
{
private:
	float	MoveSpeedMeters;
	float	TurnSpeedRads;
	float	MinMoveDistance;
	float	MinFireDistance;
	float	MaxFireDistance;
	float	TargetSearchRadius;
	float	RubberBandRadius;
	float	ReloadTimeSeconds;
	float	FireTimeSeconds;
	float	Accuracy;
	float	AreaOfEffect;
	float	MinFiringAngleRadians;
	float	XpGainedPerShot;
	float	XpGainedPerDefaultHitpointDamage;
	float	DefaultHitpointDamageForXp;
	float	XpNeededToLevelUp;
	float	XpDeltaToTriggerFloaty;
	float	OreRequiredForCreation;
	float	WoodRequiredForCreation;
	float	VillagersRequiredForCreation;
	float	NavRadius;

public:
			GSiegeBalance()
			{
				MoveSpeedMeters                                                    = 0.0f;
				TurnSpeedRads                                                      = 0.0f;
				MinMoveDistance                                                    = 0.0f;
				MinFireDistance                                                    = 0.0f;
				MaxFireDistance                                                    = 0.0f;
				TargetSearchRadius                                                 = 0.0f;
				RubberBandRadius                                                   = 0.0f;
				ReloadTimeSeconds                                                  = 0.0f;
				FireTimeSeconds                                                    = 0.0f;
				Accuracy                                                           = 0.0f;
				AreaOfEffect                                                       = 0.0f;
				MinFiringAngleRadians                                              = 0.0f;
				XpGainedPerShot                                                    = 0.0f;
				XpGainedPerDefaultHitpointDamage                                   = 0.0f;
				DefaultHitpointDamageForXp                                         = 0.0f;
				XpNeededToLevelUp                                                  = 0.0f;
				XpDeltaToTriggerFloaty                                             = 0.0f;
				OreRequiredForCreation                                             = 0.0f;
				WoodRequiredForCreation                                            = 0.0f;
				VillagersRequiredForCreation                                       = 0.0f;
				NavRadius                                                          = 0.0f;
			}

	float	GetMoveSpeedMeters() const                     { return MoveSpeedMeters; }
	float	GetTurnSpeedRads() const                       { return TurnSpeedRads; }
	float	GetMinMoveDistance() const                     { return MinMoveDistance; }
	float	GetMinFireDistance() const                     { return MinFireDistance; }
	float	GetMaxFireDistance() const                     { return MaxFireDistance; }
	float	GetTargetSearchRadius() const                  { return TargetSearchRadius; }
	float	GetRubberBandRadius() const                    { return RubberBandRadius; }
	float	GetReloadTimeSeconds() const                   { return ReloadTimeSeconds; }
	float	GetFireTimeSeconds() const                     { return FireTimeSeconds; }
	float	GetAccuracy() const                            { return Accuracy; }
	float	GetAreaOfEffect() const                        { return AreaOfEffect; }
	float	GetMinFiringAngleRadians() const               { return MinFiringAngleRadians; }
	float	GetXpGainedPerShot() const                     { return XpGainedPerShot; }
	float	GetXpGainedPerDefaultHitpointDamage() const    { return XpGainedPerDefaultHitpointDamage; }
	float	GetDefaultHitpointDamageForXp() const          { return DefaultHitpointDamageForXp; }
	float	GetXpNeededToLevelUp() const                   { return XpNeededToLevelUp; }
	float	GetXpDeltaToTriggerFloaty() const              { return XpDeltaToTriggerFloaty; }
	float	GetOreRequiredForCreation() const              { return OreRequiredForCreation; }
	float	GetWoodRequiredForCreation() const             { return WoodRequiredForCreation; }
	float	GetVillagersRequiredForCreation() const        { return VillagersRequiredForCreation; }
	float	GetNavRadius() const                           { return NavRadius; }

	static	GSiegeBalance	Info[SIEGE_BALANCE_TYPE_LAST];
	static	bool	Load(char *file);
};

#endif	//	__GAME_BALANCE_SIEGE_H__