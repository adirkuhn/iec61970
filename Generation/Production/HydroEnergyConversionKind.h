///////////////////////////////////////////////////////////
//  HydroEnergyConversionKind.h
//  Implementation of the Class HydroEnergyConversionKind
//  Created on:      07-fev-2014 11:43:59
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B15E5A91_EFB9_4956_BDEA_73F38F5D8C85__INCLUDED_)
#define EA_B15E5A91_EFB9_4956_BDEA_73F38F5D8C85__INCLUDED_

/**
 * Specifies the capability of the hydro generating unit to convert energy as a
 * generator or pump.
 */
enum HydroEnergyConversionKind
{
	/**
	 * Able to generate power, but not able to pump water for energy storage.
	 */
	generator,
	/**
	 * Able to both generate power and pump water for energy storage.
	 */
	pumpAndGenerator
};
#endif // !defined(EA_B15E5A91_EFB9_4956_BDEA_73F38F5D8C85__INCLUDED_)
