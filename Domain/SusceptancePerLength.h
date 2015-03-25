///////////////////////////////////////////////////////////
//  SusceptancePerLength.h
//  Implementation of the Class SusceptancePerLength
//  Created on:      07-fev-2014 11:44:28
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_863490D6_FEFD_49f9_8845_A5ED444E8D0E__INCLUDED_)
#define EA_863490D6_FEFD_49f9_8845_A5ED444E8D0E__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Imaginary part of admittance per unit of length.
 */
class SusceptancePerLength
{

public:
	SusceptancePerLength();
	virtual ~SusceptancePerLength();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_863490D6_FEFD_49f9_8845_A5ED444E8D0E__INCLUDED_)
