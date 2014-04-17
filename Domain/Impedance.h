///////////////////////////////////////////////////////////
//  Impedance.h
//  Implementation of the Class Impedance
//  Created on:      07-fev-2014 11:44:02
///////////////////////////////////////////////////////////

#if !defined(EA_AE9E8880_D715_42e7_B6ED_A4A5AE242846__INCLUDED_)
#define EA_AE9E8880_D715_42e7_B6ED_A4A5AE242846__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Ratio of voltage to current.
 */
class Impedance
{

public:
	Impedance();
	virtual ~Impedance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_AE9E8880_D715_42e7_B6ED_A4A5AE242846__INCLUDED_)
