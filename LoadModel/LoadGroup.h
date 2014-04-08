///////////////////////////////////////////////////////////
//  LoadGroup.h
//  Implementation of the Class LoadGroup
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_EAE2B759_441A_4060_A5AA_A0E32F698B03__INCLUDED_)
#define EA_EAE2B759_441A_4060_A5AA_A0E32F698B03__INCLUDED_

#include "IdentifiedObject.h"

/**
 * The class is the third level in a hierarchical structure for grouping of loads
 * for the purpose of load flow load scaling.
 */
class LoadGroup : public IdentifiedObject
{

public:
	LoadGroup();
	virtual ~LoadGroup();

};
#endif // !defined(EA_EAE2B759_441A_4060_A5AA_A0E32F698B03__INCLUDED_)
