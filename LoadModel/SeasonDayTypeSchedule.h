///////////////////////////////////////////////////////////
//  SeasonDayTypeSchedule.h
//  Implementation of the Class SeasonDayTypeSchedule
//  Created on:      07-fev-2014 11:44:23
///////////////////////////////////////////////////////////

#if !defined(EA_1275D97C_EF7B_466a_866E_3A2FD8FB515E__INCLUDED_)
#define EA_1275D97C_EF7B_466a_866E_3A2FD8FB515E__INCLUDED_

#include "RegularIntervalSchedule.h"

/**
 * A time schedule covering a 24 hour period, with curve data for a specific type
 * of season and day.
 */
class SeasonDayTypeSchedule : public RegularIntervalSchedule
{

public:
	SeasonDayTypeSchedule();
	virtual ~SeasonDayTypeSchedule();

};
#endif // !defined(EA_1275D97C_EF7B_466a_866E_3A2FD8FB515E__INCLUDED_)
