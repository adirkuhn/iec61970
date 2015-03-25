///////////////////////////////////////////////////////////
//  ConnectivityNode.h
//  Implementation of the Class ConnectivityNode
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_0232B724_FC62_49c4_BD62_32FFB013D820__INCLUDED_)
#define EA_0232B724_FC62_49c4_BD62_32FFB013D820__INCLUDED_

#include "IdentifiedObject.h"
#include "ConnectivityNodeContainer.h"

/**
 * Connectivity nodes are points where terminals of conducting equipment are
 * connected together with zero impedance.
 */
class ConnectivityNode : public IdentifiedObject
{

public:
	ConnectivityNode();
	virtual ~ConnectivityNode();

	/**
	 * Container of this connectivity node.
	 */
    ConnectivityNodeContainer *connectivityNodeContainer;
};
#endif // !defined(EA_0232B724_FC62_49c4_BD62_32FFB013D820__INCLUDED_)
