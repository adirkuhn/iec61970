///////////////////////////////////////////////////////////
//  Sensor.h
//  Implementation of the Class Sensor
//  Created on:      07-fev-2014 11:44:23
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_BE4BB12D_DD9C_443e_8F2D_A2C0727F8687__INCLUDED_)
#define EA_BE4BB12D_DD9C_443e_8F2D_A2C0727F8687__INCLUDED_

#include "AuxiliaryEquipment.h"

/**
 * This class describe devices that transform a measured quantity into signals
 * that can be presented at displays, used in control or be recorded.
 */
class Sensor : public AuxiliaryEquipment
{

public:
	Sensor();
	virtual ~Sensor();

};
#endif // !defined(EA_BE4BB12D_DD9C_443e_8F2D_A2C0727F8687__INCLUDED_)
