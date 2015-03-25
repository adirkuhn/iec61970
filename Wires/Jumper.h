///////////////////////////////////////////////////////////
//  Jumper.h
//  Implementation of the Class Jumper
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_A86B2FBD_B06C_4fc9_8384_822A39E63669__INCLUDED_)
#define EA_A86B2FBD_B06C_4fc9_8384_822A39E63669__INCLUDED_

#include "Switch.h"

/**
 * A short section of conductor with negligible impedance which can be manually
 * removed and replaced if the circuit is de-energized. Note that zero-impedance
 * branches can potentially be modeled by other equipment types.
 */
class Jumper : public Switch
{

public:
	Jumper();
	virtual ~Jumper();

};
#endif // !defined(EA_A86B2FBD_B06C_4fc9_8384_822A39E63669__INCLUDED_)
