///////////////////////////////////////////////////////////
//  ReactancePerLength.h
//  Implementation of the Class ReactancePerLength
//  Created on:      07-fev-2014 11:44:19
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_440BFE72_4120_4589_BAC3_0A1A40F4F319__INCLUDED_)
#define EA_440BFE72_4120_4589_BAC3_0A1A40F4F319__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Reactance (imaginary part of impedance) per unit of length, at rated frequency.
 */
class ReactancePerLength
{

public:
	ReactancePerLength();
	virtual ~ReactancePerLength();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_440BFE72_4120_4589_BAC3_0A1A40F4F319__INCLUDED_)
