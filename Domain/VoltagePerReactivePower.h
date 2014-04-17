///////////////////////////////////////////////////////////
//  VoltagePerReactivePower.h
//  Implementation of the Class VoltagePerReactivePower
//  Created on:      07-fev-2014 11:44:36
///////////////////////////////////////////////////////////

#if !defined(EA_9F6679BB_89F1_4ea9_B983_7F3D56C84D34__INCLUDED_)
#define EA_9F6679BB_89F1_4ea9_B983_7F3D56C84D34__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Voltage variation with reactive power.
 */
class VoltagePerReactivePower
{

public:
	VoltagePerReactivePower();
	virtual ~VoltagePerReactivePower();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_9F6679BB_89F1_4ea9_B983_7F3D56C84D34__INCLUDED_)
