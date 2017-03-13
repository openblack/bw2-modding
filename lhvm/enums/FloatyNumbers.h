/*************************************************************************************************
FloatyNumbers-				It's almost so simple.

Adam Langridge				alangridge@lionhead.com
©Lionhead Studios Ltd		2005
*************************************************************************************************/

#ifndef __FLOATYNUMBERS_H__
#define __FLOATYNUMBERS_H__

#include "VisualEffectRender.h"
#include "VisualEffectBase.h"

class Villager;

enum	FLOATY_ENUM
{
	FLOATY_NONE	=	-1,
	FLOATY_ZERO	=	0,
	FLOATY_ONE,
	FLOATY_TWO,
	FLOATY_THREE,
	FLOATY_FOUR,
	FLOATY_FIVE,
	FLOATY_SIX,
	FLOATY_SEVEN,
	FLOATY_EIGHT,
	FLOATY_NINE,
	FLOATY_PLUS,
	FLOATY_MINUS,
	FLOATY_COMMA,
	FLOATY_FULL_STOP,
	FLOATY_SKULL,		
	FLOATY_BIRTH,		
	FLOATY_HEART,		
	FLOATY_CORN,		
	FLOATY_ORE,			
	FLOATY_WOOD,		
	FLOATY_MANA,		
	FLOATY_GOOD,		
	FLOATY_EVIL,		
	FLOATY_TRIBUTE,		
	FLOATY_ARMY_FOOD,	
	FLOATY_ROBOTIC,		
	FLOATY_OAP,		
	FLOATY_POPULATION,		
	FLOATY_LEVEL_UP,
	FLOATY_FATNESS,
	FLOATY_MUSCLE,
	FLOAT_FITNESS,
	FLOATY_SIZE,
	FLOATY_ALIGNMENT,
	FLOATY_CREATURE_PAW,
	FLOATY_DAMAGE,
	FLOATY_IMPRESSIVENESS,
	FLOATY_HAPPINESS,
	FLOATY_HEAL,
	FLOATY_STARVATION,
	FLOATY_LAST,
};

struct FloatyData
{
	int		Colour;
	bool	Scaleable;

	static	FloatyData	Data[FLOATY_LAST];
};

class FloatyNumber
{
public:
	static	FloatyNumber*							Create(const LHPoint &pos);
	void											Close();

	static	FloatyNumber*							GetFloatyFromUniqueID(int id);

	void											SetImportance(float scale);
	void											SetColour(ULONG col);
	void											SetIcon(FLOATY_ENUM);
	void											SetValue(int number);
	void											ForceSign(bool	positive);
	void											SetScalable( bool scalable );

	int												GetUniqueID();

	static	void									UpdateAndDraw();
	static	void									CloseAll();

	static	int										GetFloatyColour(FLOATY_ENUM);

	static	void									OverrideWidescreenHide(bool override);

	static	void									ClearList();

	static	void									OneTimeInit();

private:
	static	void									AllocateFloatyList(int number_to_allocate);

	void											CalculateMyNumberOfQuads();

	void											SetToZero();

	static	float									Size;
	static	int										NumberOfRows;
	static	int										NumberOfColumns;
	static	float									StepRow;
	static	float									StepColumn;
	static	VISUAL_BLEND_TYPE						Blend;
	static	ULONG									Alpha;
	static	ULONG									Life;
	static	float									RaiseHeight;
	static	float									IconSpacing;
	static	float									CloseDistance;
	static	float									FarDistance;

	static	int										IDTotal;

	static	VisualEffectDrawable::VisMaterial*		Material;

	//My list of them.
	static	int										NumberOfFloatysAllocated;
	static	int										NumberOfFloatys;
	static	int										AllocateStep;
	static	FloatyNumber*							FloatyArray;
	static	int										NumberOfQuadsRequired;

	LHPoint											MyPos;
	float											MyScale;
	ULONG											MyColour;
	int												MyStartTime;
	bool											IHaveValue;
	int												MyValue;
	int												MyIcon;
	int												MyNumberOfQuads;
	bool											IHaveSign;
	bool											SignNegative;
	bool											Scalable;

	int												ID;

	static	bool									WideScreenOverride;

	FloatyNumber();
	~FloatyNumber();

	FloatyNumber &operator =(const FloatyNumber &f);
};

#endif	//__FLOATYNUMBERS_H__