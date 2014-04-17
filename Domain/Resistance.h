///////////////////////////////////////////////////////////
//  Resistance.h
//  Implementation of the Class Resistance
//  Created on:      07-fev-2014 11:44:22
///////////////////////////////////////////////////////////

#if !defined(EA_CD39BB35_2AB4_4923_95B2_6C81ECDED2D6__INCLUDED_)
#define EA_CD39BB35_2AB4_4923_95B2_6C81ECDED2D6__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Resistance (real part of impedance).
 */
class Resistance
{

public:
	Resistance();
	virtual ~Resistance();

	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
};
#endif // !defined(EA_CD39BB35_2AB4_4923_95B2_6C81ECDED2D6__INCLUDED_)
