///////////////////////////////////////////////////////////
//  AngleRadians.h
//  Implementation of the Class AngleRadians
//  Created on:      07-fev-2014 11:43:29
///////////////////////////////////////////////////////////

#if !defined(EA_EAB66D66_9BAB_411a_8D71_6699839ABC39__INCLUDED_)
#define EA_EAB66D66_9BAB_411a_8D71_6699839ABC39__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Phase angle in radians.
 */
class AngleRadians
{

public:
	AngleRadians();
	virtual ~AngleRadians();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_EAB66D66_9BAB_411a_8D71_6699839ABC39__INCLUDED_)
