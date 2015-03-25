///////////////////////////////////////////////////////////
//  NonConformLoad.h
//  Implementation of the Class NonConformLoad
//  Created on:      07-fev-2014 11:44:11
///////////////////////////////////////////////////////////

#if !defined(EA_BB75C390_7BB4_4813_898B_B8D7FC53F56A__INCLUDED_)
#define EA_BB75C390_7BB4_4813_898B_B8D7FC53F56A__INCLUDED_

#include "EnergyConsumer.h"

/**
 * NonConformLoad represent loads that do not follow a daily load change pattern
 * and changes are not correlated with the daily load change pattern.
 */
class NonConformLoad : public EnergyConsumer
{

public:
	NonConformLoad();
	virtual ~NonConformLoad();

};
#endif // !defined(EA_BB75C390_7BB4_4813_898B_B8D7FC53F56A__INCLUDED_)
