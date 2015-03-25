///////////////////////////////////////////////////////////
//  Susceptance.h
//  Implementation of the Class Susceptance
//  Created on:      07-fev-2014 11:44:28
///////////////////////////////////////////////////////////

#if !defined(EA_CA629C04_92C0_4ee4_AFD4_E2D4169B5C09__INCLUDED_)
#define EA_CA629C04_92C0_4ee4_AFD4_E2D4169B5C09__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Imaginary part of admittance.
 */
class Susceptance
{

public:
	Susceptance();
	virtual ~Susceptance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_CA629C04_92C0_4ee4_AFD4_E2D4169B5C09__INCLUDED_)
