///////////////////////////////////////////////////////////
//  ThermalGeneratingUnit.h
//  Implementation of the Class ThermalGeneratingUnit
//  Created on:      07-fev-2014 11:44:32
///////////////////////////////////////////////////////////

#if !defined(EA_4F782085_697D_4b95_9760_BD828E3B7593__INCLUDED_)
#define EA_4F782085_697D_4b95_9760_BD828E3B7593__INCLUDED_

#include "CostPerHeatUnit.h"
#include "HeatRateCurve.h"
#include "FuelAllocationSchedule.h"
#include "StartupModel.h"
#include "EmissionCurve.h"
#include "ShutdownCurve.h"
#include "IncrementalHeatRateCurve.h"
#include "EmissionAccount.h"
#include "GeneratingUnit.h"
#include "HeatInputCurve.h"

/**
 * A generating unit whose prime mover could be a steam turbine, combustion
 * turbine, or diesel engine.
 */
class ThermalGeneratingUnit : public GeneratingUnit
{

public:
	ThermalGeneratingUnit();
	virtual ~ThermalGeneratingUnit();
	/**
	 * Operating and maintenance cost for the thermal unit.
	 */
	CostPerHeatUnit oMCost;
	/**
	 * A thermal generating unit may have a heat rate curve.
	 */
    HeatRateCurve *heatRateCurve;
	/**
	 * A thermal generating unit may have one or more fuel allocation schedules.
	 */
	QList<FuelAllocationSchedule> *FuelAllocationSchedules;
	/**
	 * A thermal generating unit may have a startup model.
	 */
    StartupModel *startupModel;
	/**
	 * A thermal generating unit may have  one or more emission curves.
	 */
	QList<EmissionCurve> *EmissionCurves;
	/**
	 * A thermal generating unit may have a shutdown curve.
	 */
    ShutdownCurve *shutdownCurve;
	/**
	 * A thermal generating unit may have an incremental heat rate curve.
	 */
    IncrementalHeatRateCurve *incrementalHeatRateCurve;
	/**
	 * A thermal generating unit may have one or more emission allowance accounts.
	 */
	QList<EmissionAccount> *EmmissionAccounts;
	/**
	 * A thermal generating unit may have a heat input curve.
	 */
    HeatInputCurve *heatInputCurve;

};
#endif // !defined(EA_4F782085_697D_4b95_9760_BD828E3B7593__INCLUDED_)
