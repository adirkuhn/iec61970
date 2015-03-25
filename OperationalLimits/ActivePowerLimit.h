///////////////////////////////////////////////////////////
//  ActivePowerLimit.h
//  Implementation of the Class ActivePowerLimit
//  Created on:      07-fev-2014 11:43:27
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B7BE4E62_B8C9_458f_951C_8649BD2CC3E8__INCLUDED_)
#define EA_B7BE4E62_B8C9_458f_951C_8649BD2CC3E8__INCLUDED_

#include "ActivePower.h"
#include "OperationalLimit.h"

/**
 * Limit on active power flow.
 */
class ActivePowerLimit : public OperationalLimit
{

public:
	ActivePowerLimit();
	virtual ~ActivePowerLimit();
	/**
	 * Value of active power limit.
	 */
	ActivePower value;

};
#endif // !defined(EA_B7BE4E62_B8C9_458f_951C_8649BD2CC3E8__INCLUDED_)
