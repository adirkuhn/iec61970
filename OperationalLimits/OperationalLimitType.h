///////////////////////////////////////////////////////////
//  OperationalLimitType.h
//  Implementation of the Class OperationalLimitType
//  Created on:      07-fev-2014 11:44:12
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_668A558D_B6D5_4eee_92D7_6328615C6D70__INCLUDED_)
#define EA_668A558D_B6D5_4eee_92D7_6328615C6D70__INCLUDED_

#include "Seconds.h"
#include "OperationalLimitDirectionKind.h"
#include "IdentifiedObject.h"

/**
 * The operational meaning of a category of limits.
 */
class OperationalLimitType : public IdentifiedObject
{

public:
	OperationalLimitType();
	virtual ~OperationalLimitType();
	/**
	 * The nominal acceptable duration of the limit.  Limits are commonly expressed in
	 * terms of the a time limit for which the limit is normally acceptable.   The
	 * actual acceptable duration of a specific limit may depend on other local
	 * factors such as temperature or wind speed.
	 */
	Seconds acceptableDuration;
	/**
	 * The direction of the limit.
	 */
	OperationalLimitDirectionKind direction;

};
#endif // !defined(EA_668A558D_B6D5_4eee_92D7_6328615C6D70__INCLUDED_)
