///////////////////////////////////////////////////////////
//  Switch.h
//  Implementation of the Class Switch
//  Created on:      07-fev-2014 11:44:29
///////////////////////////////////////////////////////////

#if !defined(EA_2E0CE4F4_C06C_47c6_B9CA_BB703D3B529F__INCLUDED_)
#define EA_2E0CE4F4_C06C_47c6_B9CA_BB703D3B529F__INCLUDED_

#include <QList>

#include "Boolean.h"
#include "CurrentFlow.h"
#include "Integer.h"
#include "DateTime.h"
#include "ConductingEquipment.h"
#include "SwitchSchedule.h"
#include "SwitchPhase.h"

/**
 * A generic device designed to close, or open, or both, one or more electric
 * circuits.
 */
class Switch : public ConductingEquipment
{

public:
	Switch();
	virtual ~Switch();

	/**
	 * The attribute is used in cases when no Measurement for the status value is
	 * present. If the Switch has a status measurment the Discrete.normalValue is
	 * expected to match with the Switch.normalOpen.
	 */
	Boolean normalOpen;

    /**
	 * The maximum continuous current carrying capacity in amps governed by the device
	 * material and construction.
	 */
	CurrentFlow ratedCurrent;

    /**
	 * The switch on count since the switch was last reset or initialized.
	 */
	Integer switchOnCount;

    /**
	 * The date and time when the switch was last switched on.
	 */
	DateTime switchOnDate;

    /**
	 * Branch is retained in a bus branch model.
	 */
	Boolean retained;

    /**
	 * A Switch can be associated with SwitchSchedules.
	 */
    QList<SwitchSchedule*> switchSchedules;

    /**
	 * The individual switch phases for the switch.
	 */
    QList<SwitchPhase*> switchPhases;
};
#endif // !defined(EA_2E0CE4F4_C06C_47c6_B9CA_BB703D3B529F__INCLUDED_)
