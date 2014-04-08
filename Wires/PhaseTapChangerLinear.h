///////////////////////////////////////////////////////////
//  PhaseTapChangerLinear.h
//  Implementation of the Class PhaseTapChangerLinear
//  Created on:      07-fev-2014 11:44:14
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_E092CCCC_4420_44d4_8C73_44EC1911BD89__INCLUDED_)
#define EA_E092CCCC_4420_44d4_8C73_44EC1911BD89__INCLUDED_

#include "AngleDegrees.h"
#include "PhaseTapChanger.h"

/**
 * Describes a tap changer with a linear relation between the tap step and the
 * phase angle difference across the transformer. This is a mathematical model
 * that is an approximation of a real phase tap changer.
 */
class PhaseTapChangerLinear : public PhaseTapChanger
{

public:
	PhaseTapChangerLinear();
	virtual ~PhaseTapChangerLinear();
	/**
	 * Phase shift per step position. A positive value indicates a positive phase
	 * shift from the winding where the tap is located to the other winding (for a two-
	 * winding transformer).
	 * The actual phase shift increment might be more accurately computed from the
	 * symmetrical or asymmetrical models or a tap step table lookup if those are
	 * available.
	 */
	AngleDegrees stepPhaseShiftIncrement;

};
#endif // !defined(EA_E092CCCC_4420_44d4_8C73_44EC1911BD89__INCLUDED_)
