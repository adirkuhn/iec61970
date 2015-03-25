///////////////////////////////////////////////////////////
//  StartRampCurve.h
//  Implementation of the Class StartRampCurve
//  Created on:      07-fev-2014 11:44:25
///////////////////////////////////////////////////////////

#if !defined(EA_04BEDB67_DACA_46a3_AB6D_E9331906DC96__INCLUDED_)
#define EA_04BEDB67_DACA_46a3_AB6D_E9331906DC96__INCLUDED_

#include "ActivePowerChangeRate.h"
#include "Curve.h"

/**
 * Rate in gross active power/minute (Y-axis) at which a unit can be loaded versus
 * the number of hours (X-axis) the unit was off line.
 */
class StartRampCurve : public Curve
{

public:
	StartRampCurve();
	virtual ~StartRampCurve();
	/**
	 * The startup ramp rate in gross for a unit that is on hot standby.
	 */
	ActivePowerChangeRate hotStandbyRamp;

};
#endif // !defined(EA_04BEDB67_DACA_46a3_AB6D_E9331906DC96__INCLUDED_)
