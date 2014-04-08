///////////////////////////////////////////////////////////
//  RegulationSchedule.h
//  Implementation of the Class RegulationSchedule
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_2D0651F1_C542_41a8_B576_A09520F2D8A5__INCLUDED_)
#define EA_2D0651F1_C542_41a8_B576_A09520F2D8A5__INCLUDED_

#include "RegulatingControl.h"
#include "VoltageControlZone.h"
#include "SeasonDayTypeSchedule.h"

/**
 * A pre-established pattern over time for a controlled variable, e.g., busbar
 * voltage.
 */
class RegulationSchedule : public SeasonDayTypeSchedule
{

public:
	RegulationSchedule();
	virtual ~RegulationSchedule();
	/**
	 * Regulating controls that have this Schedule.
	 */
    RegulatingControl *regulatingControl;
	/**
	 * A VoltageControlZone may have a  voltage regulation schedule.
	 */
	QList<VoltageControlZone> *VoltageControlZones;

};
#endif // !defined(EA_2D0651F1_C542_41a8_B576_A09520F2D8A5__INCLUDED_)
