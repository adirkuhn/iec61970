///////////////////////////////////////////////////////////
//  Connector.h
//  Implementation of the Class Connector
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_E64227F1_A36F_4e7e_8B7E_97894AAE025E__INCLUDED_)
#define EA_E64227F1_A36F_4e7e_8B7E_97894AAE025E__INCLUDED_

#include "ConductingEquipment.h"

/**
 * A conductor, or group of conductors, with negligible impedance, that serve to
 * connect other conducting equipment within a single substation and are modelled
 * with a single logical terminal.
 */
class Connector : public ConductingEquipment
{

public:
	Connector();
	virtual ~Connector();
};
#endif // !defined(EA_E64227F1_A36F_4e7e_8B7E_97894AAE025E__INCLUDED_)
