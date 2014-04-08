///////////////////////////////////////////////////////////
//  TopologicalIsland.h
//  Implementation of the Class TopologicalIsland
//  Created on:      07-fev-2014 11:44:32
///////////////////////////////////////////////////////////

#if !defined(EA_4B2D1951_3AA3_4ddb_9C95_EC7009AA6D3C__INCLUDED_)
#define EA_4B2D1951_3AA3_4ddb_9C95_EC7009AA6D3C__INCLUDED_

#include "TopologicalNode.h"
#include "IdentifiedObject.h"

/**
 * An electrically connected subset of the network. Topological islands can change
 * as the current network state changes: e.g. due to
 * - disconnect switches or breakers change state in a SCADA/EMS
 * - manual creation, change or deletion of topological nodes in a planning tool.
 */
class TopologicalIsland : public IdentifiedObject
{

public:
	TopologicalIsland();
	virtual ~TopologicalIsland();
	/**
	 * A topological node belongs to a topological island.
	 */
	QList<TopologicalNode> *TopologicalNodes;
	/**
	 * The angle reference for the island.   Normally there is one TopologicalNode
	 * that is selected as the angle reference for each island.   Other reference
	 * schemes exist, so the association is typically optional.
	 */
	TopologicalNode *AngleRef_TopologicalNode;

};
#endif // !defined(EA_4B2D1951_3AA3_4ddb_9C95_EC7009AA6D3C__INCLUDED_)
