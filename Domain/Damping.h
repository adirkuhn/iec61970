///////////////////////////////////////////////////////////
//  Damping.h
//  Implementation of the Class Damping
//  Created on:      07-fev-2014 11:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_3F11A6F5_49F4_4738_91DB_B8E0EB8A3A49__INCLUDED_)
#define EA_3F11A6F5_49F4_4738_91DB_B8E0EB8A3A49__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Per-unit active power variation with frequency referenced on the system
 * apparent power base. Typical values are in range 1.0 - 2.0.
 */
class Damping
{

public:
	Damping();
	virtual ~Damping();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_3F11A6F5_49F4_4738_91DB_B8E0EB8A3A49__INCLUDED_)
