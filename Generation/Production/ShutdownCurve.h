///////////////////////////////////////////////////////////
//  ShutdownCurve.h
//  Implementation of the Class ShutdownCurve
//  Created on:      07-fev-2014 11:44:24
///////////////////////////////////////////////////////////

#if !defined(EA_490EE7DA_FD44_49d0_9554_B5E04CF2FDE0__INCLUDED_)
#define EA_490EE7DA_FD44_49d0_9554_B5E04CF2FDE0__INCLUDED_

#include "Money.h"
#include "DateTime.h"
#include "Curve.h"

/**
 * Relationship between the rate in gross active power/minute (Y-axis) at which a
 * unit should be shutdown and its present gross MW output (X-axis).
 */
class ShutdownCurve : public Curve
{

public:
	ShutdownCurve();
	virtual ~ShutdownCurve();
	/**
	 * Fixed shutdown cost.
	 */
	Money shutdownCost;
	/**
	 * The date and time of the most recent generating unit shutdown.
	 */
	DateTime shutdownDate;

};
#endif // !defined(EA_490EE7DA_FD44_49d0_9554_B5E04CF2FDE0__INCLUDED_)
