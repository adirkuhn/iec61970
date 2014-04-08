///////////////////////////////////////////////////////////
//  HydroPump.h
//  Implementation of the Class HydroPump
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_D2626156_3294_491f_B7D4_C0AF7B09E0CF__INCLUDED_)
#define EA_D2626156_3294_491f_B7D4_C0AF7B09E0CF__INCLUDED_

#include "VolumeFlowRate.h"
#include "ActivePower.h"
#include "HydroPumpOpSchedule.h"
#include "PowerSystemResource.h"

/**
 * A synchronous motor-driven pump, typically associated with a pumped storage
 * plant.
 */
class HydroPump : public PowerSystemResource
{

public:
	HydroPump();
	virtual ~HydroPump();
	/**
	 * The pumping discharge under maximum head conditions, usually at full gate.
	 */
	VolumeFlowRate pumpDischAtMaxHead;
	/**
	 * The pumping discharge under minimum head conditions, usually at full gate.
	 */
	VolumeFlowRate pumpDischAtMinHead;
	/**
	 * The pumping power under maximum head conditions, usually at full gate.
	 */
	ActivePower pumpPowerAtMaxHead;
	/**
	 * The pumping power under minimum head conditions, usually at full gate.
	 */
	ActivePower pumpPowerAtMinHead;
	/**
	 * The hydro pump has a pumping schedule over time, indicating when pumping is to
	 * occur.
	 */
    HydroPumpOpSchedule *pHydroPumpOpSchedule;

};
#endif // !defined(EA_D2626156_3294_491f_B7D4_C0AF7B09E0CF__INCLUDED_)
