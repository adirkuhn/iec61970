///////////////////////////////////////////////////////////
//  Classification.h
//  Implementation of the Class Classification
//  Created on:      07-fev-2014 11:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_D610399F_DC8F_44b5_B612_82D6B8CE0A4F__INCLUDED_)
#define EA_D610399F_DC8F_44b5_B612_82D6B8CE0A4F__INCLUDED_

#include "Integer.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Classification of level.  Specify as 1..n, with 1 being the most detailed,
 * highest priority, etc as described on the attribue using this data type.
 */
class Classification
{

public:
	Classification();
	virtual ~Classification();
	Integer value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_D610399F_DC8F_44b5_B612_82D6B8CE0A4F__INCLUDED_)
