///////////////////////////////////////////////////////////
//  SwitchSchedule.h
//  Implementation of the Class SwitchSchedule
//  Created on:      07-fev-2014 11:44:30
//  Original author: KLH
///////////////////////////////////////////////////////////

#if !defined(EA_90C00D88_3ABA_4c69_A6AC_6F675B79B051__INCLUDED_)
#define EA_90C00D88_3ABA_4c69_A6AC_6F675B79B051__INCLUDED_

#include "SeasonDayTypeSchedule.h"

/**
 * A schedule of switch positions.  If RegularTimePoint.value1 is 0, the switch is
 * open.  If 1, the switch is closed.  
 */
class SwitchSchedule : public SeasonDayTypeSchedule
{

public:
	SwitchSchedule();
	virtual ~SwitchSchedule();

};
#endif // !defined(EA_90C00D88_3ABA_4c69_A6AC_6F675B79B051__INCLUDED_)
