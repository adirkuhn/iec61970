///////////////////////////////////////////////////////////
//  CurrentLimit.h
//  Implementation of the Class CurrentLimit
//  Created on:      07-fev-2014 11:43:38
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B63B7B6D_1950_42b4_901D_7B5E0D72B798__INCLUDED_)
#define EA_B63B7B6D_1950_42b4_901D_7B5E0D72B798__INCLUDED_

#include "CurrentFlow.h"
#include "OperationalLimit.h"

/**
 * Operational limit on current. 
 */
class CurrentLimit : public OperationalLimit
{

public:
	CurrentLimit();
	virtual ~CurrentLimit();
	/**
	 * Limit on current flow.
	 */
	CurrentFlow value;

};
#endif // !defined(EA_B63B7B6D_1950_42b4_901D_7B5E0D72B798__INCLUDED_)
