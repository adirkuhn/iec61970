///////////////////////////////////////////////////////////
//  ModelingAuthority.h
//  Implementation of the Class ModelingAuthority
//  Created on:      07-fev-2014 11:44:09
///////////////////////////////////////////////////////////

#if !defined(EA_99BD4A7C_3645_49d1_9F1A_A852A72CB1D5__INCLUDED_)
#define EA_99BD4A7C_3645_49d1_9F1A_A852A72CB1D5__INCLUDED_

#include "IdentifiedObject.h"

/**
 * A Modeling Authority is an entity responsible for supplying and maintaining the
 * data defining a specific set of objects in a network model.
 */
class ModelingAuthority : public IdentifiedObject
{

public:
	ModelingAuthority();
	virtual ~ModelingAuthority();
};
#endif // !defined(EA_99BD4A7C_3645_49d1_9F1A_A852A72CB1D5__INCLUDED_)
