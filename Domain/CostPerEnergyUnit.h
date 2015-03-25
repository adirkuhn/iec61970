///////////////////////////////////////////////////////////
//  CostPerEnergyUnit.h
//  Implementation of the Class CostPerEnergyUnit
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_217FC269_B2B6_47b5_A485_64E6BA070D77__INCLUDED_)
#define EA_217FC269_B2B6_47b5_A485_64E6BA070D77__INCLUDED_

#include "lFloat.h"
#include "Currency.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"

/**
 * Cost, in units of currency, per quantity of electrical energy generated.
 */
class CostPerEnergyUnit
{

public:
	CostPerEnergyUnit();
	virtual ~CostPerEnergyUnit();
	Float value;
	Currency unit;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_217FC269_B2B6_47b5_A485_64E6BA070D77__INCLUDED_)
