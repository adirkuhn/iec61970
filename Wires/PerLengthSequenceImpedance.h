///////////////////////////////////////////////////////////
//  PerLengthSequenceImpedance.h
//  Implementation of the Class PerLengthSequenceImpedance
//  Created on:      07-fev-2014 11:44:13
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_5D2B9EF4_A43B_483f_81C5_13E8F1530E9F__INCLUDED_)
#define EA_5D2B9EF4_A43B_483f_81C5_13E8F1530E9F__INCLUDED_

#include "SusceptancePerLength.h"
#include "ConductancePerLength.h"
#include "ResistancePerLength.h"
#include "ReactancePerLength.h"
#include "PerLengthImpedance.h"

/**
 * Sequence impedance and admittance parameters per unit length, for transposed
 * lines of 1, 2, or 3 phases. For 1-phase lines, define x=x0=xself. For 2-phase
 * lines, define x=xs-xm and x0=xs+xm.
 */
class PerLengthSequenceImpedance : public PerLengthImpedance
{

public:
	PerLengthSequenceImpedance();
	virtual ~PerLengthSequenceImpedance();
	/**
	 * Zero sequence shunt (charging) susceptance, per unit of length.
	 */
	SusceptancePerLength b0ch;
	/**
	 * Positive sequence shunt (charging) susceptance, per unit of length.
	 */
	SusceptancePerLength bch;
	/**
	 * Zero sequence shunt (charging) conductance, per unit of length.
	 */
	ConductancePerLength g0ch;
	/**
	 * Positive sequence shunt (charging) conductance, per unit of length.
	 */
	ConductancePerLength gch;
	/**
	 * Positive sequence series resistance, per unit of length.
	 */
	ResistancePerLength r;
	/**
	 * Zero sequence series resistance, per unit of length.
	 */
	ResistancePerLength r0;
	/**
	 * Positive sequence series reactance, per unit of length.
	 */
	ReactancePerLength x;
	/**
	 * Zero sequence series reactance, per unit of length.
	 */
	ReactancePerLength x0;

};
#endif // !defined(EA_5D2B9EF4_A43B_483f_81C5_13E8F1530E9F__INCLUDED_)
