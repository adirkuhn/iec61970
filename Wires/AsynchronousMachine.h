///////////////////////////////////////////////////////////
//  AsynchronousMachine.h
//  Implementation of the Class AsynchronousMachine
//  Created on:      07-fev-2014 11:43:29
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_41B635C1_0870_46d1_A9D5_04F7E9975935__INCLUDED_)
#define EA_41B635C1_0870_46d1_A9D5_04F7E9975935__INCLUDED_

#include "Resistance.h"
#include "Seconds.h"
#include "Reactance.h"
#include "RotatingMachine.h"

/**
 * A rotating machine whose shaft rotates asynchronously with the electrical field.
 *  Also known as an induction machine with no external connection to the rotor
 * windings, e.g squirel-cage induction machine.
 */
class AsynchronousMachine : public RotatingMachine
{

public:
	AsynchronousMachine();
	virtual ~AsynchronousMachine();
	/**
	 * Damper 1 winding resistance.
	 */
	Resistance rr1;
	/**
	 * Damper 2 winding resistance.
	 */
	Resistance rr2;
	/**
	 * Transient rotor time constant (greater than tppo).
	 */
	Seconds tpo;
	/**
	 * Sub-transient rotor time constant (greater than 0).
	 */
	Seconds tppo;
	/**
	 * Damper 1 winding leakage reactance.
	 */
	Reactance xlr1;
	/**
	 * Damper 2 winding leakage reactance.
	 */
	Reactance xlr2;
	/**
	 * Magnetizing reactance.
	 */
	Reactance xm;
	/**
	 * Transient reactance (unsaturated) (greater than or equal to xpp).
	 */
	Reactance xp;
	/**
	 * Sub-transient reactance (unsaturated) (greather than Xl).
	 */
	Reactance xpp;
	/**
	 * Synchronous reactance (greather than xp).
	 */
	Reactance xs;

};
#endif // !defined(EA_41B635C1_0870_46d1_A9D5_04F7E9975935__INCLUDED_)
