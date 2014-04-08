///////////////////////////////////////////////////////////
//  MotorSync.h
//  Implementation of the Class MotorSync
//  Created on:      07-fev-2014 11:44:10
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_AA4F1347_2E46_4544_B42D_FBACC24CE211__INCLUDED_)
#define EA_AA4F1347_2E46_4544_B42D_FBACC24CE211__INCLUDED_

#include "SynchronousMotorType.h"
#include "SynchronousMachine.h"

/**
 * A large industrial motor or group of similar motors.  They are represented as
 * <b>generators with negative Pgen</b> in the static (power flow) data.
 */
class MotorSync : public SynchronousMachine
{

public:
	MotorSync();
	virtual ~MotorSync();
	/**
	 * The type of synchronous motor, such as round rotor or salient pole.
	 */
	SynchronousMotorType synchronousMotorType;

};
#endif // !defined(EA_AA4F1347_2E46_4544_B42D_FBACC24CE211__INCLUDED_)
