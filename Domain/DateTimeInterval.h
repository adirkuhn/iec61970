///////////////////////////////////////////////////////////
//  DateTimeInterval.h
//  Implementation of the Class DateTimeInterval
//  Created on:      07-fev-2014 11:43:39
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_6A3B8327_9437_47d2_BDC1_4F64C9F863B8__INCLUDED_)
#define EA_6A3B8327_9437_47d2_BDC1_4F64C9F863B8__INCLUDED_

#include "DateTime.h"

/**
 * Interval between two date and time points.
 */
class DateTimeInterval
{

public:
	DateTimeInterval();
	virtual ~DateTimeInterval();
	/**
	 * Start date and time of this interval.
	 */
	DateTime start;
	/**
	 * End date and time of this interval.
	 */
	DateTime end;

};
#endif // !defined(EA_6A3B8327_9437_47d2_BDC1_4F64C9F863B8__INCLUDED_)
