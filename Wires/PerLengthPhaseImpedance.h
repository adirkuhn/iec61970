///////////////////////////////////////////////////////////
//  PerLengthPhaseImpedance.h
//  Implementation of the Class PerLengthPhaseImpedance
//  Created on:      07-fev-2014 11:44:13
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_284ADED7_C9A6_45ef_9FCA_B7CD90B7EB72__INCLUDED_)
#define EA_284ADED7_C9A6_45ef_9FCA_B7CD90B7EB72__INCLUDED_

#include "Integer.h"
#include "PhaseImpedanceData.h"
#include "PerLengthImpedance.h"

/**
 * Impedance and admittance parameters per unit length for n-wire unbalanced lines,
 * in matrix form.
 */
class PerLengthPhaseImpedance : public PerLengthImpedance
{

public:
	PerLengthPhaseImpedance();
	virtual ~PerLengthPhaseImpedance();
	/**
	 * Number of phase, neutral, and other wires retained. Constrains the number of
	 * matrix elements and the phase codes that can be used with this matrix.
	 */
	Integer conductorCount;
	/**
	 * All data that belong to this conductor phase impedance.
	 */
    QList<PhaseImpedanceData> *phaseImpedanceData;

};
#endif // !defined(EA_284ADED7_C9A6_45ef_9FCA_B7CD90B7EB72__INCLUDED_)
