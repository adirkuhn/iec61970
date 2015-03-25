///////////////////////////////////////////////////////////
//  Admittance.h
//  Implementation of the Class Admittance
//  Created on:      07-fev-2014 11:43:27
///////////////////////////////////////////////////////////

#if !defined(EA_F491FBEE_429C_4f3a_AC3A_8A6E0058CC89__INCLUDED_)
#define EA_F491FBEE_429C_4f3a_AC3A_8A6E0058CC89__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Ratio of current to voltage.
 */
class Admittance
{

public:
	Admittance();
	virtual ~Admittance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_F491FBEE_429C_4f3a_AC3A_8A6E0058CC89__INCLUDED_)
