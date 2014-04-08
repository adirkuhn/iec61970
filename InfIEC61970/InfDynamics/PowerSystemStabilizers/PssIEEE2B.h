///////////////////////////////////////////////////////////
//  PssIEEE2B.h
//  Implementation of the Class PssIEEE2B
//  Created on:      07-fev-2014 11:44:17
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_74B9551F_4D8F_4cbf_8B6C_F12A1420FD3F__INCLUDED_)
#define EA_74B9551F_4D8F_4cbf_8B6C_F12A1420FD3F__INCLUDED_

#include "Float.h"
#include "Integer.h"
#include "Seconds.h"
#include "PowerSystemStabilizer.h"

/**
 * IEEE (2005) PSS2B Model
 * 
 * This stabilizer model is designed to represent a variety of dual-input
 * stabilizers, which normally use combinations of power and speed or frequency to
 * derive the stabilizing signal.
 */
class PssIEEE2B : public PowerSystemStabilizer
{

public:
	PssIEEE2B();
	virtual ~PssIEEE2B();
	/**
	 * Numerator constant
	 */
	Float a;
	/**
	 * Input signal #1 code
	 * 1	shaft speed
	 * 2	frequency of bus voltage
	 * 3	generator electrical power
	 * 4	generator accelerating power
	 * 5	amplitude of bus voltage
	 * 6              derivative of bus voltage amplitude
	 */
	Integer j1;
	/**
	 * Input signal #2 code
	 * 1	shaft speed
	 * 2	frequency of bus voltage
	 * 3	generator electrical power
	 * 4	generator accelerating power
	 * 5	amplitude of bus voltage
	 * 6              derivative of bus voltage amplitude
	 */
	Integer j2;
	/**
	 * Stabilizer gain
	 */
	Float ks1;
	/**
	 * Gain on signal #2
	 */
	Float ks2;
	/**
	 * Gain on signal #2 input before ramp-tracking filter
	 */
	Float ks3;
	/**
	 * Gain on signal #2 input after ramp-tracking filter
	 */
	Float ks4;
	/**
	 * Denominator order of ramp tracking filter
	 */
	Integer m;
	/**
	 * Order of ramp tracking filter
	 */
	Integer n;
	/**
	 * Lead/lag time constant
	 */
	Seconds t1;
	/**
	 * Lead/lag time constant
	 */
	Seconds t10;
	/**
	 * Lead/lag time constant
	 */
	Seconds t11;
	/**
	 * Lead/lag time constant
	 */
	Seconds t2;
	/**
	 * Lead/lag time constant
	 */
	Seconds t3;
	/**
	 * Lead/lag time constant
	 */
	Seconds t4;
	/**
	 * Time constant on signal #1
	 */
	Seconds t6;
	/**
	 * Time constant on signal #2
	 */
	Seconds t7;
	/**
	 * Lead of ramp tracking filter
	 */
	Seconds t8;
	/**
	 * Lag of ramp tracking filter
	 */
	Seconds t9;
	/**
	 * Lead constant
	 */
	Seconds ta;
	/**
	 * Lag time constant
	 */
	Seconds tb;
	/**
	 * First washout on signal #1
	 */
	Seconds tw1;
	/**
	 * Second washout on signal #1
	 */
	Seconds tw2;
	/**
	 * First washout on signal #2
	 */
	Seconds tw3;
	/**
	 * Second washout on signal #2
	 */
	Seconds tw4;
	/**
	 * Input signal #1 max limit
	 */
	Float vsi1max;
	/**
	 * Input signal #1 min limit
	 */
	Float vsi1min;
	/**
	 * Input signal #2 max limit
	 */
	Float vsi2max;
	/**
	 * Input signal #2 min limit
	 */
	Float vsi2min;
	/**
	 * Stabilizer output max limit
	 */
	Float vstmax;
	/**
	 * Stabilizer output min limit
	 */
	Float vstmin;

};
#endif // !defined(EA_74B9551F_4D8F_4cbf_8B6C_F12A1420FD3F__INCLUDED_)
