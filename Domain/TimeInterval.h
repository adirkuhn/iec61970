///////////////////////////////////////////////////////////
//  TimeInterval.h
//  Implementation of the Class TimeInterval
//  Created on:      07-fev-2014 11:44:32
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_929B4735_C07F_45e0_886D_CB2C47D4B49D__INCLUDED_)
#define EA_929B4735_C07F_45e0_886D_CB2C47D4B49D__INCLUDED_

#include "lTime.h"

/**
 * Interval between two times.
 */
class TimeInterval
{

public:
	TimeInterval();
	virtual ~TimeInterval();
	/**
	 * Start time of this interval.
	 */
	Time start;
	/**
	 * End time of this interval.
	 */
	Time end;

};
#endif // !defined(EA_929B4735_C07F_45e0_886D_CB2C47D4B49D__INCLUDED_)
