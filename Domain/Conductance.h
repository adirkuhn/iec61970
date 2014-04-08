///////////////////////////////////////////////////////////
//  Conductance.h
//  Implementation of the Class Conductance
//  Created on:      07-fev-2014 11:43:34
///////////////////////////////////////////////////////////

#if !defined(EA_3B8DB813_B345_4bac_A51A_BF10A7A3C334__INCLUDED_)
#define EA_3B8DB813_B345_4bac_A51A_BF10A7A3C334__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Factor by which voltage must be multiplied to give corresponding power lost
 * from a circuit. Real part of admittance.
 */
class Conductance
{

public:
	Conductance();
	virtual ~Conductance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_3B8DB813_B345_4bac_A51A_BF10A7A3C334__INCLUDED_)
