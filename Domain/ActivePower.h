///////////////////////////////////////////////////////////
//  ActivePower.h
//  Implementation of the Class ActivePower
//  Created on:      07-fev-2014 11:43:27
///////////////////////////////////////////////////////////

#if !defined(EA_320811EF_158C_430c_8A33_9EFC36FBAFB7__INCLUDED_)
#define EA_320811EF_158C_430c_8A33_9EFC36FBAFB7__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Product of RMS value of the voltage and the RMS value of the in-phase component
 * of the current.
 */
class ActivePower
{

public:
	ActivePower();
	virtual ~ActivePower();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_320811EF_158C_430c_8A33_9EFC36FBAFB7__INCLUDED_)
