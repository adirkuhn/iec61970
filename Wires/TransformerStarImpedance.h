///////////////////////////////////////////////////////////
//  TransformerStarImpedance.h
//  Implementation of the Class TransformerStarImpedance
//  Created on:      07-fev-2014 11:44:33
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_690E1A23_C4BD_4c87_A045_8FB857F5F4AB__INCLUDED_)
#define EA_690E1A23_C4BD_4c87_A045_8FB857F5F4AB__INCLUDED_

#include "Resistance.h"
#include "Reactance.h"
#include "IdentifiedObject.h"

/**
 * Transformer star impedance (Pi-model) that accurately reflects impedance for
 * transformers with 2 or 3 windings. For transformers with 4 or more windings,
 * you must use TransformerMeshImpedance class.
 *
 * For transmission networks use PowerTransformerEnd impedances (r, r0, x, x0, b,
 * b0, g and g0).
 */
class TransformerStarImpedance : public IdentifiedObject
{

public:
	TransformerStarImpedance();
	virtual ~TransformerStarImpedance();

	/**
	 * Resistance of the transformer end.
	 */
	Resistance r;

	/**
	 * Zero sequence series resistance of the transformer end.
	 */
	Resistance r0;

	/**
	 * Positive sequence series reactance of the transformer end.
	 */
	Reactance x;

	/**
	 * Zero sequence series reactance of the transformer end.
	 */
	Reactance x0;
};
#endif // !defined(EA_690E1A23_C4BD_4c87_A045_8FB857F5F4AB__INCLUDED_)
