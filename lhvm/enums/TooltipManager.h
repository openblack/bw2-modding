#ifndef TOOLTIPMANAGER_H
#define TOOLTIPMANAGER_H

class Tooltip;
class TooltipHolder;
class Object;

//-------------------------------------------------------------------------------
//	TooltipManager
//	the tooltip system manager
//-------------------------------------------------------------------------------

enum TooltipActivityState
{
	TAS_OFF,
	TAS_NORMAL,
};

class TooltipManager
{
public:

	static void OneTimeInit();
	static void Shutdown();
	static void Reset();

	static void Update();
	static void Draw(BOOL world);
	static BOOL IsTooltipActive(Tooltip *tooltip);

	static BOOL Submit(Tooltip *tooltip);

	static BOOL IsObjectUnderHand(Object *object);

	static void RemoveTooltip(Tooltip *tooltip);
	static void RemoveTooltips(TooltipHolder *owner);

	static FLOAT GetDisplayLevel();
	static void SetDisplayLevel(FLOAT level);
	static FLOAT GetDisplaySpeed();
	static void SetDisplaySpeed(FLOAT speed);
	static FLOAT GetPopupDelay();

	static TooltipActivityState ActivityState;
	static BOOL CanDrawComponentInActivityState(TOOLTIP_ID id);

	static BOOL	ScriptEnableTooltips;

	static void SetDefaults();
	static void SaveSettings();
	static void LoadSettings();

	static void	SetScreenRect(FLOAT left, FLOAT top, FLOAT right, FLOAT bottom);

protected:
	static std::list<Tooltip*> m_CurrentTooltips;
	static FLOAT m_DisplayLevel;
	static FLOAT m_DisplaySpeed;

	static BOOL AreTooltipsActive();
};

#endif // TOOLTIPS_H