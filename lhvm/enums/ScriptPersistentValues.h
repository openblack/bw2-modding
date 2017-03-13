#ifndef _SCRIPT_PERSISTANT_VALUES_H_
#define _SCRIPT_PERSISTANT_VALUES_H_

//------------------------------------------------------------------------------------------------------------------------
enum	PERSISTANT_VALUE
{
	PERSISTANT_VALUE_EXAMPLE,
	PERSISTANT_VALUE_LAST,
};

typedef std::map<LHRefString, float> StringFloatMap;
typedef std::pair<LHRefString, float> StringFloatPair;

class ScriptPersistantValues
{
public:
	ScriptPersistantValues(){};
	~ScriptPersistantValues(){};
	void								AddValue(LHRefString key, float fvalue);
	bool								GetValue(LHRefString key, float& fvalue);
	void								Reset();

	SERIALISER_BASE_CLASS_DECLARATION(ScriptPersistantValues)
	SERIALISER_REGISTER_BASE_NO_POST_LOAD_CALLBACK(ScriptPersistantValues)
private:
	StringFloatMap						DataMap;
};

#endif