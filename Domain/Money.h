///////////////////////////////////////////////////////////
//  Money.h
//  Implementation of the Class Money
//  Created on:      07-fev-2014 11:44:10
///////////////////////////////////////////////////////////

#if !defined(EA_DA7E05FA_3C63_490e_8EE9_1B87343E7D12__INCLUDED_)
#define EA_DA7E05FA_3C63_490e_8EE9_1B87343E7D12__INCLUDED_

#include "UnitMultiplier.h"
#include "Currency.h"
#include "Decimal.h"

/**
 * Amount of money.
 */
class Money
{

public:
	Money();
	virtual ~Money();
	UnitMultiplier multiplier;
	Currency unit;
	Decimal value;

};
#endif // !defined(EA_DA7E05FA_3C63_490e_8EE9_1B87343E7D12__INCLUDED_)
