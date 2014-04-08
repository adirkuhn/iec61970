///////////////////////////////////////////////////////////
//  StringQuantity.h
//  Implementation of the Class StringQuantity
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_63385897_0379_4832_BE7D_08E40D5537B1__INCLUDED_)
#define EA_63385897_0379_4832_BE7D_08E40D5537B1__INCLUDED_

#include "String.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Quantity with string value (when it is not important whether it is an integral
 * or a floating point number) and associated unit information.
 */
class StringQuantity
{

public:
	StringQuantity();
	virtual ~StringQuantity();
	String value;
	UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_63385897_0379_4832_BE7D_08E40D5537B1__INCLUDED_)
