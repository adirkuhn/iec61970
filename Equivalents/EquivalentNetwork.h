///////////////////////////////////////////////////////////
//  EquivalentNetwork.h
//  Implementation of the Class EquivalentNetwork
//  Created on:      07-fev-2014 11:43:43
///////////////////////////////////////////////////////////

#if !defined(EA_60B5F252_1FD9_46eb_B597_89B3F769C2C2__INCLUDED_)
#define EA_60B5F252_1FD9_46eb_B597_89B3F769C2C2__INCLUDED_

#include "EquivalentEquipment.h"
#include "ConnectivityNodeContainer.h"

/**
 * A class that represents an external meshed network that has been reduced to an
 * electrically equivalent model. The ConnectivityNodes contained in the
 * equivalent are intended to reflect internal nodes of the equivalent. The
 * boundary Connectivity nodes where the equivalent connects outside itself are
 * NOT contained by the equivalent.
 */
class EquivalentNetwork : public ConnectivityNodeContainer
{

public:
	EquivalentNetwork();
	virtual ~EquivalentNetwork();
	/**
	 * The associated reduced equivalents.
	 */
	QList<EquivalentEquipment> *EquivalentEquipments;

};
#endif // !defined(EA_60B5F252_1FD9_46eb_B597_89B3F769C2C2__INCLUDED_)
