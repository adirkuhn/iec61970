///////////////////////////////////////////////////////////
//  AuxiliaryEquipment.h
//  Implementation of the Class AuxiliaryEquipment
//  Created on:      07-fev-2014 11:43:29
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_C44EA2D0_19A5_483c_9FEF_81F8FB999FD6__INCLUDED_)
#define EA_C44EA2D0_19A5_483c_9FEF_81F8FB999FD6__INCLUDED_

#include "Equipment.h"
#include "Terminal.h"

/**
 * AuxiliaryEquipment describe equipment that is not performing any primary
 * functions but support for the equipment performing the primary function.
 * AuxiliaryEquipment is attached to primary eqipment via an association with
 * Terminal.
 */
class AuxiliaryEquipment : public Equipment
{

public:
	AuxiliaryEquipment();
	virtual ~AuxiliaryEquipment();
	/**
	 * The Terminal at the equipment where the AuxiliaryEquipment is attached.
	 */
    Terminal *pTerminal;

};
#endif // !defined(EA_C44EA2D0_19A5_483c_9FEF_81F8FB999FD6__INCLUDED_)
