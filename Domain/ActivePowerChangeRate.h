///////////////////////////////////////////////////////////
//  ActivePowerChangeRate.h
//  Implementation of the Class ActivePowerChangeRate
//  Created on:      07-fev-2014 11:43:27
///////////////////////////////////////////////////////////

#if !defined(EA_8FEBA8D8_39C6_4f8a_9B29_3F5A1FA7F039__INCLUDED_)
#define EA_8FEBA8D8_39C6_4f8a_9B29_3F5A1FA7F039__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Rate of change of active power per time.
 */
class ActivePowerChangeRate
{

public:
	ActivePowerChangeRate();
	virtual ~ActivePowerChangeRate();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_8FEBA8D8_39C6_4f8a_9B29_3F5A1FA7F039__INCLUDED_)
