///////////////////////////////////////////////////////////
//  StartMainFuelCurve.h
//  Implementation of the Class StartMainFuelCurve
//  Created on:      07-fev-2014 11:44:25
///////////////////////////////////////////////////////////

#if !defined(EA_57470A18_1F6D_4ef4_8BC1_E76145BB1E69__INCLUDED_)
#define EA_57470A18_1F6D_4ef4_8BC1_E76145BB1E69__INCLUDED_

#include "FuelType.h"
#include "Curve.h"

/**
 * The quantity of main fuel (Y-axis) used to restart and repay the auxiliary
 * power consumed versus the number of hours (X-axis) the unit was off line.
 */
class StartMainFuelCurve : public Curve
{

public:
	StartMainFuelCurve();
	virtual ~StartMainFuelCurve();
	/**
	 * Type of main fuel.
	 */
	FuelType mainFuelType;

};
#endif // !defined(EA_57470A18_1F6D_4ef4_8BC1_E76145BB1E69__INCLUDED_)
