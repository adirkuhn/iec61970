///////////////////////////////////////////////////////////
//  Supercritical.h
//  Implementation of the Class Supercritical
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_89796201_FB2F_4c0e_8CB8_C055BDE3F921__INCLUDED_)
#define EA_89796201_FB2F_4c0e_8CB8_C055BDE3F921__INCLUDED_

#include "FossilSteamSupply.h"

/**
 * Once-through supercritical boiler.
 */
class Supercritical : public FossilSteamSupply
{

public:
	Supercritical();
	virtual ~Supercritical();

};
#endif // !defined(EA_89796201_FB2F_4c0e_8CB8_C055BDE3F921__INCLUDED_)
