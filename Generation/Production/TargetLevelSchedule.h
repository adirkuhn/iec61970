///////////////////////////////////////////////////////////
//  TargetLevelSchedule.h
//  Implementation of the Class TargetLevelSchedule
//  Created on:      07-fev-2014 11:44:31
///////////////////////////////////////////////////////////

#if !defined(EA_65881535_E38F_4fcf_BCB0_E304E222A2B3__INCLUDED_)
#define EA_65881535_E38F_4fcf_BCB0_E304E222A2B3__INCLUDED_

#include "WaterLevel.h"
#include "Curve.h"

/**
 * Reservoir water level targets from advanced studies or "rule curves". Typically
 * in one hour increments for up to 10 days.
 */
class TargetLevelSchedule : public Curve
{

public:
	TargetLevelSchedule();
	virtual ~TargetLevelSchedule();
	/**
	 * High target level limit, above which the reservoir operation will be penalized.
	 */
	WaterLevel highLevelLimit;
	/**
	 * Low target level limit, below which the reservoir operation will be penalized.
	 */
	WaterLevel lowLevelLimit;

};
#endif // !defined(EA_65881535_E38F_4fcf_BCB0_E304E222A2B3__INCLUDED_)
