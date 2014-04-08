///////////////////////////////////////////////////////////
//  Capacitance.h
//  Implementation of the Class Capacitance
//  Created on:      07-fev-2014 11:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_3372F091_1AF6_4c75_A2C0_81F839DE0EF1__INCLUDED_)
#define EA_3372F091_1AF6_4c75_A2C0_81F839DE0EF1__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Capacitive part of reactance (imaginary part of impedance), at rated frequency.
 */
class Capacitance
{

public:
	Capacitance();
	virtual ~Capacitance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_3372F091_1AF6_4c75_A2C0_81F839DE0EF1__INCLUDED_)
