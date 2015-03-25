///////////////////////////////////////////////////////////
//  CAESPlant.h
//  Implementation of the Class CAESPlant
//  Created on:      07-fev-2014 11:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_C24699FA_9A23_4154_AACD_0CD41B1021C3__INCLUDED_)
#define EA_C24699FA_9A23_4154_AACD_0CD41B1021C3__INCLUDED_

#include "RealEnergy.h"
#include "ActivePower.h"
#include "PowerSystemResource.h"
#include "ThermalGeneratingUnit.h"
#include "AirCompressor.h"

/**
 * Compressed air energy storage plant.
 */
class CAESPlant : public PowerSystemResource
{

public:
	CAESPlant();
	virtual ~CAESPlant();
	/**
	 * The rated energy storage capacity.
	 */
	RealEnergy energyStorageCapacity;
	/**
	 * The CAES plant's gross rated generating capacity.
	 */
	ActivePower ratedCapacityP;
	/**
	 * A thermal generating unit may be a member of a compressed air energy storage
	 * plant.
	 */
    ThermalGeneratingUnit *thermalGeneratingUnit;
	/**
	 * An air compressor may be a member of a compressed air energy storage plant.
	 */
    AirCompressor *airCompressor;

};
#endif // !defined(EA_C24699FA_9A23_4154_AACD_0CD41B1021C3__INCLUDED_)
