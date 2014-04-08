///////////////////////////////////////////////////////////
//  Season.h
//  Implementation of the Class Season
//  Created on:      07-fev-2014 11:44:23
///////////////////////////////////////////////////////////

#if !defined(EA_F88528FD_B4C2_408b_9E72_52EA68904EF7__INCLUDED_)
#define EA_F88528FD_B4C2_408b_9E72_52EA68904EF7__INCLUDED_

#include "DateTime.h"
#include "SeasonName.h"
#include "SeasonDayTypeSchedule.h"

/**
 * A specified time period of the year.
 */
class Season
{

public:
	Season();
	virtual ~Season();
	/**
	 * Date season ends.
	 */
	DateTime endDate;
	/**
	 * Name of the season.
	 */
	SeasonName name;
	/**
	 * Date season starts.
	 */
	DateTime startDate;
	/**
	 * Schedules that use this Season.
	 */
	QList<SeasonDayTypeSchedule> *SeasonDayTypeSchedules;

};
#endif // !defined(EA_F88528FD_B4C2_408b_9E72_52EA68904EF7__INCLUDED_)
