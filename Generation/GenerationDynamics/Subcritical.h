///////////////////////////////////////////////////////////
//  Subcritical.h
//  Implementation of the Class Subcritical
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_D76C620D_E25A_472b_8CD3_CF975D054F3C__INCLUDED_)
#define EA_D76C620D_E25A_472b_8CD3_CF975D054F3C__INCLUDED_

#include "FossilSteamSupply.h"

/**
 * Once-through subcritical boiler.
 */
class Subcritical : public FossilSteamSupply
{

public:
	Subcritical();
	virtual ~Subcritical();

};
#endif // !defined(EA_D76C620D_E25A_472b_8CD3_CF975D054F3C__INCLUDED_)
