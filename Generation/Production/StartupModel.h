///////////////////////////////////////////////////////////
//  StartupModel.h
//  Implementation of the Class StartupModel
//  Created on:      07-fev-2014 11:44:25
///////////////////////////////////////////////////////////

#if !defined(EA_E934BD5C_F88F_4c50_8FF6_0EF62CDC9FC3__INCLUDED_)
#define EA_E934BD5C_F88F_4c50_8FF6_0EF62CDC9FC3__INCLUDED_

#include "CostRate.h"
#include "HeatRate.h"
#include "CostPerEnergyUnit.h"
#include "Hours.h"
#include "Money.h"
#include "DateTime.h"
#include "Integer.h"
#include "ActivePower.h"
#include "IdentifiedObject.h"
#include "StartRampCurve.h"
#include "StartIgnFuelCurve.h"
#include "StartMainFuelCurve.h"

/**
 * Unit start up characteristics depending on how long the unit has been off line.
 */
class StartupModel : public IdentifiedObject
{

public:
	StartupModel();
	virtual ~StartupModel();
	/**
	 * Fixed maintenance cost.
	 */
	CostRate fixedMaintCost;
	/**
	 * The amount of heat input per time uint required for hot standby operation.
	 */
	HeatRate hotStandbyHeat;
	/**
	 * Incremental maintenance cost.
	 */
	CostPerEnergyUnit incrementalMaintCost;
	/**
	 * The minimum number of hours the unit must be down before restart.
	 */
	Hours minimumDownTime;
	/**
	 * The minimum number of hours the unit must be operating before being allowed to
	 * shut down.
	 */
	Hours minimumRunTime;
	/**
	 * The opportunity cost associated with the return in monetary unit. This
	 * represents the restart's "share" of the unit depreciation and risk of an event
	 * which would damage the unit.
	 */
	Money riskFactorCost;
	/**
	 * Total miscellaneous start up costs.
	 */
	Money startupCost;
	/**
	 * The date and time of the most recent generating unit startup.
	 */
	DateTime startupDate;
	/**
	 * Startup priority within control area where lower numbers indicate higher
	 * priorities.  More than one unit in an area may be assigned the same priority.
	 */
	Integer startupPriority;
	/**
	 * The unit's auxiliary active power consumption to maintain standby mode.
	 */
	ActivePower stbyAuxP;
	/**
	 * The unit's startup model may have a startup ramp curve.
	 */
    StartRampCurve *startRampCurve;
	/**
	 * The unit's startup model may have a startup ignition fuel curve.
	 */
    StartIgnFuelCurve *startIgnFuelCurve;
	/**
	 * The unit's startup model may have a startup main fuel curve.
	 */
    StartMainFuelCurve *startMainFuelCurve;

};
#endif // !defined(EA_E934BD5C_F88F_4c50_8FF6_0EF62CDC9FC3__INCLUDED_)
