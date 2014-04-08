///////////////////////////////////////////////////////////
//  Inductance.h
//  Implementation of the Class Inductance
//  Created on:      07-fev-2014 11:44:02
///////////////////////////////////////////////////////////

#if !defined(EA_5742FF1F_DD9A_4dbf_AD4F_D357EB1EC776__INCLUDED_)
#define EA_5742FF1F_DD9A_4dbf_AD4F_D357EB1EC776__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Inductive part of reactance (imaginary part of impedance), at rated frequency.
 */
class Inductance
{

public:
	Inductance();
	virtual ~Inductance();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_5742FF1F_DD9A_4dbf_AD4F_D357EB1EC776__INCLUDED_)
