///////////////////////////////////////////////////////////
//  HeatRate.h
//  Implementation of the Class HeatRate
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_C7F2E02C_BF05_4dcd_8F02_86506F45D373__INCLUDED_)
#define EA_C7F2E02C_BF05_4dcd_8F02_86506F45D373__INCLUDED_

#include "UnitSymbol.h"
#include "lFloat.h"
#include "UnitMultiplier.h"

/**
 * Heat generated, in energy pertime unit of elapsed time.
 */
class HeatRate
{

public:
	HeatRate();
	virtual ~HeatRate();
	static const UnitSymbol unit;
	Float value;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_C7F2E02C_BF05_4dcd_8F02_86506F45D373__INCLUDED_)
