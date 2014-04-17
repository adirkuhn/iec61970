///////////////////////////////////////////////////////////
//  FuelAllocationSchedule.h
//  Implementation of the Class FuelAllocationSchedule
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_41015DFA_9A3B_45b3_9DAA_807ED47CC4CA__INCLUDED_)
#define EA_41015DFA_9A3B_45b3_9DAA_807ED47CC4CA__INCLUDED_

#include "DateTime.h"
#include "FuelType.h"
#include "lFloat.h"
#include "Curve.h"

/**
 * The amount of fuel of a given type which is allocated for consumption over a
 * specified period of time.
 */
class FuelAllocationSchedule : public Curve
{

public:
	FuelAllocationSchedule();
	virtual ~FuelAllocationSchedule();
	/**
	 * The end time and date of the fuel allocation schedule.
	 */
	DateTime fuelAllocationEndDate;
	/**
	 * The start time and date of the fuel allocation schedule.
	 */
	DateTime fuelAllocationStartDate;
	/**
	 * The type of fuel, which also indicates the corresponding measurement unit.
	 */
	FuelType fuelType;
	/**
	 * The maximum amount fuel that is allocated for consumption for the scheduled
	 * time period.
	 */
	Float maxFuelAllocation;
	/**
	 * The minimum amount fuel that is allocated for consumption for the scheduled
	 * time period, e.g., based on a "take-or-pay" contract.
	 */
	Float minFuelAllocation;

};
#endif // !defined(EA_41015DFA_9A3B_45b3_9DAA_807ED47CC4CA__INCLUDED_)
