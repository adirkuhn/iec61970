///////////////////////////////////////////////////////////
//  HydroPumpOpSchedule.h
//  Implementation of the Class HydroPumpOpSchedule
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_0F4E3126_1F2E_4051_9D1F_A38AA9BE9F58__INCLUDED_)
#define EA_0F4E3126_1F2E_4051_9D1F_A38AA9BE9F58__INCLUDED_

#include "RegularIntervalSchedule.h"

/**
 * The hydro pump's Operator-approved current operating schedule (or plan),
 * typically produced with the aid of unit commitment type analyses.The unit's
 * operating schedule status is typically given as: (0=unavailable) (1=avilable to
 * startup or shutdown)  (2=must pump).
 */
class HydroPumpOpSchedule : public RegularIntervalSchedule
{

public:
	HydroPumpOpSchedule();
	virtual ~HydroPumpOpSchedule();

};
#endif // !defined(EA_0F4E3126_1F2E_4051_9D1F_A38AA9BE9F58__INCLUDED_)
