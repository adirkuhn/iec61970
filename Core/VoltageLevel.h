///////////////////////////////////////////////////////////
//  VoltageLevel.h
//  Implementation of the Class VoltageLevel
//  Created on:      07-fev-2014 11:44:35
///////////////////////////////////////////////////////////

#if !defined(EA_C393FD0F_4622_40f3_9AF9_A87E4B9953BE__INCLUDED_)
#define EA_C393FD0F_4622_40f3_9AF9_A87E4B9953BE__INCLUDED_

#include <QList>

#include "Voltage.h"
#include "EquipmentContainer.h"
#include "Bay.h"
#include "BaseVoltage.h"

/**
 * A collection of equipment at one common system voltage forming a switchgear.
 * The equipment typically consist of breakers, busbars, instrumentation, control,
 * regulation and protection devices as well as assemblies of all these.
 */
class VoltageLevel : public EquipmentContainer
{

public:
	VoltageLevel();
	virtual ~VoltageLevel();

	/**
	 * The bus bar's high voltage limit
	 */
	Voltage highVoltageLimit;

    /**
	 * The bus bar's low voltage limit
	 */
	Voltage lowVoltageLimit;

    /**
	 * The bays within this voltage level.
	 */
    QList<Bay*> bays;

    /**
	 * The base voltage used for all equipment within the voltage level.
	 */
    BaseVoltage *baseVoltage;
};
#endif // !defined(EA_C393FD0F_4622_40f3_9AF9_A87E4B9953BE__INCLUDED_)
