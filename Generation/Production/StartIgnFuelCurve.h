///////////////////////////////////////////////////////////
//  StartIgnFuelCurve.h
//  Implementation of the Class StartIgnFuelCurve
//  Created on:      07-fev-2014 11:44:25
///////////////////////////////////////////////////////////

#if !defined(EA_12D2278C_4EDC_4f62_858B_5665DE0430A6__INCLUDED_)
#define EA_12D2278C_4EDC_4f62_858B_5665DE0430A6__INCLUDED_

#include "FuelType.h"
#include "Curve.h"

/**
 * The quantity of ignition fuel (Y-axis) used to restart and repay the auxiliary
 * power consumed versus the number of hours (X-axis) the unit was off line.
 */
class StartIgnFuelCurve : public Curve
{

public:
	StartIgnFuelCurve();
	virtual ~StartIgnFuelCurve();
	/**
	 * Type of ignition fuel.
	 */
	FuelType ignitionFuelType;

};
#endif // !defined(EA_12D2278C_4EDC_4f62_858B_5665DE0430A6__INCLUDED_)
