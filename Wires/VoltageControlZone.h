///////////////////////////////////////////////////////////
//  VoltageControlZone.h
//  Implementation of the Class VoltageControlZone
//  Created on:      07-fev-2014 11:44:35
///////////////////////////////////////////////////////////

#if !defined(EA_3F625856_B52C_482b_8D68_5611800C0E62__INCLUDED_)
#define EA_3F625856_B52C_482b_8D68_5611800C0E62__INCLUDED_

#include "PowerSystemResource.h"

/**
 * An area of the power system network which is defined for secondary voltage
 * control purposes. A voltage control zone consists of a collection of
 * substations with a designated bus bar section whose voltage will be controlled.
 */
class VoltageControlZone : public PowerSystemResource
{

public:
	VoltageControlZone();
	virtual ~VoltageControlZone();
};
#endif // !defined(EA_3F625856_B52C_482b_8D68_5611800C0E62__INCLUDED_)
