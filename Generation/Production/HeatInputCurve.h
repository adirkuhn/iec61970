///////////////////////////////////////////////////////////
//  HeatInputCurve.h
//  Implementation of the Class HeatInputCurve
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_5A93D0E0_7038_43fb_8A29_917B9375E61C__INCLUDED_)
#define EA_5A93D0E0_7038_43fb_8A29_917B9375E61C__INCLUDED_

#include "PU.h"
#include "ActivePower.h"
#include "HeatRate.h"
#include "Boolean.h"
#include "Curve.h"

/**
 * Relationship between unit heat input in energy per time for main fuel (Y1-axis)
 * and supplemental fuel (Y2-axis) versus unit output in active power (X-axis).
 * The quantity of main fuel used to sustain generation at this output level is
 * prorated for throttling between definition points. The quantity of supplemental
 * fuel used at this output level is fixed and not prorated.
 */
class HeatInputCurve : public Curve
{

public:
	HeatInputCurve();
	virtual ~HeatInputCurve();
	/**
	 * Power output - auxiliary power multiplier adjustment factor.
	 */
	PU auxPowerMult;
	/**
	 * Power output - auxiliary power offset adjustment factor.
	 */
	ActivePower auxPowerOffset;
	/**
	 * Heat input - efficiency multiplier adjustment factor.
	 */
	PU heatInputEff;
	/**
	 * Heat input - offset adjustment factor.
	 */
	HeatRate heatInputOffset;
	/**
	 * Flag is set to true when output is expressed in net active power.
	 */
	Boolean isNetGrossP;

};
#endif // !defined(EA_5A93D0E0_7038_43fb_8A29_917B9375E61C__INCLUDED_)
