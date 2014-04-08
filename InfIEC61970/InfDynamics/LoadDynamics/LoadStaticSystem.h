///////////////////////////////////////////////////////////
//  LoadStaticSystem.h
//  Implementation of the Class LoadStaticSystem
//  Created on:      07-fev-2014 11:44:06
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_B7C1A0CF_441B_4d37_A1B2_5B6D5200B6BE__INCLUDED_)
#define EA_B7C1A0CF_441B_4d37_A1B2_5B6D5200B6BE__INCLUDED_

#include "LoadStatic.h"

/**
 * Static load associated with a specific system.
 */
class LoadStaticSystem : public LoadStatic
{

public:
	LoadStaticSystem();
	virtual ~LoadStaticSystem();

};
#endif // !defined(EA_B7C1A0CF_441B_4d37_A1B2_5B6D5200B6BE__INCLUDED_)
