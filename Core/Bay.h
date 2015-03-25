///////////////////////////////////////////////////////////
//  Bay.h
//  Implementation of the Class Bay
//  Created on:      07-fev-2014 11:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_B056F010_61CC_41b9_BA0A_39A35D2FDA43__INCLUDED_)
#define EA_B056F010_61CC_41b9_BA0A_39A35D2FDA43__INCLUDED_

#include "Boolean.h"
#include "BreakerConfiguration.h"
#include "BusbarConfiguration.h"
#include "EquipmentContainer.h"

/**
 * A collection of power system resources (within a given substation) including
 * conducting equipment, protection relays, measurements, and telemetry.  A bay
 * typically represents a physical grouping related to modularization of equipment.
 */
class Bay : public EquipmentContainer
{

public:
	Bay();
	virtual ~Bay();

	/**
	 * Indicates the presence/absence of energy measurements.
	 */
	Boolean bayEnergyMeasFlag;

	/**
	 * Indicates the presence/absence of active/reactive power measurements.
	 */
	Boolean bayPowerMeasFlag;

	/**
	 * Breaker configuration. 
	 */
	BreakerConfiguration breakerConfiguration;

	/**
	 * Bus bar configuration.
	 */
	BusbarConfiguration busBarConfiguration;
};
#endif // !defined(EA_B056F010_61CC_41b9_BA0A_39A35D2FDA43__INCLUDED_)
