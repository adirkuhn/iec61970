///////////////////////////////////////////////////////////
//  FuelType.h
//  Implementation of the Class FuelType
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_6986601A_1B62_465f_A202_5A611D4F7622__INCLUDED_)
#define EA_6986601A_1B62_465f_A202_5A611D4F7622__INCLUDED_

/**
 * Type of fuel.
 */
enum FuelType
{
	/**
	 * Generic coal, not including lignite type.
	 */
	coal,
	/**
	 * Oil.
	 */
	oil,
	/**
	 * Gas.
	 */
	gas,
	/**
	 * The fuel is lignite coal.  Note that this is a special type of coal, so the
	 * other enum of coal is reserved for hard coal types or if the exact type of coal
	 * is not known.
	 */
	lignite
};
#endif // !defined(EA_6986601A_1B62_465f_A202_5A611D4F7622__INCLUDED_)
