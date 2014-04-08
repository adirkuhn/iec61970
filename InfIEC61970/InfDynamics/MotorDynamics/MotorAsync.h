///////////////////////////////////////////////////////////
//  MotorAsync.h
//  Implementation of the Class MotorAsync
//  Created on:      07-fev-2014 11:44:10
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_B46147FE_D681_45cc_94D5_F33E88A6C3B8__INCLUDED_)
#define EA_B46147FE_D681_45cc_94D5_F33E88A6C3B8__INCLUDED_

#include "AsynchronousMachine.h"

/**
 * An asynchronous (induction) motor with no external connection to the rotor
 * windings, e.g., a squirrel-cage induction motor.
 */
class MotorAsync : public AsynchronousMachine
{

public:
	MotorAsync();
	virtual ~MotorAsync();

};
#endif // !defined(EA_B46147FE_D681_45cc_94D5_F33E88A6C3B8__INCLUDED_)
