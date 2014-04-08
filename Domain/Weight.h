///////////////////////////////////////////////////////////
//  Weight.h
//  Implementation of the Class Weight
//  Created on:      07-fev-2014 11:44:36
///////////////////////////////////////////////////////////

#if !defined(EA_E0F80B3B_D97F_4224_8B24_E6AB9ED10E14__INCLUDED_)
#define EA_E0F80B3B_D97F_4224_8B24_E6AB9ED10E14__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * The weight of an object.
 */
class Weight
{

public:
	Weight();
	virtual ~Weight();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_E0F80B3B_D97F_4224_8B24_E6AB9ED10E14__INCLUDED_)
