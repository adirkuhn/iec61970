///////////////////////////////////////////////////////////
//  ModelingAuthoritySet.h
//  Implementation of the Class ModelingAuthoritySet
//  Created on:      07-fev-2014 11:44:09
///////////////////////////////////////////////////////////

#ifndef EA_424808C1_D644_4be5_A94B_51FAB8FBD4AF__INCLUDED_
#define EA_424808C1_D644_4be5_A94B_51FAB8FBD4AF__INCLUDED_

#include "IdentifiedObject.h"

#include "ModelingAuthority.h"

/**
 * A Modeling Authority Set is a group of objects in a network model where the
 * data is supplied and maintained by the same Modeling Authority.
 * This class is typically not included in instance data exchange as this
 * information is tracked by other mechanisms in the exchange.
 */
class ModelingAuthoritySet : public IdentifiedObject
{

public:
	ModelingAuthoritySet();
	virtual ~ModelingAuthoritySet();

	/**
	 * A Modeling Authority set supplies and maintains the data for the objects in a
	 * Modeling Authority Set.
	 */
    ModelingAuthority *modelingAuthority;
};
#endif // !defined(EA_424808C1_D644_4be5_A94B_51FAB8FBD4AF__INCLUDED_)
