///////////////////////////////////////////////////////////
//  Temperature.h
//  Implementation of the Class Temperature
//  Created on:      07-fev-2014 11:44:31
///////////////////////////////////////////////////////////

#if !defined(EA_24163F4B_7E66_45c1_BC3A_01F784141610__INCLUDED_)
#define EA_24163F4B_7E66_45c1_BC3A_01F784141610__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "lFloat.h"

/**
 * Value of temperature in degrees Celsius.
 */
class Temperature
{

public:
	Temperature();
	virtual ~Temperature();
	static const UnitMultiplier multiplier;
	static const UnitSymbol unit;
	Float value;

};
#endif // !defined(EA_24163F4B_7E66_45c1_BC3A_01F784141610__INCLUDED_)
