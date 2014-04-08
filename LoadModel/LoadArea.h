///////////////////////////////////////////////////////////
//  LoadArea.h
//  Implementation of the Class LoadArea
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_6B607899_7545_45ec_85BC_F11703CE4F91__INCLUDED_)
#define EA_6B607899_7545_45ec_85BC_F11703CE4F91__INCLUDED_

#include "SubLoadArea.h"
#include "EnergyArea.h"

/**
 * The class is the root or first level in a hierarchical structure for grouping
 * of loads for the purpose of load flow load scaling.
 */
class LoadArea : public EnergyArea
{

public:
	LoadArea();
	virtual ~LoadArea();
	/**
	 * The SubLoadAreas in the LoadArea.
	 */
	QList<SubLoadArea> *SubLoadAreas;

};
#endif // !defined(EA_6B607899_7545_45ec_85BC_F11703CE4F91__INCLUDED_)
