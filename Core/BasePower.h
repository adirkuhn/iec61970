///////////////////////////////////////////////////////////
//  BasePower.h
//  Implementation of the Class BasePower
//  Created on:      07-fev-2014 11:43:29
///////////////////////////////////////////////////////////

#if !defined(EA_A6C8BEB8_AA5B_4b6a_9F48_4EAFAF14D31C__INCLUDED_)
#define EA_A6C8BEB8_AA5B_4b6a_9F48_4EAFAF14D31C__INCLUDED_

#include "ApparentPower.h"
#include "IdentifiedObject.h"

/**
 * The BasePower class defines the base power used in the per unit calculations.
 */
class BasePower : public IdentifiedObject
{

public:
	BasePower();
	virtual ~BasePower();

	/**
	 * Value used as base power.
	 */
	ApparentPower basePower;
};
#endif // !defined(EA_A6C8BEB8_AA5B_4b6a_9F48_4EAFAF14D31C__INCLUDED_)
