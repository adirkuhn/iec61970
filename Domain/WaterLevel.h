///////////////////////////////////////////////////////////
//  WaterLevel.h
//  Implementation of the Class WaterLevel
//  Created on:      07-fev-2014 11:44:36
///////////////////////////////////////////////////////////

#if !defined(EA_58845086_09C6_4388_BC40_E5AB99D0E87E__INCLUDED_)
#define EA_58845086_09C6_4388_BC40_E5AB99D0E87E__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Reservoir water level referred to a given datum such as mean sea level.
 */
class WaterLevel
{

public:
	WaterLevel();
	virtual ~WaterLevel();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_58845086_09C6_4388_BC40_E5AB99D0E87E__INCLUDED_)
