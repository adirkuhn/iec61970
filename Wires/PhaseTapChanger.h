///////////////////////////////////////////////////////////
//  PhaseTapChanger.h
//  Implementation of the Class PhaseTapChanger
//  Created on:      07-fev-2014 11:44:13
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D4432549_878B_48e4_B473_401FA6102302__INCLUDED_)
#define EA_D4432549_878B_48e4_B473_401FA6102302__INCLUDED_

#include "TapChanger.h"

/**
 * A transformer phase shfiting tap model that controls the phase angle difference
 * across the power transformer and potentially the activer power flow through the
 * power transformer.  This phase tap model may also impact the voltage magnitude.
 */
class PhaseTapChanger : public TapChanger
{

public:
	PhaseTapChanger();
	virtual ~PhaseTapChanger();

};
#endif // !defined(EA_D4432549_878B_48e4_B473_401FA6102302__INCLUDED_)
