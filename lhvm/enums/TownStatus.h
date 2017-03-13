//////////////////////////////////////////////////////////////////////////
//
// Town Status
//
//////////////////////////////////////////////////////////////////////////

#ifndef _TOWN_STATUS_H
#define _TOWN_STATUS_H

enum TOWN_STATUS
{
	TOWN_STATUS_DEFAULT,
	TOWN_STATUS_MIGRATION_STARTED,
	TOWN_STATUS_MIGRATION_ARRIVED,
	TOWN_STATUS_MIGRATED,
	TOWN_STATUS_BEING_CAPTURED,
	TOWN_STATUS_CAPTURED,
};

//------------------------------------------------------------------------------------------------------------------------
class	TownStatus : public GameThing
{

private:

	TOWN_STATUS		PreviousStatus;
	TOWN_STATUS		CurrentStatus;

	GPlayer*		PreviousOwner;
	GPlayer*		Owner;
	GPlayer*		BeingCapturedBy;

	Town*			LastMigratingTo;
	Town*			LastMigratedTo;

	ULONG			LastBeganMigratingAt;
	ULONG			LastMigrationArrivedAt;
	ULONG			LastMigratedAt;
	ULONG			LastCapturedAt;

	ULONG			MigrationsToMeCount;

	Town*			ToTown;

public:

	SERIALISER_CLASS_DECLARATION(TownStatus);

	TownStatus() :	PreviousStatus(TOWN_STATUS_DEFAULT),
					CurrentStatus(TOWN_STATUS_DEFAULT),
					PreviousOwner(NULL),
					Owner(NULL),
					BeingCapturedBy(NULL),
					LastMigratingTo(NULL),
					LastMigratedTo(NULL),
					LastBeganMigratingAt(0),
					LastMigrationArrivedAt(0),
					LastMigratedAt(0),
					LastCapturedAt(0),
					MigrationsToMeCount(0),
					ToTown(NULL)
	{}

	virtual ~TownStatus() {}

	void			SetUpForTown(Town* town);

	void			PlayerBeginsCapture(GPlayer* player);		
	void			PlayerCancelsCapture();
	void			PlayerCaptures(GPlayer* player);
	void			PlayerClaims(GPlayer* player);

	void			MigrationStarts(Town* target);
	void			MigrationArrives(Town* target);
	void			MigrationAccepted(Town* target);

	GPlayer*		GetOwner();
	GPlayer*		GetPreviousOwner();
	GPlayer*		GetPlayerCapturing();

	ULONG			GetWhenLastCaptured();
	ULONG			GetWhenLastBeganMigrating();
	ULONG			GetWhenLastMigrationArrived();
	ULONG			GetWhenLastMigrationCompleted();

	Town*			GetTownMigratingTo();
	Town*			GetTownMigratedTo();

	ULONG			GetNumberOfMigrationsAcceptedByMe();

	TOWN_STATUS		GetStatus();
};

#endif