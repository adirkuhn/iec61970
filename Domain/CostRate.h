///////////////////////////////////////////////////////////
//  CostRate.h
//  Implementation of the Class CostRate
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_78572DE8_54FC_45c8_93B2_E8A481638CEB__INCLUDED_)
#define EA_78572DE8_54FC_45c8_93B2_E8A481638CEB__INCLUDED_

#include "lFloat.h"
#include "Currency.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"

/**
 * Cost, in units of currency, per elapsed time.
 */
class CostRate
{

public:
	CostRate();
	virtual ~CostRate();
	Float value;
	Currency unit;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_78572DE8_54FC_45c8_93B2_E8A481638CEB__INCLUDED_)
