///////////////////////////////////////////////////////////
//  PssSB.h
//  Implementation of the Class PssSB
//  Created on:      07-fev-2014 11:44:17
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_B87C6AC9_3F2D_4fa7_9BEC_8ACBF74A0022__INCLUDED_)
#define EA_B87C6AC9_3F2D_4fa7_9BEC_8ACBF74A0022__INCLUDED_

#include "PowerSystemStabilizer.h"

/**
 * Dual input PSS, pss2a and transient stabilizer.
 */
class PssSB : public PowerSystemStabilizer
{

public:
	PssSB();
	virtual ~PssSB();

};
#endif // !defined(EA_B87C6AC9_3F2D_4fa7_9BEC_8ACBF74A0022__INCLUDED_)
