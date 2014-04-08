///////////////////////////////////////////////////////////
//  Quality61850.h
//  Implementation of the Class Quality61850
//  Created on:      07-fev-2014 11:44:18
///////////////////////////////////////////////////////////

#if !defined(EA_782097D3_5DD4_40ac_AA9B_7D79B085A041__INCLUDED_)
#define EA_782097D3_5DD4_40ac_AA9B_7D79B085A041__INCLUDED_

#include "Boolean.h"
#include "Source.h"
#include "Validity.h"

/**
 * Quality flags in this class are as defined in IEC 61850, except for
 * estimatorReplaced, which has been included in this class for convenience.
 */
class Quality61850
{

public:
	Quality61850();
	virtual ~Quality61850();
	/**
	 * Measurement value may be incorrect due to a reference being out of calibration.
	 */
	Boolean badReference;
	/**
	 * Value has been replaced by State Estimator. estimatorReplaced is not an
	 * IEC61850 quality bit but has been put in this class for convenience.
	 */
	Boolean estimatorReplaced;
	/**
	 * This identifier indicates that a supervision function has detected an internal
	 * or external failure, e.g. communication failure.
	 */
	Boolean failure;
	/**
	 * Measurement value is old and possibly invalid, as it has not been successfully
	 * updated during a specified time interval.
	 */
	Boolean oldData;
	/**
	 * Measurement value is blocked and hence unavailable for transmission. 
	 */
	Boolean operatorBlocked;
	/**
	 * To prevent some overload of the communication it is sensible to detect and
	 * suppress oscillating (fast changing) binary inputs. If a signal changes in a
	 * defined time (tosc) twice in the same direction (from 0 to 1 or from 1 to 0)
	 * then oscillation is detected and the detail quality identifier "oscillatory" is
	 * set. If it is detected a configured numbers of transient changes could be
	 * passed by. In this time the validity status "questionable" is set. If after
	 * this defined numbers of changes the signal is still in the oscillating state
	 * the value shall be set either to the opposite state of the previous stable
	 * value or to a defined default value. In this case the validity status
	 * "questionable" is reset and "invalid" is set as long as the signal is
	 * oscillating. If it is configured such that no transient changes should be
	 * passed by then the validity status "invalid" is set immediately in addition to
	 * the detail quality identifier "oscillatory" (used for status information only).
	 */
	Boolean oscillatory;
	/**
	 * Measurement value is beyond a predefined range of value.
	 */
	Boolean outOfRange;
	/**
	 * Measurement value is beyond the capability of being  represented properly. For
	 * example, a counter value overflows from maximum count back to a value of zero. 
	 */
	Boolean overFlow;
	/**
	 * Source gives information related to the origin of a value. The value may be
	 * acquired from the process, defaulted or substituted.
	 */
	Source source;
	/**
	 * A correlation function has detected that the value is not consitent with other
	 * values. Typically set by a network State Estimator.
	 */
	Boolean suspect;
	/**
	 * Measurement value is transmitted for test purposes.
	 */
	Boolean test;
	/**
	 * Validity of the measurement value.
	 */
	Validity validity;

};
#endif // !defined(EA_782097D3_5DD4_40ac_AA9B_7D79B085A041__INCLUDED_)
