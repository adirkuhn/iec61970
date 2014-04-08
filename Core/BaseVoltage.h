///////////////////////////////////////////////////////////
//  BaseVoltage.h
//  Implementation of the Class BaseVoltage
//  Created on:      07-fev-2014 11:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_38B28720_199D_4179_8A37_87A2E11FD334__INCLUDED_)
#define EA_38B28720_199D_4179_8A37_87A2E11FD334__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"

#include "Boolean.h"
#include "Voltage.h"
#include "ConductingEquipment.h"

/**
 * Defines a system base voltage which is referenced. 
 */
class BaseVoltage : public IdentifiedObject
{

public:
	BaseVoltage();
	virtual ~BaseVoltage();

	/**
	 * If true, this is a direct current base voltage and items assigned to this base
	 * voltage are also associated with a direct current capabilities.   False
	 * indicates alternating current.
	 */
	Boolean isDC;

    /**
	 * The power system resource's base voltage.
	 */
	Voltage nominalVoltage;

    /**
	 * All conducting equipment with this base voltage.  Use only when there is no
	 * voltage level container used and only one base voltage applies.  For example,
	 * not used for transformers.
	 */

    QList<ConductingEquipment> conductingEquipments;
};
#endif // !defined(EA_38B28720_199D_4179_8A37_87A2E11FD334__INCLUDED_)
