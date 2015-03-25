///////////////////////////////////////////////////////////
//  CompositeSwitchType.h
//  Implementation of the Class CompositeSwitchType
//  Created on:      07-fev-2014 11:43:34
///////////////////////////////////////////////////////////

#if !defined(EA_D03D55C5_1C0E_4eb2_908E_0C2926A6DC2C__INCLUDED_)
#define EA_D03D55C5_1C0E_4eb2_908E_0C2926A6DC2C__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "lString.h"

/**
 * An alphanumeric code that can be used as a reference to extra information such
 * as the description of the interlocking scheme if any.
 */
class CompositeSwitchType
{

public:
	CompositeSwitchType();
	virtual ~CompositeSwitchType();
	/**
	 * Multiplier.
	 */
	UnitMultiplier multiplier;
	/**
	 * Units.
	 */
	UnitSymbol unit;
	/**
	 * Value.
	 */
	String value;

};
#endif // !defined(EA_D03D55C5_1C0E_4eb2_908E_0C2926A6DC2C__INCLUDED_)
