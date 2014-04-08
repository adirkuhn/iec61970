///////////////////////////////////////////////////////////
//  RegularIntervalSchedule.h
//  Implementation of the Class RegularIntervalSchedule
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_643BB721_9102_4023_88EB_F816742B4213__INCLUDED_)
#define EA_643BB721_9102_4023_88EB_F816742B4213__INCLUDED_

#include "DateTime.h"
#include "Seconds.h"
#include "RegularTimePoint.h"
#include "BasicIntervalSchedule.h"

/**
 * The schedule has time points where the time between them is constant.
 */
class RegularIntervalSchedule : public BasicIntervalSchedule
{

public:
	RegularIntervalSchedule();
	virtual ~RegularIntervalSchedule();
	/**
	 * The time for the last time point.
	 */
	DateTime endTime;
	/**
	 * The time between each pair of subsequent regular time points in sequence order.
	 */
	Seconds timeStep;
	/**
	 * The regular interval time point data values that define this schedule.
	 */
	QList<RegularTimePoint> *TimePoints;

};
#endif // !defined(EA_643BB721_9102_4023_88EB_F816742B4213__INCLUDED_)
