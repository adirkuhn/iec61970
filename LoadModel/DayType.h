///////////////////////////////////////////////////////////
//  DayType.h
//  Implementation of the Class DayType
//  Created on:      07-fev-2014 11:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_76D02DE8_A6DB_4dd8_B909_B86D0624D00A__INCLUDED_)
#define EA_76D02DE8_A6DB_4dd8_B909_B86D0624D00A__INCLUDED_

#include "IdentifiedObject.h"
#include "SeasonDayTypeSchedule.h"

/**
 * Group of similar days.   For example it could be used to represent weekdays,
 * weekend, or holidays.
 */
class DayType : public IdentifiedObject
{

public:
	DayType();
	virtual ~DayType();
	/**
	 * Schedules that use this DayType.
	 */
	QList<SeasonDayTypeSchedule> *SeasonDayTypeSchedules;

};
#endif // !defined(EA_76D02DE8_A6DB_4dd8_B909_B86D0624D00A__INCLUDED_)
