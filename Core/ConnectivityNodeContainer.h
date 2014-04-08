///////////////////////////////////////////////////////////
//  ConnectivityNodeContainer.h
//  Implementation of the Class ConnectivityNodeContainer
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_E28B8083_1E08_47cc_AC80_F6D4379005D8__INCLUDED_)
#define EA_E28B8083_1E08_47cc_AC80_F6D4379005D8__INCLUDED_

#include <QList>

#include "PowerSystemResource.h"

class ConnectivityNode;

/**
 * A base class for all objects that may contain connectivity nodes or topological
 * nodes.
 */
class ConnectivityNodeContainer : public PowerSystemResource
{

public:
	ConnectivityNodeContainer();
	virtual ~ConnectivityNodeContainer();

    /**
     * Connectivity nodes which belong to this connectivity node container.
     */
    QList<ConnectivityNode*> connectivityNodes;
};
#endif // !defined(EA_E28B8083_1E08_47cc_AC80_F6D4379005D8__INCLUDED_)
