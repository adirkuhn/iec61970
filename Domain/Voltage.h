///////////////////////////////////////////////////////////
//  Voltage.h
//  Implementation of the Class Voltage
//  Created on:      07-fev-2014 11:44:35
///////////////////////////////////////////////////////////

#if !defined(EA_B1B75DB9_2671_445e_BFC4_E7A418CE938B__INCLUDED_)
#define EA_B1B75DB9_2671_445e_BFC4_E7A418CE938B__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Electrical voltage.
 */
class Voltage
{

public:
	Voltage();
	virtual ~Voltage();

	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
};

#endif // !defined(EA_B1B75DB9_2671_445e_BFC4_E7A418CE938B__INCLUDED_)
