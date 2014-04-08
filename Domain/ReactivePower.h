///////////////////////////////////////////////////////////
//  ReactivePower.h
//  Implementation of the Class ReactivePower
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_B250D57F_23AE_48fd_B1AC_402D26A9C9D7__INCLUDED_)
#define EA_B250D57F_23AE_48fd_B1AC_402D26A9C9D7__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Product of RMS value of the voltage and the RMS value of the quadrature
 * component of the current.
 */
class ReactivePower
{

public:
	ReactivePower();
	virtual ~ReactivePower();

	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
};
#endif // !defined(EA_B250D57F_23AE_48fd_B1AC_402D26A9C9D7__INCLUDED_)
