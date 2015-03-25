///////////////////////////////////////////////////////////
//  HydroPowerPlant.h
//  Implementation of the Class HydroPowerPlant
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_FD8A2E0D_9A63_4938_8196_6B795E336BB1__INCLUDED_)
#define EA_FD8A2E0D_9A63_4938_8196_6B795E336BB1__INCLUDED_

#include "Seconds.h"
#include "ActivePower.h"
#include "HydroPlantType.h"
#include "PenstockType.h"
#include "VolumeFlowRate.h"
#include "Length.h"
#include "SurgeTankCode.h"
#include "WaterLevel.h"
#include "PowerSystemResource.h"
#include "HydroPump.h"
#include "Reservoir.h"
#include "HydroGeneratingUnit.h"

/**
 * A hydro power station which can generate or pump. When generating, the
 * generator turbines receive there water from an upper reservoir. When pumping,
 * the pumps receive their water from a lower reservoir.
 */
class HydroPowerPlant : public PowerSystemResource
{

public:
	HydroPowerPlant();
	virtual ~HydroPowerPlant();
	/**
	 * Water travel delay from tailbay to next downstream hydro power station.
	 */
	Seconds dischargeTravelDelay;
	/**
	 * The hydro plant's generating rating active power for rated head conditions.
	 */
	ActivePower genRatedP;
	/**
	 * The type of hydro power plant.
	 */
	HydroPlantType hydroPlantType;
	/**
	 * Type and configuration of hydro plant penstock(s).
	 */
	PenstockType penstockType;
	/**
	 * Total plant discharge capacity.
	 */
	VolumeFlowRate plantDischargeCapacity;
	/**
	 * The plant's rated gross head.
	 */
	Length plantRatedHead;
	/**
	 * The hydro plant's pumping rating active power for rated head conditions.
	 */
	ActivePower pumpRatedP;
	/**
	 * A code describing the type (or absence) of surge tank that is associated with
	 * the hydro power plant.
	 */
	SurgeTankCode surgeTankCode;
	/**
	 * The level at which the surge tank spills.
	 */
	WaterLevel surgeTankCrestLevel;
	/**
	 * The hydro pump may be a member of a pumped storage plant or a pump for
	 * distributing water.
	 */
	QList<HydroPump> *HydroPumps;
	/**
	 * Generators discharge water to or pumps are supplied water from a downstream
	 * reservoir.
	 */
    Reservoir *reservoir;
	/**
	 * Generators are supplied water from or pumps discharge water to an upstream
	 * reservoir.
	 */
    Reservoir *genSourcePumpDischargeReservoir;
	/**
	 * The hydro generating unit belongs to a hydro power plant.
	 */
	QList<HydroGeneratingUnit> *HydroGeneratingUnits;

};
#endif // !defined(EA_FD8A2E0D_9A63_4938_8196_6B795E336BB1__INCLUDED_)
