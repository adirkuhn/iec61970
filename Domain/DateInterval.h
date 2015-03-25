///////////////////////////////////////////////////////////
//  DateInterval.h
//  Implementation of the Class DateInterval
//  Created on:      07-fev-2014 11:43:39
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_5A4F2C63_0C11_4d12_BDF0_F8A1F23A8554__INCLUDED_)
#define EA_5A4F2C63_0C11_4d12_BDF0_F8A1F23A8554__INCLUDED_

#include "Date.h"

/**
 * Interval between two dates.
 */
class DateInterval
{

public:
	DateInterval();
	virtual ~DateInterval();
	/**
	 * Start date of this interval.
	 */
	Date start;
	/**
	 * End date of this interval.
	 */
	Date end;

};
#endif // !defined(EA_5A4F2C63_0C11_4d12_BDF0_F8A1F23A8554__INCLUDED_)
