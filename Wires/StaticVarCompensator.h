///////////////////////////////////////////////////////////
//  StaticVarCompensator.h
//  Implementation of the Class StaticVarCompensator
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_FEAEA61E_7B1A_4ffc_8441_BECE851E16E5__INCLUDED_)
#define EA_FEAEA61E_7B1A_4ffc_8441_BECE851E16E5__INCLUDED_

#include "Reactance.h"
#include "VoltagePerReactivePower.h"
#include "SVCControlMode.h"
#include "Voltage.h"
#include "RegulatingCondEq.h"

/**
 * A facility for providing variable and controllable shunt reactive power. The
 * SVC typically consists of a stepdown transformer, filter, thyristor-controlled
 * reactor, and thyristor-switched capacitor arms.
 * 
 * The SVC may operate in fixed MVar output mode or in voltage control mode.  When
 * in voltage control mode, the output of the SVC will be proportional to the
 * deviation of voltage at the controlled bus from the voltage setpoint.  The SVC
 * characteristic slope defines the proportion.  If the voltage at the controlled
 * bus is equal to the voltage setpoint, the SVC MVar output is zero.
 */
class StaticVarCompensator : public RegulatingCondEq
{

public:
	StaticVarCompensator();
	virtual ~StaticVarCompensator();
	/**
	 * Maximum available capacitive reactance.
	 */
	Reactance capacitiveRating;
	/**
	 * Maximum available inductive reactance.
	 */
	Reactance inductiveRating;
	/**
	 * The characteristics slope of an SVC defines how the reactive power output
	 * changes in proportion to the difference between the regulated bus voltage and
	 * the voltage setpoint.
	 */
	VoltagePerReactivePower slope;
	/**
	 * SVC control mode.
	 */
	SVCControlMode sVCControlMode;
	/**
	 * The reactive power output of the SVC is proportional to the difference between
	 * the voltage at the regulated bus and the voltage setpoint.  When the regulated
	 * bus voltage is equal to the voltage setpoint, the reactive power output is zero.
	 */
	Voltage voltageSetPoint;

};
#endif // !defined(EA_FEAEA61E_7B1A_4ffc_8441_BECE851E16E5__INCLUDED_)
