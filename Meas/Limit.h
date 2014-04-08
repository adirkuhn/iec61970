///////////////////////////////////////////////////////////
//  Limit.h
//  Implementation of the Class Limit
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_C3AD9096_2374_4872_BE9E_ABF3892787B2__INCLUDED_)
#define EA_C3AD9096_2374_4872_BE9E_ABF3892787B2__INCLUDED_

#include "IdentifiedObject.h"

/**
 * Specifies one limit value for a Measurement. A Measurement typically has
 * several limits that are kept together by the LimitSet class. The actual meaning
 * and use of a Limit instance (i.e., if it is an alarm or warning limit or if it
 * is a high or low limit) is not captured in the Limit class. However the name of
 * a Limit instance may indicate both meaning and use.
 */
class Limit : public IdentifiedObject
{

public:
	Limit();
	virtual ~Limit();

};
#endif // !defined(EA_C3AD9096_2374_4872_BE9E_ABF3892787B2__INCLUDED_)
