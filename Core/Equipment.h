///////////////////////////////////////////////////////////
//  Equipment.h
//  Implementation of the Class Equipment
//  Created on:      07-fev-2014 11:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_06F9D48A_EFEB_4003_8ADA_10A1FCDBF75A__INCLUDED_)
#define EA_06F9D48A_EFEB_4003_8ADA_10A1FCDBF75A__INCLUDED_

#include "Boolean.h"

#include <PowerSystemResource.h>

/**
 * The parts of a power system that are physical devices, electronic or mechanical.
 */
class Equipment : public PowerSystemResource
{

public:
	Equipment();
	virtual ~Equipment();

	/**
	 * The single instance of equipment represents multiple pieces of equipment that
	 * have been modeled together as an aggregate.  Examples would be power
	 * transformers or sychronous machines operating in parallel modeled as a single
	 * aggregate power transformer or aggregate synchronous machine.  This is not to
	 * be used to indicate equipment that is part of a group of interdependent
	 * equipment produced by a network production program.  
	 */
	Boolean aggregate;

	/**
	 * If true, the equipment is normally in service.
	 */
	Boolean normallyInService;
};
#endif // !defined(EA_06F9D48A_EFEB_4003_8ADA_10A1FCDBF75A__INCLUDED_)
