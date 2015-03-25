///////////////////////////////////////////////////////////
//  IntegerQuantity.h
//  Implementation of the Class IntegerQuantity
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_74FD16CC_47E9_49c0_A25F_35143A09F59C__INCLUDED_)
#define EA_74FD16CC_47E9_49c0_A25F_35143A09F59C__INCLUDED_

#include "Integer.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Quantity with integer value and associated unit information.
 */
class IntegerQuantity
{

public:
	IntegerQuantity();
	virtual ~IntegerQuantity();
	Integer value;
	UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_74FD16CC_47E9_49c0_A25F_35143A09F59C__INCLUDED_)
