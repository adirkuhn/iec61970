///////////////////////////////////////////////////////////
//  Recloser.h
//  Implementation of the Class Recloser
//  Created on:      07-fev-2014 11:44:20
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_CECC412A_7FE8_418d_B14F_CE2E3640E29E__INCLUDED_)
#define EA_CECC412A_7FE8_418d_B14F_CE2E3640E29E__INCLUDED_

#include "ProtectedSwitch.h"

/**
 * Pole-mounted fault interrupter with built-in phase and ground relays, current
 * transformer (CT), and supplemental controls.
 */
class Recloser : public ProtectedSwitch
{

public:
	Recloser();
	virtual ~Recloser();

};
#endif // !defined(EA_CECC412A_7FE8_418d_B14F_CE2E3640E29E__INCLUDED_)
