///////////////////////////////////////////////////////////
//  EquipmentContainer.h
//  Implementation of the Class EquipmentContainer
//  Created on:      07-fev-2014 11:43:43
///////////////////////////////////////////////////////////

#if !defined(EA_9251411D_FC4B_4d21_9931_18E7477A9650__INCLUDED_)
#define EA_9251411D_FC4B_4d21_9931_18E7477A9650__INCLUDED_

#include "Equipment.h"
#include "ConnectivityNodeContainer.h"

/**
 * A modeling construct to provide a root class for containing equipment. 
 */
class EquipmentContainer : public ConnectivityNodeContainer
{

public:
	EquipmentContainer();
	virtual ~EquipmentContainer();

	/**
	 * Contained equipment.
	 */
    QList<Equipment*> equipments;
};
#endif // !defined(EA_9251411D_FC4B_4d21_9931_18E7477A9650__INCLUDED_)
