///////////////////////////////////////////////////////////
//  ConformLoadSchedule.h
//  Implementation of the Class ConformLoadSchedule
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_02BBBDDC_30AD_4ae4_BB2B_1BADDC9F6341__INCLUDED_)
#define EA_02BBBDDC_30AD_4ae4_BB2B_1BADDC9F6341__INCLUDED_

#include "SeasonDayTypeSchedule.h"

/**
 * A curve of load  versus time (X-axis) showing the active power values (Y1-axis)
 * and reactive power (Y2-axis) for each unit of the period covered. This curve
 * represents a typical pattern of load over the time period for a given day type
 * and season.
 */
class ConformLoadSchedule : public SeasonDayTypeSchedule
{

public:
	ConformLoadSchedule();
	virtual ~ConformLoadSchedule();

};
#endif // !defined(EA_02BBBDDC_30AD_4ae4_BB2B_1BADDC9F6341__INCLUDED_)
