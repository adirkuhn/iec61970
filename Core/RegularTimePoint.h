///////////////////////////////////////////////////////////
//  RegularTimePoint.h
//  Implementation of the Class RegularTimePoint
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_027DFAFA_5BFF_4c27_8A57_6016001AAAEF__INCLUDED_)
#define EA_027DFAFA_5BFF_4c27_8A57_6016001AAAEF__INCLUDED_

#include "Integer.h"
#include "lFloat.h"

/**
 * Time point for a schedule where the time between the consecutive points is
 * constant.
 */
class RegularTimePoint
{

public:
	RegularTimePoint();
	virtual ~RegularTimePoint();
	/**
	 * The position of the regular time point in the sequence. Note that time points
	 * don't have to be sequential, i.e. time points may be omitted. The actual time
	 * for a RegularTimePoint is computed by multiplying the associated regular
	 * interval schedule's time step with the regular time point sequence number and
	 * adding the associated schedules start time.
	 */
	Integer sequenceNumber;
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
#endif // !defined(EA_027DFAFA_5BFF_4c27_8A57_6016001AAAEF__INCLUDED_)
