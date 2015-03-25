///////////////////////////////////////////////////////////
//  PhaseTapChangerNonLinear.h
//  Implementation of the Class PhaseTapChangerNonLinear
//  Created on:      07-fev-2014 11:44:14
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_FC8E188D_2C70_4150_AC49_47788F487016__INCLUDED_)
#define EA_FC8E188D_2C70_4150_AC49_47788F487016__INCLUDED_

#include "PerCent.h"
#include "Reactance.h"
#include "PhaseTapChanger.h"

/**
 * The non-linear phase tap changer describes the non-linear behavior of a phase
 * tap changer. This is a base class for the symmetrical and asymmetrical phase
 * tap changer models. The details of these models can be found in the IEC 61970-
 * 301 document.
 */
class PhaseTapChangerNonLinear : public PhaseTapChanger
{

public:
	PhaseTapChangerNonLinear();
	virtual ~PhaseTapChangerNonLinear();
	/**
	 * The voltage step increment on the out of phase winding specified in percent of
	 * nominal voltage of the transformer end.
	 */
	PerCent voltageStepIncrement;
	/**
	 * The reactance at the maximum tap step.
	 */
	Reactance xMax;
	/**
	 * The reactance at the mid tap step.
	 */
	Reactance xMedian;

};
#endif // !defined(EA_FC8E188D_2C70_4150_AC49_47788F487016__INCLUDED_)
