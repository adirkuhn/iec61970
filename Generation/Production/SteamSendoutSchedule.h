///////////////////////////////////////////////////////////
//  SteamSendoutSchedule.h
//  Implementation of the Class SteamSendoutSchedule
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_2D9C128B_70F5_4a04_9BB6_1FF7AA530A9B__INCLUDED_)
#define EA_2D9C128B_70F5_4a04_9BB6_1FF7AA530A9B__INCLUDED_

#include "RegularIntervalSchedule.h"

/**
 * The cogeneration plant's steam sendout schedule in volume per time unit.
 */
class SteamSendoutSchedule : public RegularIntervalSchedule
{

public:
	SteamSendoutSchedule();
	virtual ~SteamSendoutSchedule();

};
#endif // !defined(EA_2D9C128B_70F5_4a04_9BB6_1FF7AA530A9B__INCLUDED_)
