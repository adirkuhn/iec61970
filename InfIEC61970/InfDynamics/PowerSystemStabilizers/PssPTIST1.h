///////////////////////////////////////////////////////////
//  PssPTIST1.h
//  Implementation of the Class PssPTIST1
//  Created on:      07-fev-2014 11:44:17
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_E6F7C89F_A5B3_402b_996A_005825E4F641__INCLUDED_)
#define EA_E6F7C89F_A5B3_402b_996A_005825E4F641__INCLUDED_

#include "PowerSystemStabilizer.h"

/**
 * PTI microprocessor-based stabilizer model type 1.
 */
class PssPTIST1 : public PowerSystemStabilizer
{

public:
	PssPTIST1();
	virtual ~PssPTIST1();

};
#endif // !defined(EA_E6F7C89F_A5B3_402b_996A_005825E4F641__INCLUDED_)
