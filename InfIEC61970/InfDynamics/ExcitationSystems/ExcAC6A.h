///////////////////////////////////////////////////////////
//  ExcAC6A.h
//  Implementation of the Class ExcAC6A
//  Created on:      07-fev-2014 11:43:45
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_161237BB_7946_4181_A3FA_9489FE2A5304__INCLUDED_)
#define EA_161237BB_7946_4181_A3FA_9489FE2A5304__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC6A Model
 * 
 * The model is used to represent field-controlled alternator-rectifier excitation
 * systems with system-supplied electronic voltage regulators. The maximum output
 * of the regulator, <i>V</i><i><sub>R</sub></i>, is a function of terminal
 * voltage, <i>V</i><i><sub>T</sub></i>. The field current limiter included in the
 * original model AC6A remains in the 2005 update.
 */
class ExcAC6A : public ExcitationSystem
{

public:
	ExcAC6A();
	virtual ~ExcAC6A();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.    (> 0.)
	 */
	Float e2;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Rectifier regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Exciter internal reactance (>= 0.)
	 */
	Float kd;
	/**
	 * Exciter field resistance constant 
	 */
	Float ke;
	/**
	 * Exciter field current limiter gain (>= 0.)
	 */
	Float kh;
	/**
	 * Saturation factor at e1 (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2  (>= 0.)
	 */
	Float se2;
	/**
	 * Time constant (>= 0.)
	 */
	Seconds ta;
	/**
	 * Time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * Lead time constant
	 */
	Seconds tc;
	/**
	 * Exciter time constant (> 0.)
	 */
	Seconds te;
	/**
	 * Field current limiter time constant (> 0.)
	 */
	Seconds th;
	/**
	 * Field current limiter time constant (>= 0.)
	 */
	Seconds tj;
	/**
	 * Lag time constant (>= 0.)
	 */
	Seconds tk;
	/**
	 * Filter time constant
	 */
	Seconds tr;
	/**
	 * Maximum controller element output (> 0.)
	 */
	Float vamax;
	/**
	 * Minimum controller element output (< 0.)
	 */
	Float vamin;
	/**
	 * Exciter field current limit reference (> 0.)
	 */
	Float vfelim;
	/**
	 * Maximum field current limiter signal (> 0.)
	 */
	Float vhmax;
	/**
	 * Maximum exciter control signal (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum exciter control signal (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_161237BB_7946_4181_A3FA_9489FE2A5304__INCLUDED_)
