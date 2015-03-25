///////////////////////////////////////////////////////////
//  TransformerTankEnd.h
//  Implementation of the Class TransformerTankEnd
//  Created on:      07-fev-2014 11:44:34
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_5D0DA1F2_20E8_4bfb_BCCC_6023C6AFBEA7__INCLUDED_)
#define EA_5D0DA1F2_20E8_4bfb_BCCC_6023C6AFBEA7__INCLUDED_

#include "PhaseCode.h"
#include "TransformerTank.h"
#include "TransformerEnd.h"

/**
 * Transformer tank end represents an individual winding for unbalanced models or
 * for transformer tanks connected into a bank (and bank is modelled with the
 * PowerTransformer).
 */
class TransformerTankEnd : public TransformerEnd
{

public:
	TransformerTankEnd();
	virtual ~TransformerTankEnd();
	/**
	 * Describes the phases carried by a conducting equipment.
	 */
	PhaseCode phases;
	/**
	 * Transformer this winding belongs to.
	 */
    TransformerTank *transformerTank;

};
#endif // !defined(EA_5D0DA1F2_20E8_4bfb_BCCC_6023C6AFBEA7__INCLUDED_)
