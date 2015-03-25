///////////////////////////////////////////////////////////
//  FossilFuel.h
//  Implementation of the Class FossilFuel
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_4ECEF008_B101_4efc_AC94_691E09553C55__INCLUDED_)
#define EA_4ECEF008_B101_4efc_AC94_691E09553C55__INCLUDED_

#include "FuelType.h"
#include "CostPerHeatUnit.h"
#include "PU.h"
#include "lFloat.h"
#include "PerCent.h"
#include "ActivePower.h"
#include "IdentifiedObject.h"
#include "FuelAllocationSchedule.h"
#include "ThermalGeneratingUnit.h"

/**
 * The fossil fuel consumed by the non-nuclear thermal generating unit.   For
 * example, coal, oil, gas, etc.   This a the specific fuels that that the
 * generating unit can consume.
 */
class FossilFuel : public IdentifiedObject
{

public:
	FossilFuel();
	virtual ~FossilFuel();
	/**
	 * The type of fossil fuel, such as coal, oil, or gas.
	 */
	FuelType fossilFuelType;
	/**
	 * The cost in terms of heat value for the given type of fuel.
	 */
	CostPerHeatUnit fuelCost;
	/**
	 * The cost of fuel used for economic dispatching which includes: fuel cost,
	 * transportation cost,  and incremental maintenance cost.
	 */
	CostPerHeatUnit fuelDispatchCost;
	/**
	 * The efficiency factor for the fuel (per unit) in terms of the effective energy
	 * absorbed.
	 */
	PU fuelEffFactor;
	/**
	 * Handling and processing cost associated with this fuel.
	 */
	CostPerHeatUnit fuelHandlingCost;
	/**
	 * The amount of heat per weight (or volume) of the given type of fuel.
	 */
	Float fuelHeatContent;
	/**
	 * Relative amount of the given type of fuel, when multiple fuels are being
	 * consumed.
	 */
	PerCent fuelMixture;
	/**
	 * The fuel's fraction of pollution credit per unit of heat content.
	 */
	PU fuelSulfur;
	/**
	 * The active power output level of the unit at which the given type of fuel is
	 * switched on. This fuel (e.g., oil) is sometimes used to supplement the base
	 * fuel (e.g., coal) at high active power output levels.
	 */
	ActivePower highBreakpointP;
	/**
	 * The active power output level of the unit at which the given type of fuel is
	 * switched off. This fuel (e.g., oil) is sometimes used to stabilize the base
	 * fuel (e.g., coal) at low active power output levels.
	 */
	ActivePower lowBreakpointP;
	/**
	 * A fuel allocation schedule must have a fossil fuel.
	 */
	QList<FuelAllocationSchedule> *FuelAllocationSchedules;
	/**
	 * A thermal generating unit may have one or more fossil fuels.
	 */
    ThermalGeneratingUnit *thermalGeneratingUnit;

};
#endif // !defined(EA_4ECEF008_B101_4efc_AC94_691E09553C55__INCLUDED_)
