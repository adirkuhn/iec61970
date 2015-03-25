///////////////////////////////////////////////////////////
//  SubLoadArea.h
//  Implementation of the Class SubLoadArea
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_8CA97E51_6A7A_41ef_B4DA_C5E54649D69C__INCLUDED_)
#define EA_8CA97E51_6A7A_41ef_B4DA_C5E54649D69C__INCLUDED_

#include "LoadGroup.h"
#include "EnergyArea.h"

/**
 * The class is the second level in a hierarchical structure for grouping of loads
 * for the purpose of load flow load scaling.
 */
class SubLoadArea : public EnergyArea
{

public:
	SubLoadArea();
	virtual ~SubLoadArea();
	/**
	 * The Loadgroups in the SubLoadArea.
	 */
	QList<LoadGroup> *LoadGroups;

};
#endif // !defined(EA_8CA97E51_6A7A_41ef_B4DA_C5E54649D69C__INCLUDED_)
