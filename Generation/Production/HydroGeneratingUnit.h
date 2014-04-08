///////////////////////////////////////////////////////////
//  HydroGeneratingUnit.h
//  Implementation of the Class HydroGeneratingUnit
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_C38CA970_97AB_4877_A300_9F2C5E99915B__INCLUDED_)
#define EA_C38CA970_97AB_4877_A300_9F2C5E99915B__INCLUDED_

#include "HydroEnergyConversionKind.h"
#include "CostPerVolume.h"
#include "TailbayLossCurve.h"
#include "HydroGeneratingEfficiencyCurve.h"
#include "GeneratingUnit.h"
#include "PenstockLossCurve.h"

/**
 * A generating unit whose prime mover is a hydraulic turbine (e.g., Francis,
 * Pelton, Kaplan).
 */
class HydroGeneratingUnit : public GeneratingUnit
{

public:
	HydroGeneratingUnit();
	virtual ~HydroGeneratingUnit();
	/**
	 * Energy conversion capability for generating.
	 */
	HydroEnergyConversionKind energyConversionCapability;
	/**
	 * The equivalent cost of water that drives the hydro turbine.
	 */
	CostPerVolume hydroUnitWaterCost;
	/**
	 * A hydro generating unit has a tailbay loss curve.
	 */
    QList<TailbayLossCurve> *TailbayLossCurves;
	/**
	 * A hydro generating unit has an efficiency curve.
	 */
	QList<HydroGeneratingEfficiencyCurve> *HydroGeneratingEfficiencyCurves;
	/**
	 * A hydro generating unit has a penstock loss curve.
	 */
    PenstockLossCurve *penstockLossCurve;

};
#endif // !defined(EA_C38CA970_97AB_4877_A300_9F2C5E99915B__INCLUDED_)
