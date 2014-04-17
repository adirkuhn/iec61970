///////////////////////////////////////////////////////////
//  Emission.h
//  Implementation of the Class Emission
//  Created on:      07-fev-2014 11:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_63A96B55_719E_4b40_93E9_9160C3E959CF__INCLUDED_)
#define EA_63A96B55_719E_4b40_93E9_9160C3E959CF__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Quantity of emission per fuel heat content.
 */
class Emission
{

public:
	Emission();
	virtual ~Emission();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_63A96B55_719E_4b40_93E9_9160C3E959CF__INCLUDED_)
