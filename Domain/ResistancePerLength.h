///////////////////////////////////////////////////////////
//  ResistancePerLength.h
//  Implementation of the Class ResistancePerLength
//  Created on:      07-fev-2014 11:44:22
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_A1F72987_7A91_4f28_BE58_D66E34699444__INCLUDED_)
#define EA_A1F72987_7A91_4f28_BE58_D66E34699444__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Resistance (real part of impedance) per unit of length.
 */
class ResistancePerLength
{

public:
	ResistancePerLength();
	virtual ~ResistancePerLength();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_A1F72987_7A91_4f28_BE58_D66E34699444__INCLUDED_)
