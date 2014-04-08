///////////////////////////////////////////////////////////
//  RegulatingControl.h
//  Implementation of the Class RegulatingControl
//  Created on:      07-fev-2014 11:44:21
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_706ED853_9141_4fbb_88AE_9F8A6DD4149C__INCLUDED_)
#define EA_706ED853_9141_4fbb_88AE_9F8A6DD4149C__INCLUDED_

#include "Float.h"
#include "Boolean.h"

#include "RegulatingControlModeKind.h"
#include "PhaseCode.h"

#include "PowerSystemResource.h"

/**
 * Specifies a set of equipment that works together to control a power system
 * quantity such as voltage or flow.
 */
class RegulatingControl : public PowerSystemResource
{

public:
	RegulatingControl();
	virtual ~RegulatingControl();
	/**
	 * The regulating control mode presently available.  This specifications allows
	 * for determining the kind of regualation without need for obtaining the units
	 * from a schedule.
	 */
	RegulatingControlModeKind mode;
	/**
	 * This is the case input target range.   This performs the same function as the
	 * value2 attribute on the regulation schedule in the case that schedules are not
	 * used.   The units of those appropriate for the mode.
	 */
	Float targetRange;
	/**
	 * The target value specified for case input.   This value can be used for the
	 * target value wihout the use of schedules. The value has the units appropriate
	 * to the mode attribute.
	 */
	Float targetValue;
	/**
	 * The regulation is performed in a discrete mode.
	 */
	Boolean discrete;
	/**
	 * Phase voltage controlling this regulator, measured at regulator location.
	 */
	PhaseCode monitoredPhase;

};
#endif // !defined(EA_706ED853_9141_4fbb_88AE_9F8A6DD4149C__INCLUDED_)
