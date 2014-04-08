///////////////////////////////////////////////////////////
//  Substation.h
//  Implementation of the Class Substation
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_32E1A506_8500_468d_90DB_F3DA0729FDDB__INCLUDED_)
#define EA_32E1A506_8500_468d_90DB_F3DA0729FDDB__INCLUDED_

#include <QList>

#include "EquipmentContainer.h"
#include "VoltageLevel.h"
#include "Bay.h"

/**
 * A collection of equipment for purposes other than generation or utilization,
 * through which electric energy in bulk is passed for the purposes of switching
 * or modifying its characteristics. 
 */
class Substation : public EquipmentContainer
{

public:
	Substation();
	virtual ~Substation();

	/**
	 * The voltage levels within this substation.
	 */
    QList<VoltageLevel*> voltageLevels;

	/**
	 * Bays contained in the substation.
	 */
    QList<Bay*> bays;
};
#endif // !defined(EA_32E1A506_8500_468d_90DB_F3DA0729FDDB__INCLUDED_)
