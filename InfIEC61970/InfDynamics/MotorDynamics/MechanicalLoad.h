///////////////////////////////////////////////////////////
//  MechanicalLoad.h
//  Implementation of the Class MechanicalLoad
//  Created on:      07-fev-2014 11:44:06
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_292846F5_8D55_4fb4_AAC3_4AC30BEC418F__INCLUDED_)
#define EA_292846F5_8D55_4fb4_AAC3_4AC30BEC418F__INCLUDED_

#include "PowerSystemResource.h"

/**
 * A mechanical load represents the variation in a motor's shaft torque or power
 * as a
 * function of shaft speed.
 */
class MechanicalLoad : public PowerSystemResource
{

public:
	MechanicalLoad();
	virtual ~MechanicalLoad();

};
#endif // !defined(EA_292846F5_8D55_4fb4_AAC3_4AC30BEC418F__INCLUDED_)
