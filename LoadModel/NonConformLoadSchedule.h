///////////////////////////////////////////////////////////
//  NonConformLoadSchedule.h
//  Implementation of the Class NonConformLoadSchedule
//  Created on:      07-fev-2014 11:44:11
///////////////////////////////////////////////////////////

#if !defined(EA_73B0C9BA_3C01_40cb_9C03_4019E6962A6F__INCLUDED_)
#define EA_73B0C9BA_3C01_40cb_9C03_4019E6962A6F__INCLUDED_

#include "SeasonDayTypeSchedule.h"

/**
 * An active power (Y1-axis) and reactive power (Y2-axis) schedule (curves) versus
 * time (X-axis) for non-conforming loads, e.g., large industrial load or power
 * station service (where modeled).
 */
class NonConformLoadSchedule : public SeasonDayTypeSchedule
{

public:
	NonConformLoadSchedule();
	virtual ~NonConformLoadSchedule();

};
#endif // !defined(EA_73B0C9BA_3C01_40cb_9C03_4019E6962A6F__INCLUDED_)
