///////////////////////////////////////////////////////////
//  ExcitationSystem.h
//  Implementation of the Class ExcitationSystem
//  Created on:      07-fev-2014 11:43:47
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_6F83FECB_E54E_4938_8338_5E3CFD39BCD2__INCLUDED_)
#define EA_6F83FECB_E54E_4938_8338_5E3CFD39BCD2__INCLUDED_

#include "PowerSystemResource.h"

/**
 * An excitation system provides the field voltage (Efd) for a synchronous machine
 * model. It is linked to a specific generator by the Bus number and Unit ID.
 */
class ExcitationSystem : public PowerSystemResource
{

public:
	ExcitationSystem();
	virtual ~ExcitationSystem();

};
#endif // !defined(EA_6F83FECB_E54E_4938_8338_5E3CFD39BCD2__INCLUDED_)
