///////////////////////////////////////////////////////////
//  PU.h
//  Implementation of the Class PU
//  Created on:      07-fev-2014 11:44:18
///////////////////////////////////////////////////////////

#if !defined(EA_9A26E71A_D436_4705_81A9_13480E666992__INCLUDED_)
#define EA_9A26E71A_D436_4705_81A9_13480E666992__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Per Unit - a positive or negative value referred to a defined base. Values
 * typically range from -10 to +10.
 */
class PU
{

public:
	PU();
	virtual ~PU();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_9A26E71A_D436_4705_81A9_13480E666992__INCLUDED_)
