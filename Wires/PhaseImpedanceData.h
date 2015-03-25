///////////////////////////////////////////////////////////
//  PhaseImpedanceData.h
//  Implementation of the Class PhaseImpedanceData
//  Created on:      07-fev-2014 11:44:13
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_73DEB284_A4BC_4721_BED0_3B03D4A195FC__INCLUDED_)
#define EA_73DEB284_A4BC_4721_BED0_3B03D4A195FC__INCLUDED_

#include "Integer.h"
#include "SusceptancePerLength.h"
#include "ResistancePerLength.h"
#include "ReactancePerLength.h"

/**
 * Triplet of resistance, reactance, and susceptance matrix element values.
 */
class PhaseImpedanceData
{

public:
	PhaseImpedanceData();
	virtual ~PhaseImpedanceData();
	/**
	 * Column-wise element index, assuming a symmetrical matrix. Ranges from 1 to N +
	 * N*(N-1)/2.
	 */
	Integer sequenceNumber;
	/**
	 * Susceptance matrix element value, per length of unit.
	 */
	SusceptancePerLength b;
	/**
	 * Resistance matrix element value, per length of unit.
	 */
	ResistancePerLength r;
	/**
	 * Reactance matrix element value, per length of unit.
	 */
	ReactancePerLength x;

};
#endif // !defined(EA_73DEB284_A4BC_4721_BED0_3B03D4A195FC__INCLUDED_)
