///////////////////////////////////////////////////////////
//  TopologicalNode.h
//  Implementation of the Class TopologicalNode
//  Created on:      07-fev-2014 11:44:33
///////////////////////////////////////////////////////////

#if !defined(EA_36587D9D_FD18_4553_A296_38A71A8132AC__INCLUDED_)
#define EA_36587D9D_FD18_4553_A296_38A71A8132AC__INCLUDED_

#include "ConnectivityNode.h"
#include "IdentifiedObject.h"
#include "ReportingGroup.h"
#include "Terminal.h"
#include "ConnectivityNodeContainer.h"
#include "BaseVoltage.h"

/**
 * For a detailed substation model a topological node is a set of connectivity
 * nodes that, in the current network state, are connected together through any
 * type of closed switches, including  jumpers. Topological nodes change as the
 * current network state changes (i.e., switches, breakers, etc. change state).
 * For a planning model, switch statuses are not used to form topological nodes.
 * Instead they are manually created or deleted in a model builder tool.
 * Topological nodes maintained this way are also called "busses".
 */
class TopologicalNode : public IdentifiedObject
{

public:
	TopologicalNode();
	virtual ~TopologicalNode();
	/**
	 * The connectivity nodes combine together to form this topological node.  May
	 * depend on the current state of switches in the network.
	 */
	QList<ConnectivityNode> *ConnectivityNodes;
	/**
	 * The reporting group to which the topological node belongs.
	 */
    ReportingGroup *reportingGroup;
	/**
	 * The terminals associated with the topological node.   This can be used as an
	 * alternative to the connectivity node path to terminal, thus making it
	 * unneccesary to model connectivity nodes in some cases.   Note that if
	 * connectivity nodes are in the model, this association would probably not be
	 * used as an input specification.
	 */
    QList<Terminal> *Terminals;
	/**
	 * The connectivity node container to which the toplogical node belongs.
	 */
    ConnectivityNodeContainer *connectivityNodeContainer;
	/**
	 * The base voltage of the topologocial node.
	 */
    BaseVoltage *baseVoltage;

};
#endif // !defined(EA_36587D9D_FD18_4553_A296_38A71A8132AC__INCLUDED_)
