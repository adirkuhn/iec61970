///////////////////////////////////////////////////////////
//  VoltageLimit.h
//  Implementation of the Class VoltageLimit
//  Created on:      07-fev-2014 11:44:35
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_124E4B32_F162_4c69_8717_8CD5F4748BE7__INCLUDED_)
#define EA_124E4B32_F162_4c69_8717_8CD5F4748BE7__INCLUDED_

#include "Voltage.h"
#include "OperationalLimit.h"

/**
 * Operational limit applied to voltage.
 */
class VoltageLimit : public OperationalLimit
{

public:
	VoltageLimit();
	virtual ~VoltageLimit();
	/**
	 * Limit on voltage. High or low limit nature of the limit depends upon the
	 * proprerties of the operational limit type.
	 */
	Voltage value;

};
#endif // !defined(EA_124E4B32_F162_4c69_8717_8CD5F4748BE7__INCLUDED_)
