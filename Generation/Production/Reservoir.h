///////////////////////////////////////////////////////////
//  Reservoir.h
//  Implementation of the Class Reservoir
//  Created on:      07-fev-2014 11:44:22
///////////////////////////////////////////////////////////

#if !defined(EA_C4FDC117_7BD4_430d_97D6_17C6581864DF__INCLUDED_)
#define EA_C4FDC117_7BD4_430d_97D6_17C6581864DF__INCLUDED_

#include "Volume.h"
#include "Float.h"
#include "WaterLevel.h"
#include "String.h"
#include "Seconds.h"
#include "Length.h"
#include "SpillwayGateType.h"
#include "LevelVsVolumeCurve.h"
#include "PowerSystemResource.h"
#include "InflowForecast.h"
#include "TargetLevelSchedule.h"

/**
 * A water storage facility within a hydro system, including: ponds, lakes,
 * lagoons, and rivers. The storage is usually behind some type of dam.
 */
class Reservoir : public PowerSystemResource
{

public:
	Reservoir();
	virtual ~Reservoir();
	/**
	 * Storage volume between the full supply level and the normal minimum operating
	 * level.
	 */
	Volume activeStorageCapacity;
	/**
	 * The reservoir's energy storage rating in energy for given head conditions.
	 */
	Float energyStorageRating;
	/**
	 * Full supply level, above which water will spill. This can be the spillway crest
	 * level or the top of closed gates.
	 */
	WaterLevel fullSupplyLevel;
	/**
	 * Total capacity of reservoir.
	 */
	Volume grossCapacity;
	/**
	 * Normal minimum operating level below which the penstocks will draw air.
	 */
	WaterLevel normalMinOperateLevel;
	/**
	 * River outlet works for riparian right releases or other purposes.
	 */
	String riverOutletWorks;
	/**
	 * The spillway water travel delay to the next downstream reservoir.
	 */
	Seconds spillTravelDelay;
	/**
	 * The flow capacity of the spillway in cubic meters per second.
	 */
	Float spillwayCapacity;
	/**
	 * The length of the spillway crest.
	 */
	Length spillwayCrestLength;
	/**
	 * Spillway crest level above which water will spill.
	 */
	WaterLevel spillwayCrestLevel;
	/**
	 * Type of spillway gate, including parameters.
	 */
	SpillwayGateType spillWayGateType;
	/**
	 * A reservoir may have a level versus volume relationship.
	 */
	QList<LevelVsVolumeCurve> *LevelVsVolumeCurves;
	/**
	 * A reservoir may spill into a downstream reservoir.
	 */
	QList<Reservoir> *SpillsIntoReservoirs;
	/**
	 * A reservoir may have a "natural" inflow forecast.
	 */
	QList<InflowForecast> *InflowForecasts;
	/**
	 * A reservoir may have a water level target schedule.
	 */
    TargetLevelSchedule *targetLevelSchedule;

};
#endif // !defined(EA_C4FDC117_7BD4_430d_97D6_17C6581864DF__INCLUDED_)
