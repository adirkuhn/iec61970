///////////////////////////////////////////////////////////
//  AccumulatorLimit.h
//  Implementation of the Class AccumulatorLimit
//  Created on:      07-fev-2014 11:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_7B3782BD_B1BF_4bad_A7EB_B878E3C631D9__INCLUDED_)
#define EA_7B3782BD_B1BF_4bad_A7EB_B878E3C631D9__INCLUDED_

#include "Integer.h"
#include "Limit.h"

/**
 * Limit values for Accumulator measurements.
 */
class AccumulatorLimit : public Limit
{

public:
	AccumulatorLimit();
	virtual ~AccumulatorLimit();
	/**
	 * The value to supervise against. The value is positive.
	 */
	Integer value;

};
#endif // !defined(EA_7B3782BD_B1BF_4bad_A7EB_B878E3C631D9__INCLUDED_)
