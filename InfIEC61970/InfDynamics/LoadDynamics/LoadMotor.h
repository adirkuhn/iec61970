///////////////////////////////////////////////////////////
//  LoadMotor.h
//  Implementation of the Class LoadMotor
//  Created on:      07-fev-2014 11:44:04
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_B3B26C6D_E719_45d2_B2D8_FFDA7A8C75A6__INCLUDED_)
#define EA_B3B26C6D_E719_45d2_B2D8_FFDA7A8C75A6__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "Reactance.h"
#include "Resistance.h"
#include "Voltage.h"
#include "AggregateLoad.h"

/**
 * Aggregate induction motor load. This model  is used to represent a fraction of
 * an ordinary load as "induction motor load".  It allows load that is treated as
 * ordinary constant power in power flow analysis to be represented by an
 * induction motor in dynamic simulation.  Either a "one-cage" or "two-cage" model
 * of the induction machine can be modeled.  Magnetic saturation is not modeled.
 * 
 * This model is intended for representation of aggregations of many motors
 * dispersed through a load represented at a high voltage bus but where there is
 * no information on the characteristics of individual motors.
 */
class LoadMotor : public AggregateLoad
{

public:
	LoadMotor();
	virtual ~LoadMotor();
	/**
	 * Damping factor
	 */
	Float d;
	/**
	 * Inertia constant
	 */
	Seconds h;
	/**
	 * Loading factor &ndash; ratio of initial P to motor MVA base
	 */
	Float lfac;
	/**
	 * Transient reactance
	 */
	Reactance lp;
	/**
	 * Sub-transient reactance
	 */
	Reactance lpp;
	/**
	 * Synchronous reactance
	 */
	Reactance ls;
	/**
	 * Fraction of constant-power load to be represented
	 * by this motor model (between 1.0 and 0.0)
	 */
	Float pfrac;
	/**
	 * Stator resistance
	 */
	Resistance ra;
	/**
	 * Circuit breaker operating time (default = 999)
	 */
	Seconds tbkr;
	/**
	 * Transient rotor time constant
	 */
	Seconds tpo;
	/**
	 * Sub-transient rotor time constant
	 */
	Seconds tppo;
	/**
	 * Voltage trip pickup time (default = 999)
	 */
	Seconds tv;
	/**
	 * Voltage threshold for tripping (default = 0)
	 */
	Voltage vt;

};
#endif // !defined(EA_B3B26C6D_E719_45d2_B2D8_FFDA7A8C75A6__INCLUDED_)
