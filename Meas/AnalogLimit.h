///////////////////////////////////////////////////////////
//  AnalogLimit.h
//  Implementation of the Class AnalogLimit
//  Created on:      07-fev-2014 11:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_439DB071_A37C_4d29_92EA_68E6334995D9__INCLUDED_)
#define EA_439DB071_A37C_4d29_92EA_68E6334995D9__INCLUDED_

#include "Float.h"
#include "Limit.h"

/**
 * Limit values for Analog measurements.
 */
class AnalogLimit : public Limit
{

public:
	AnalogLimit();
	virtual ~AnalogLimit();
	/**
	 * The value to supervise against.
	 */
	Float value;

};
#endif // !defined(EA_439DB071_A37C_4d29_92EA_68E6334995D9__INCLUDED_)
