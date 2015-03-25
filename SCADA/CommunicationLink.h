///////////////////////////////////////////////////////////
//  CommunicationLink.h
//  Implementation of the Class CommunicationLink
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_AD5F9B46_9AC3_48b2_B05C_EEE0C4719750__INCLUDED_)
#define EA_AD5F9B46_9AC3_48b2_B05C_EEE0C4719750__INCLUDED_

#include "RemoteUnit.h"
#include "PowerSystemResource.h"

/**
 * The connection to remote units is through one or more communication links.
 * Reduntant links may exist. The CommunicationLink class inherit
 * PowerSystemResource. The intention is to allow CommunicationLinks to have
 * Measurements. These Measurements can be used to model link status as
 * operational, out of service, unit failure etc.
 */
class CommunicationLink : public PowerSystemResource
{

public:
	CommunicationLink();
	virtual ~CommunicationLink();
	/**
	 * RTUs may be attached to communication links.
	 */
	QList<RemoteUnit> *RemoteUnits;

};
#endif // !defined(EA_AD5F9B46_9AC3_48b2_B05C_EEE0C4719750__INCLUDED_)
