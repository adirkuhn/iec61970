///////////////////////////////////////////////////////////
//  ConductingEquipment.h
//  Implementation of the Class ConductingEquipment
//  Created on:      07-fev-2014 11:43:34
///////////////////////////////////////////////////////////

#if !defined(EA_2362C4A0_CD51_4034_B18C_273C36A31687__INCLUDED_)
#define EA_2362C4A0_CD51_4034_B18C_273C36A31687__INCLUDED_

#include "Equipment.h"

/**
 * The parts of the power system that are designed to carry current or that are
 * conductively connected through terminals.
 */
class ConductingEquipment : public Equipment
{

public:
	ConductingEquipment();
	virtual ~ConductingEquipment();
};
#endif // !defined(EA_2362C4A0_CD51_4034_B18C_273C36A31687__INCLUDED_)
