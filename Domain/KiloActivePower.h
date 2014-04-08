///////////////////////////////////////////////////////////
//  KiloActivePower.h
//  Implementation of the Class KiloActivePower
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_83A7B441_B9EB_4183_8E39_4448EBBD01EB__INCLUDED_)
#define EA_83A7B441_B9EB_4183_8E39_4448EBBD01EB__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Active power in kilowatts.
 */
class KiloActivePower
{

public:
	KiloActivePower();
	virtual ~KiloActivePower();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_83A7B441_B9EB_4183_8E39_4448EBBD01EB__INCLUDED_)
