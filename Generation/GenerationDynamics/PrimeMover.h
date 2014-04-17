///////////////////////////////////////////////////////////
//  PrimeMover.h
//  Implementation of the Class PrimeMover
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_665A2580_1838_409d_9245_D3A3A549E295__INCLUDED_)
#define EA_665A2580_1838_409d_9245_D3A3A549E295__INCLUDED_

#include "lFloat.h"
#include "PowerSystemResource.h"
#include "SynchronousMachine.h"

/**
 * The machine used to develop mechanical energy used to drive a generator.
 */
class PrimeMover : public PowerSystemResource
{

public:
	PrimeMover();
	virtual ~PrimeMover();
	/**
	 * Rating of prime mover.
	 */
	Float primeMoverRating;
	/**
	 * Synchronous machines this Prime mover drives.
	 */
	QList<SynchronousMachine> *SynchronousMachines;

};
#endif // !defined(EA_665A2580_1838_409d_9245_D3A3A549E295__INCLUDED_)
