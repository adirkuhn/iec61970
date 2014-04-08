///////////////////////////////////////////////////////////
//  IncrementalHeatRateCurve.h
//  Implementation of the Class IncrementalHeatRateCurve
//  Created on:      07-fev-2014 11:44:02
///////////////////////////////////////////////////////////

#if !defined(EA_1A57E245_B4AF_4869_A8EC_04091BDE6C01__INCLUDED_)
#define EA_1A57E245_B4AF_4869_A8EC_04091BDE6C01__INCLUDED_

#include "Boolean.h"
#include "Curve.h"

/**
 * Relationship between unit incremental heat rate in (delta energy/time) per
 * (delta active power) and unit output in active power. The IHR curve represents
 * the slope of the HeatInputCurve. Note that the "incremental heat rate" and the
 * "heat rate" have the same engineering units.
 */
class IncrementalHeatRateCurve : public Curve
{

public:
	IncrementalHeatRateCurve();
	virtual ~IncrementalHeatRateCurve();
	/**
	 * Flag is set to true when output is expressed in net active power.
	 */
	Boolean isNetGrossP;

};
#endif // !defined(EA_1A57E245_B4AF_4869_A8EC_04091BDE6C01__INCLUDED_)
