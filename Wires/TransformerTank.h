///////////////////////////////////////////////////////////
//  TransformerTank.h
//  Implementation of the Class TransformerTank
//  Created on:      07-fev-2014 11:44:33
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_870E7B9E_2D8D_4864_BE4F_93CD418096F6__INCLUDED_)
#define EA_870E7B9E_2D8D_4864_BE4F_93CD418096F6__INCLUDED_

#include "PowerTransformer.h"
#include "Equipment.h"

/**
 * An assembly of two or more coupled windings that transform electrical power
 * between voltage levels. These windings are bound on a common core and place in
 * the same tank. Transformer tank can be used to model both single-phase and 3-
 * phase transformers.
 */
class TransformerTank : public Equipment
{

public:
	TransformerTank();
	virtual ~TransformerTank();
	/**
	 * Bank this transformer belongs to.
	 */
    PowerTransformer *powerTransformer;

};
#endif // !defined(EA_870E7B9E_2D8D_4864_BE4F_93CD418096F6__INCLUDED_)
