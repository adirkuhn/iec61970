///////////////////////////////////////////////////////////
//  Seconds.h
//  Implementation of the Class Seconds
//  Created on:      07-fev-2014 11:44:23
///////////////////////////////////////////////////////////

#if !defined(EA_F2BC5DF7_E93C_4bf7_8AA2_1405BB9DB139__INCLUDED_)
#define EA_F2BC5DF7_E93C_4bf7_8AA2_1405BB9DB139__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Time, in seconds.
 */
class Seconds
{

public:
	Seconds();
	virtual ~Seconds();

	/**
	 * Time, in seconds
	 */
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
};
#endif // !defined(EA_F2BC5DF7_E93C_4bf7_8AA2_1405BB9DB139__INCLUDED_)
