///////////////////////////////////////////////////////////
//  SwitchingOperation.h
//  Implementation of the Class SwitchingOperation
//  Created on:      07-fev-2014 11:44:29
///////////////////////////////////////////////////////////

#if !defined(EA_00DBD08A_8BB3_4893_BE4E_CEB6804E0B29__INCLUDED_)
#define EA_00DBD08A_8BB3_4893_BE4E_CEB6804E0B29__INCLUDED_

#include "SwitchState.h"
#include "DateTime.h"
#include "IdentifiedObject.h"
#include "Switch.h"
#include "OutageSchedule.h"

/**
 * A SwitchingOperation is used to define individual switch operations for an
 * OutageSchedule. This OutageSchedule may be associated with another item of
 * Substation such as a Transformer, Line, or Generator; or with the Switch itself
 * as a PowerSystemResource. A Switch may be referenced by many OutageSchedules.
 */
class SwitchingOperation : public IdentifiedObject
{

public:
	SwitchingOperation();
	virtual ~SwitchingOperation();
	/**
	 * The switch position that shall result from this SwitchingOperation.
	 */
	SwitchState newState;
	/**
	 * Time of operation in same units as OutageSchedule.xAxixUnits.
	 */
	DateTime operationTime;
	/**
	 * A switch may be operated by many schedules.
	 */
	QList<Switch> *Switches;
	/**
	 * An OutageSchedule may operate many switches.
	 */
    OutageSchedule *outageSchedule;

};
#endif // !defined(EA_00DBD08A_8BB3_4893_BE4E_CEB6804E0B29__INCLUDED_)
