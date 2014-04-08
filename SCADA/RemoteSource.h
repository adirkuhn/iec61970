///////////////////////////////////////////////////////////
//  RemoteSource.h
//  Implementation of the Class RemoteSource
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_E551834F_1D49_496f_9990_311CAA617849__INCLUDED_)
#define EA_E551834F_1D49_496f_9990_311CAA617849__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "RemotePoint.h"

/**
 * Remote sources are state variables that are telemetered or calculated within
 * the remote unit.
 */
class RemoteSource : public RemotePoint
{

public:
	RemoteSource();
	virtual ~RemoteSource();
	/**
	 * The maximum value the telemetry item can return.
	 */
	Float sensorMaximum;
	/**
	 * The minimum value the telemetry item can return.
	 */
	Float sensorMinimum;
	/**
	 * The time interval between scans.
	 */
	Seconds scanInterval;
	/**
	 * The smallest change in value to be reported.
	 */
	Float deadband;

};
#endif // !defined(EA_E551834F_1D49_496f_9990_311CAA617849__INCLUDED_)
