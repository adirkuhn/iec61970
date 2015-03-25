///////////////////////////////////////////////////////////
//  TapSchedule.h
//  Implementation of the Class TapSchedule
//  Created on:      07-fev-2014 11:44:31
//  Original author: KLH
///////////////////////////////////////////////////////////

#if !defined(EA_C70BD365_4D23_42bd_B7DE_C1AA063AE71C__INCLUDED_)
#define EA_C70BD365_4D23_42bd_B7DE_C1AA063AE71C__INCLUDED_

#include "TapChanger.h"
#include "SeasonDayTypeSchedule.h"

/**
 * A pre-established pattern over time for a tap step.
 */
class TapSchedule : public SeasonDayTypeSchedule
{

public:
	TapSchedule();
	virtual ~TapSchedule();
	/**
	 * A TapSchedule is associated with a TapChanger.
	 */
    TapChanger *tapChanger;

};
#endif // !defined(EA_C70BD365_4D23_42bd_B7DE_C1AA063AE71C__INCLUDED_)
