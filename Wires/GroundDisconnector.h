///////////////////////////////////////////////////////////
//  GroundDisconnector.h
//  Implementation of the Class GroundDisconnector
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_57814BC8_1FEF_470b_9FE5_316ADFC77443__INCLUDED_)
#define EA_57814BC8_1FEF_470b_9FE5_316ADFC77443__INCLUDED_

#include "Switch.h"

/**
 * A manually operated or motor operated mechanical switching device used for
 * isolating a circuit or equipment from Ground.
 */
class GroundDisconnector : public Switch
{

public:
	GroundDisconnector();
	virtual ~GroundDisconnector();

};
#endif // !defined(EA_57814BC8_1FEF_470b_9FE5_316ADFC77443__INCLUDED_)
