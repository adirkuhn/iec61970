///////////////////////////////////////////////////////////
//  VoltageCompensator.h
//  Implementation of the Class VoltageCompensator
//  Created on:      07-fev-2014 11:44:35
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_01E3E1FD_6E87_4601_91FF_B137505FF954__INCLUDED_)
#define EA_01E3E1FD_6E87_4601_91FF_B137505FF954__INCLUDED_

#include "PowerSystemResource.h"

/**
 * A voltage compensator adjusts the terminal voltage feedback to the excitation
 * system by adding a quantity that is proportional to the terminal current of the
 * generator. It is linked to a specific generator by the Bus number and Unit ID.
 */
class VoltageCompensator : public PowerSystemResource
{

public:
	VoltageCompensator();
	virtual ~VoltageCompensator();

};
#endif // !defined(EA_01E3E1FD_6E87_4601_91FF_B137505FF954__INCLUDED_)
