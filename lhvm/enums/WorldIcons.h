#ifndef _WORLD_ICONS_H_
#define _WORLD_ICONS_H_

#include "BindableAction.h"

enum HAND_ICON_TYPE;

enum ARROW_TYPE
{
	ARROW_TYPE_NONE = 0,
	ARROW_TYPE_UP,
	ARROW_TYPE_RIGHT,
	ARROW_TYPE_DOWN,
	ARROW_TYPE_LEFT,
	ARROW_TYPE_PITCH_UP,
	ARROW_TYPE_PITCH_DOWN,
	ARROW_TYPE_ROTATE_LEFT,
	ARROW_TYPE_ROTATE_RIGHT,
	ARROW_TYPE_ZOOM_IN,
	ARROW_TYPE_ZOOM_OUT,
	ARROW_TYPE_LEFT_RIGHT,
	ARROW_TYPE_UP_DOWN,
	ARROW_TYPE_LAST,
};

struct IconOffsetData
{
	float					XOffset;
	float					YOffset;

	static IconOffsetData	ArrowIconOffsets[ARROW_TYPE_LAST];
};

struct WorldIconData
{
	SERIALISER_BASE_CLASS_DECLARATION_FLAGS(WorldIconData, CLASS_NOCREATE)
	SERIALISER_REGISTER_BASE_NO_POST_LOAD_CALLBACK(WorldIconData)

	WorldIconData(GameThingWithPos* thing, HAND_ICON_TYPE icon, ULONG id, ARROW_TYPE arrow, float x_offset, float y_offset) 
				{ AttachedThing=thing; Icon = icon; ID = id; ArrowIcon = arrow; XOffset = x_offset; YOffset = y_offset;};
	WorldIconData() {};		// default constructor for the serialser

	GameThingWithPos*					AttachedThing;
	HAND_ICON_TYPE						Icon;
	ARROW_TYPE							ArrowIcon;
	ULONG								ID;
	float								XOffset;
	float								YOffset;
};

class WorldIcons
{
public:
	SERIALISER_BASE_CLASS_DECLARATION(WorldIcons)
	SERIALISER_REGISTER_BASE_NO_POST_LOAD_CALLBACK(WorldIcons)

	WorldIcons()						{ Init(); }
	~WorldIcons();

	void								Init();
	void								Render();
	ULONG								Add(GameThingWithPos* thing, BINDABLE_ACTION_TYPE icon, ARROW_TYPE arrow = ARROW_TYPE_NONE, float x_offset = 0, float y_offset = 0);
	BOOL								Remove(ULONG icon_id);
	void								RemoveAll();

private:
	std::vector<WorldIconData>			WorldIconList;
	Texture*							IconMaterial;
	Texture*							ArrowMaterial;
	ULONG								IconWidth;
	ULONG								IconHeight;
	ULONG								ArrowWidth;
	ULONG								ArrowHeight;
	WCHAR								Text[256];
	ULONG								IconID;
	BOOL								FlashOn;
	ULONG								GameTurnLastFlashed;
};

#endif