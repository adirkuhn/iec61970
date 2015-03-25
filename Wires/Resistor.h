///////////////////////////////////////////////////////////
//  Resistor.h
//  Implementation of the Class Resistor
//  Created on:      07-fev-2014 11:44:22
///////////////////////////////////////////////////////////

#if !defined(EA_28030839_5421_4214_A162_2EAC7F2BD96F__INCLUDED_)
#define EA_28030839_5421_4214_A162_2EAC7F2BD96F__INCLUDED_

#include "ConductingEquipment.h"

/**
 * Resistor, typically used in filter configurations or as earthing resistor for
 * transformers.  Used for electrical model of distribution networks.
 */
class Resistor : public ConductingEquipment
{

public:
	Resistor();
	virtual ~Resistor();

};
#endif // !defined(EA_28030839_5421_4214_A162_2EAC7F2BD96F__INCLUDED_)
