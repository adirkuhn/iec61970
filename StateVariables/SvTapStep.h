///////////////////////////////////////////////////////////
//  SvTapStep.h
//  Implementation of the Class SvTapStep
//  Created on:      07-fev-2014 11:44:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_7064F3B9_E89B_4933_B8F1_46092954C933__INCLUDED_)
#define EA_7064F3B9_E89B_4933_B8F1_46092954C933__INCLUDED_

#include "lFloat.h"
#include "TapChanger.h"
#include "StateVariable.h"

/**
 * State variable for transformer tap step.     This class is to be used for taps
 * of LTC (load tap changing) transformers, not fixed tap transformers.  Normally
 * a profile specifies only one of the attributes "position"or "tapRatio".
 */
class SvTapStep : public StateVariable
{

public:
	SvTapStep();
	virtual ~SvTapStep();
	/**
	 * The floating point tap position. To get integer value scale with range and
	 * round off.
	 */
	Float position;
	/**
	 * The tap changer associated with the tap step state.
	 */
    TapChanger *tapChanger;

};
#endif // !defined(EA_7064F3B9_E89B_4933_B8F1_46092954C933__INCLUDED_)
