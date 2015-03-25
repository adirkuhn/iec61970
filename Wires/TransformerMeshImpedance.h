///////////////////////////////////////////////////////////
//  TransformerMeshImpedance.h
//  Implementation of the Class TransformerMeshImpedance
//  Created on:      07-fev-2014 11:44:33
//  Original author: LOO
///////////////////////////////////////////////////////////

#if !defined(EA_BA0E0260_2855_4008_AC1B_272BAD891EBE__INCLUDED_)
#define EA_BA0E0260_2855_4008_AC1B_272BAD891EBE__INCLUDED_

#include <QList>

#include "Resistance.h"
#include "Reactance.h"
#include "IdentifiedObject.h"
#include "TransformerEnd.h"

/**
 * Transformer mesh impedance (Delta-model) between transformer ends.
 * The typical case is that this class describes the impedance between two
 * transformer ends pair-wise, i.e. the cardinalities at both tranformer end
 * associations are 1. But in cases where two or more transformer ends are modeled
 * the cardinalities are larger than 1.
 */
class TransformerMeshImpedance : public IdentifiedObject
{

public:
	TransformerMeshImpedance();
	virtual ~TransformerMeshImpedance();

	/**
	 * Resistance between the 'from' and the 'to' end, seen from the 'from' end.
	 */
	Resistance r;

	/**
	 * Zero-sequence resistance between the 'from' and the 'to' end, seen from the
	 * 'from' end.
	 */
	Resistance r0;

	/**
	 * Reactance between the 'from' and the 'to' end, seen from the 'from' end.
	 */
	Reactance x;

	/**
	 * Zero-sequence reactance between the 'from' and the 'to' end, seen from the
	 * 'from' end.
	 */
	Reactance x0;

	/**
	 * From end this mesh impedance is connected to. It determines the voltage
	 * reference.
	 */
    TransformerEnd *fromTransformerEnd;

	/**
	 * All transformer ends this mesh impedance is connected to.
	 */
    QList<TransformerEnd> toTransformerEnd;
};
#endif // !defined(EA_BA0E0260_2855_4008_AC1B_272BAD891EBE__INCLUDED_)
