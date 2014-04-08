///////////////////////////////////////////////////////////
//  OperationalLimit.h
//  Implementation of the Class OperationalLimit
//  Created on:      07-fev-2014 11:44:12
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D39B4E68_25C2_40c7_B154_1A689A015CCF__INCLUDED_)
#define EA_D39B4E68_25C2_40c7_B154_1A689A015CCF__INCLUDED_

#include "IdentifiedObject.h"
#include "OperationalLimitType.h"

/**
 * A value associated with a specific kind of limit. 
 */
class OperationalLimit : public IdentifiedObject
{

public:
	OperationalLimit();
	virtual ~OperationalLimit();
	/**
	 * The limit type associated with this limit.
	 */
    OperationalLimitType *operationalLimitType;

};
#endif // !defined(EA_D39B4E68_25C2_40c7_B154_1A689A015CCF__INCLUDED_)
