///////////////////////////////////////////////////////////
//  EquivalentEquipment.h
//  Implementation of the Class EquivalentEquipment
//  Created on:      07-fev-2014 11:43:43
///////////////////////////////////////////////////////////

#if !defined(EA_561BFB05_C00D_450b_A318_90DBD18EC93B__INCLUDED_)
#define EA_561BFB05_C00D_450b_A318_90DBD18EC93B__INCLUDED_

#include "ConductingEquipment.h"

/**
 * The class represents equivalent objects that are the result of a network
 * reduction. The class is the base for equivalent objects of different types.
 */
class EquivalentEquipment : public ConductingEquipment
{

public:
	EquivalentEquipment();
	virtual ~EquivalentEquipment();

};
#endif // !defined(EA_561BFB05_C00D_450b_A318_90DBD18EC93B__INCLUDED_)
