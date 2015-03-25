///////////////////////////////////////////////////////////
//  InflowForecast.h
//  Implementation of the Class InflowForecast
//  Created on:      07-fev-2014 11:44:02
///////////////////////////////////////////////////////////

#if !defined(EA_B890693D_AE79_4134_9C4F_C33ED9F44965__INCLUDED_)
#define EA_B890693D_AE79_4134_9C4F_C33ED9F44965__INCLUDED_

#include "RegularIntervalSchedule.h"

/**
 * Natural water inflow to a reservoir, usually forecasted from predicted rain and
 * snowmelt. Typically in one hour increments for up to 10 days. The forecast is
 * given in average cubic meters per second over the time increment.
 */
class InflowForecast : public RegularIntervalSchedule
{

public:
	InflowForecast();
	virtual ~InflowForecast();

};
#endif // !defined(EA_B890693D_AE79_4134_9C4F_C33ED9F44965__INCLUDED_)
