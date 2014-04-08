///////////////////////////////////////////////////////////
//  EmissionCurve.h
//  Implementation of the Class EmissionCurve
//  Created on:      07-fev-2014 11:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_A6B4046E_97AE_4e30_A569_B2EF149F7A80__INCLUDED_)
#define EA_A6B4046E_97AE_4e30_A569_B2EF149F7A80__INCLUDED_

#include "Emission.h"
#include "EmissionType.h"
#include "Boolean.h"
#include "Curve.h"

/**
 * Relationship between the unit's emission rate in units of mass per hour (Y-
 * axis) and output active power (X-axis) for a given type of emission. This curve
 * applies when only one type of fuel is being burned.
 */
class EmissionCurve : public Curve
{

public:
	EmissionCurve();
	virtual ~EmissionCurve();
	/**
	 * The emission content per quantity of fuel burned.
	 */
	Emission emissionContent;
	/**
	 * The type of emission, which also gives the production rate measurement unit.
	 * The y1AxisUnits of the curve contains the unit of measure (e.g. kg) and the
	 * emissionType is the type of emission (e.g. sulfer dioxide).
	 */
	EmissionType emissionType;
	/**
	 * Flag is set to true when output is expressed in net active power.
	 */
	Boolean isNetGrossP;

};
#endif // !defined(EA_A6B4046E_97AE_4e30_A569_B2EF149F7A80__INCLUDED_)
