///////////////////////////////////////////////////////////
//  GenEquiv.h
//  Implementation of the Class GenEquiv
//  Created on:      07-fev-2014 11:43:52
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_8480204D_477C_4e0c_836E_CA9288C98708__INCLUDED_)
#define EA_8480204D_477C_4e0c_836E_CA9288C98708__INCLUDED_

#include "Reactance.h"
#include "SynchronousMachine.h"
#include "RotatingMachine.h"

/**
 * An equivalent representation of a synchronous generator as a constant internal
 * voltage behind an impedance Ra plus Xp. 
 */
class GenEquiv : public RotatingMachine
{

public:
	GenEquiv();
	virtual ~GenEquiv();
	/**
	 * Equivalent reactance, also known as Xp.
	 */
	Reactance xp;
	/**
	 * The synchronous machine of the equivalent.
	 */
    SynchronousMachine *synchronousMachine;

};
#endif // !defined(EA_8480204D_477C_4e0c_836E_CA9288C98708__INCLUDED_)
