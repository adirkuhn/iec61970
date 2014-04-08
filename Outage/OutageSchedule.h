///////////////////////////////////////////////////////////
//  OutageSchedule.h
//  Implementation of the Class OutageSchedule
//  Created on:      07-fev-2014 11:44:12
///////////////////////////////////////////////////////////

#if !defined(EA_16BE9D88_4351_410e_BBE6_D522691CAB2F__INCLUDED_)
#define EA_16BE9D88_4351_410e_BBE6_D522691CAB2F__INCLUDED_

#include "PowerSystemResource.h"
#include "IrregularIntervalSchedule.h"

/**
 * The period of time that a piece of equipment is out of service, for example,
 * for maintenance or testing; including the equipment's active power rating while
 * under maintenance. The X-axis represents absolute time and the Y-axis
 * represents the equipment's available rating while out of service.
 */
class OutageSchedule : public IrregularIntervalSchedule
{

public:
	OutageSchedule();
	virtual ~OutageSchedule();
	/**
	 * A power system resource may have an outage schedule.
	 */
    PowerSystemResource *powerSystemResource;

};
#endif // !defined(EA_16BE9D88_4351_410e_BBE6_D522691CAB2F__INCLUDED_)
