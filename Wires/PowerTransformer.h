///////////////////////////////////////////////////////////
//  PowerTransformer.h
//  Implementation of the Class PowerTransformer
//  Created on:      07-fev-2014 11:44:15
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_D3B7F85F_CD4B_492f_9AFD_AA3AD84F861B__INCLUDED_)
#define EA_D3B7F85F_CD4B_492f_9AFD_AA3AD84F861B__INCLUDED_

#include <QList>

#include "String.h"
#include "ConductingEquipment.h"
#include "PowerTransformerEnd.h"

/**
 * An electrical device consisting of  two or more coupled windings, with or
 * without a magnetic core, for introducing mutual coupling between electric
 * circuits. Transformers can be used to control voltage and phase shift (active
 * power flow).
 * A power transformer may be composed of separate transformer tanks that need not
 * be identical.
 * A power transformer can be modelled with or without tanks and is intended for
 * use in both balanced and unbalanced representations.   A power transformer
 * typically has two terminals, but may have one (grounding), three or more
 * terminals.
 */
class PowerTransformer : public ConductingEquipment
{

public:
	PowerTransformer();
	virtual ~PowerTransformer();

	/**
	 * Vector group of the transformer for protective relaying, e.g., Dyn1. For
	 * unbalanced transformers, this may not be simply determined from the constituent
	 * winding connections and phase angle dispacements.
	 * 
	 * The vectorGroup string consists of the following components in the order listed:
	 * high voltage winding connection, mid voltage winding connection (for three
	 * winding transformers), phase displacement clock number from 0 to 11,  low
	 * voltage winding connection
	 * phase displacement clock number from 0 to 11.   The winding connections are D
	 * (delta), Y (wye), YN (wye with neutral), Z (zigzag), ZN (zigzag with neutral),
	 * A (auto transformer). Upper case means the high voltage, lower case mid or low.
	 * The high voltage winding always has clock postion 0 and is not included in the
	 * vector group string.  Some examples: YNy0 (two winding wye to wye with no phase
	 * displacement), YNd11 (two winding wye to delta with 330 degrees phase
	 * displacement), YNyn0d5 (three winding transformer wye with neutral high
	 * voltgage, wye with neutral mid voltgage and no phase displacement, delta low
	 * voltage with 150 degrees displacement).
	 * 
	 * Phase displacement is defined as the angular difference between the phasors
	 * representing the voltages between the neutral point (real or imaginary) and the
	 * corresponding terminals of two windings, a positive sequence voltage system
	 * being applied to the high-voltage terminals, following each other in
	 * alphabetical sequence if they are lettered, or in numerical sequence if they
	 * are numbered: the phasors are assumed to rotate in a counter-clockwise sense.
	 */
	String vectorGroup;

	/**
	 * The ends of this power transformer.
	 */
    QList<PowerTransformerEnd*> powerTransformerEnds;
};
#endif // !defined(EA_D3B7F85F_CD4B_492f_9AFD_AA3AD84F861B__INCLUDED_)
