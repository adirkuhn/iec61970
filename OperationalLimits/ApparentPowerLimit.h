///////////////////////////////////////////////////////////
//  ApparentPowerLimit.h
//  Implementation of the Class ApparentPowerLimit
//  Created on:      07-fev-2014 11:43:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D27E2C29_5E5A_444f_A9B2_A1AC13672742__INCLUDED_)
#define EA_D27E2C29_5E5A_444f_A9B2_A1AC13672742__INCLUDED_

#include "ApparentPower.h"
#include "OperationalLimit.h"

/**
 * Apparent power limit.
 */
class ApparentPowerLimit : public OperationalLimit
{

public:
	ApparentPowerLimit();
	virtual ~ApparentPowerLimit();
	/**
	 * The apparent power limit.
	 */
	ApparentPower value;

};
#endif // !defined(EA_D27E2C29_5E5A_444f_A9B2_A1AC13672742__INCLUDED_)
