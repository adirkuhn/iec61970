///////////////////////////////////////////////////////////
//  IrregularTimePoint.h
//  Implementation of the Class IrregularTimePoint
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_58A4643E_E7D2_4ceb_9C88_6F8D453D2DDB__INCLUDED_)
#define EA_58A4643E_E7D2_4ceb_9C88_6F8D453D2DDB__INCLUDED_

#include "Seconds.h"
#include "Float.h"

/**
 * TimePoints for a schedule where the time between the points varies.
 */
class IrregularTimePoint
{

public:
	IrregularTimePoint();
	virtual ~IrregularTimePoint();
	/**
	 * The time is relative to the schedule starting time.
	 */
	Seconds time;
	/**
	 * The first value at the time. The meaning of the value is defined by the derived
	 * type of the associated schedule.
	 */
	Float value1;
	/**
	 * The second value at the time. The meaning of the value is defined by the
	 * derived type of the associated schedule.
	 */
	Float value2;

};
#endif // !defined(EA_58A4643E_E7D2_4ceb_9C88_6F8D453D2DDB__INCLUDED_)
