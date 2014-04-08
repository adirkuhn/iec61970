///////////////////////////////////////////////////////////
//  HydroPlantType.h
//  Implementation of the Class HydroPlantType
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_906469CD_DE67_4cc1_9E0F_1BF3B2A0E8BD__INCLUDED_)
#define EA_906469CD_DE67_4cc1_9E0F_1BF3B2A0E8BD__INCLUDED_

/**
 * The type of hydro power plant.
 */
enum HydroPlantType
{
	/**
	 * Run of river.
	 */
	runOfRiver,
	/**
	 * Pumped storage.
	 */
	pumpedStorage,
	/**
	 * Major storage.
	 */
	majorStorage,
	/**
	 * Minor storage.
	 */
	minorStorage
};
#endif // !defined(EA_906469CD_DE67_4cc1_9E0F_1BF3B2A0E8BD__INCLUDED_)
