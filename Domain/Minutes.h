///////////////////////////////////////////////////////////
//  Minutes.h
//  Implementation of the Class Minutes
//  Created on:      07-fev-2014 11:44:09
///////////////////////////////////////////////////////////

#if !defined(EA_27E75EA2_41CC_401e_8518_CBD31279FD77__INCLUDED_)
#define EA_27E75EA2_41CC_401e_8518_CBD31279FD77__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Time in minutes.
 */
class Minutes
{

public:
	Minutes();
	virtual ~Minutes();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_27E75EA2_41CC_401e_8518_CBD31279FD77__INCLUDED_)
