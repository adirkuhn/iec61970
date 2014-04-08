///////////////////////////////////////////////////////////
//  RemoteControl.h
//  Implementation of the Class RemoteControl
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_CC936B47_C6C7_45df_8CE4_1C44547E9BF3__INCLUDED_)
#define EA_CC936B47_C6C7_45df_8CE4_1C44547E9BF3__INCLUDED_

#include "Boolean.h"
#include "Float.h"
#include "RemotePoint.h"
#include "Control.h"

/**
 * Remote controls are ouputs that are sent by the remote unit to actuators in the
 * process.
 */
class RemoteControl : public RemotePoint
{

public:
	RemoteControl();
	virtual ~RemoteControl();
	/**
	 * Set to true if the actuator is remotely controlled.
	 */
	Boolean remoteControlled;
	/**
	 * The maximum set point value accepted by the remote control point.
	 */
	Float actuatorMaximum;
	/**
	 * The minimum set point value accepted by the remote control point.
	 */
	Float actuatorMinimum;
	/**
	 * The Control for the RemoteControl point.
	 */
    Control *control;

};
#endif // !defined(EA_CC936B47_C6C7_45df_8CE4_1C44547E9BF3__INCLUDED_)
