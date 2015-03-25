///////////////////////////////////////////////////////////
//  CostPerHeatUnit.h
//  Implementation of the Class CostPerHeatUnit
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_82B22887_1B3F_4236_B255_63220B572CDA__INCLUDED_)
#define EA_82B22887_1B3F_4236_B255_63220B572CDA__INCLUDED_

#include "lFloat.h"
#include "Currency.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"

/**
 * Cost, in units of currency, per quantity of heat generated.
 */
class CostPerHeatUnit
{

public:
	CostPerHeatUnit();
	virtual ~CostPerHeatUnit();
	Float value;
	Currency unit;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_82B22887_1B3F_4236_B255_63220B572CDA__INCLUDED_)
