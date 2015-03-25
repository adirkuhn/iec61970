///////////////////////////////////////////////////////////
//  GenUnitOpSchedule.h
//  Implementation of the Class GenUnitOpSchedule
//  Created on:      07-fev-2014 11:43:53
///////////////////////////////////////////////////////////

#if !defined(EA_64AEB051_847C_4314_A530_5AD0B503CCB8__INCLUDED_)
#define EA_64AEB051_847C_4314_A530_5AD0B503CCB8__INCLUDED_

#include "RegularIntervalSchedule.h"

/**
 * The generating unit's Operator-approved current operating schedule (or plan),
 * typically produced with the aid of unit commitment type analyses. The X-axis
 * represents absolute time. The Y1-axis represents the status (0=off-line and
 * unavailable: 1=available: 2=must run: 3=must run at fixed power value: etc.).
 * The Y2-axis represents the must run fixed power value where required.
 */
class GenUnitOpSchedule : public RegularIntervalSchedule
{

public:
	GenUnitOpSchedule();
	virtual ~GenUnitOpSchedule();

};
#endif // !defined(EA_64AEB051_847C_4314_A530_5AD0B503CCB8__INCLUDED_)
