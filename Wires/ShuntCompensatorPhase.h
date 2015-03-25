///////////////////////////////////////////////////////////
//  ShuntCompensatorPhase.h
//  Implementation of the Class ShuntCompensatorPhase
//  Created on:      07-fev-2014 11:44:24
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_042809AC_F854_441a_95EA_2F33E9243049__INCLUDED_)
#define EA_042809AC_F854_441a_95EA_2F33E9243049__INCLUDED_

#include "Susceptance.h"
#include "Conductance.h"
#include "Integer.h"
#include "SinglePhaseKind.h"
#include "PowerSystemResource.h"

/**
 * Single phase of a multi-phase shunt compensator when its attributes might be
 * different per phase.
 */
class ShuntCompensatorPhase : public PowerSystemResource
{

public:
	ShuntCompensatorPhase();
	virtual ~ShuntCompensatorPhase();
	/**
	 * Susceptance per section of the phase if shunt compensator is wye connected.
	 * Susceptance per section phase to phase if shunt compensator is delta connected.
	 */
	Susceptance bPerSection;
	/**
	 * Conductance per section for this phase if shunt compensator is wye connected.
	 * Conductance per section phase to phase if shunt compensator is delta connected.
	 */
	Conductance gPerSection;
	/**
	 * The maximum number of sections that may be switched in for this phase. 
	 */
	Integer maximumSections;
	/**
	 * For the capacitor phase, the normal number of sections switched in.
	 */
	Integer normalSections;
	/**
	 * Phase of this shunt compensator component.   If the shunt compensator is wye
	 * connected, the connection is from the indicated phase to the central ground or
	 * neutral point.  If the shunt compensator is delta connected, the phase
	 * indicates a shunt compensator connected from the indicated phase to the next
	 * logical non-neutral phase.
	 */
	SinglePhaseKind phase;

};
#endif // !defined(EA_042809AC_F854_441a_95EA_2F33E9243049__INCLUDED_)
