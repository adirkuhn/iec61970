///////////////////////////////////////////////////////////
//  HeatRateCurve.h
//  Implementation of the Class HeatRateCurve
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_4BBB67E5_C9FF_43e1_AFD3_250A39B7535D__INCLUDED_)
#define EA_4BBB67E5_C9FF_43e1_AFD3_250A39B7535D__INCLUDED_

#include "Boolean.h"
#include "Curve.h"

/**
 * Relationship between unit heat rate per active power (Y-axis) and  unit output
 * (X-axis). The heat input is from all fuels.
 */
class HeatRateCurve : public Curve
{

public:
	HeatRateCurve();
	virtual ~HeatRateCurve();
	/**
	 * Flag is set to true when output is expressed in net active power.
	 */
	Boolean isNetGrossP;

};
#endif // !defined(EA_4BBB67E5_C9FF_43e1_AFD3_250A39B7535D__INCLUDED_)
