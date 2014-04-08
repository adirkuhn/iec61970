///////////////////////////////////////////////////////////
//  SurgeProtector.h
//  Implementation of the Class SurgeProtector
//  Created on:      07-fev-2014 11:44:28
///////////////////////////////////////////////////////////

#if !defined(EA_F7AE273F_803E_441d_AAF7_987327F2A126__INCLUDED_)
#define EA_F7AE273F_803E_441d_AAF7_987327F2A126__INCLUDED_

#include "AuxiliaryEquipment.h"

/**
 * Shunt device, installed on the network, usually in the proximity of electrical
 * equipment in order to protect the said equipment against transient voltage
 * spikes caused by lightning or switching activity.
 */
class SurgeProtector : public AuxiliaryEquipment
{

public:
	SurgeProtector();
	virtual ~SurgeProtector();

};
#endif // !defined(EA_F7AE273F_803E_441d_AAF7_987327F2A126__INCLUDED_)
