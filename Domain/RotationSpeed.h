///////////////////////////////////////////////////////////
//  RotationSpeed.h
//  Implementation of the Class RotationSpeed
//  Created on:      07-fev-2014 11:44:23
///////////////////////////////////////////////////////////

#if !defined(EA_A2EE91C5_E564_4b39_9AE0_69AE48C8FAAC__INCLUDED_)
#define EA_A2EE91C5_E564_4b39_9AE0_69AE48C8FAAC__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Number of revolutions per second.
 */
class RotationSpeed
{

public:
	RotationSpeed();
	virtual ~RotationSpeed();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_A2EE91C5_E564_4b39_9AE0_69AE48C8FAAC__INCLUDED_)
