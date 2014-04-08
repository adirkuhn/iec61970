///////////////////////////////////////////////////////////
//  ExcAC7B.h
//  Implementation of the Class ExcAC7B
//  Created on:      07-fev-2014 11:43:45
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_76FB047B_E4A4_4d2e_82C1_827AB97FD7E8__INCLUDED_)
#define EA_76FB047B_E4A4_4d2e_82C1_827AB97FD7E8__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) AC7B Model
 * 
 * These excitation systems consist of an ac alternator with either stationary or
 * rotating rectifiers to produce the
 * dc field requirements. Upgrades to earlier ac excitation systems, which replace
 * only the controls but retain
 * the ac alternator and diode rectifier bridge, have resulted in this new model.
 * Some of the features of this excitation system include a high bandwidth inner
 * loop regulating generator field voltage
 * or exciter current (<i>KF</i>2, <i>KF</i>1), a fast exciter current limit,
 * <i>VFEMAX</i>, to protect the field of the ac alternator, and
 * the PID generator voltage regulator (AVR). An alternative rate feedback loop
 * (<i>KF</i>, <i>TF</i>) is provided for
 * stabilization if the AVR does not include a derivative term. If a PSS control
 * is supplied, the Type PSS2B or
 * PSS3B models are appropriate.
 */
class ExcAC7B : public ExcitationSystem
{

public:
	ExcAC7B();
	virtual ~ExcAC7B();
	/**
	 * Field voltage value 1   (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.    (> 0.)
	 */
	Float e2;
	/**
	 * Rectifier regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Exciter internal reactance (>= 0.)
	 */
	Float kd;
	/**
	 * Regulator derivative gain (>= 0.)
	 */
	Float kdr;
	/**
	 * Exciter field resistance constant
	 */
	Float ke;
	/**
	 * Field voltage feedback gain (>= 0.)
	 */
	Float kf1;
	/**
	 * Exciter field current feedback gain (>= 0.)
	 */
	Float kf2;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf3;
	/**
	 * Amplifier integral gain (>= 0.)
	 */
	Float kia;
	/**
	 * Regulator integral gain (>= 0.)
	 */
	Float kir;
	/**
	 * Exciter field voltage lower limit parameter
	 */
	Float kl;
	/**
	 * Exciter field voltage source gain (> 0.)
	 */
	Float kp;
	/**
	 * Amplifier proportional gain (> 0. if kia = 0.)
	 */
	Float kpa;
	/**
	 * Regulator proportional gain (> 0. if kir = 0.)
	 */
	Float kpr;
	/**
	 * Saturation factor at e1  (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2   (>= 0.)
	 */
	Float se2;
	/**
	 * Derivative gain washout time constant (>= 0.)
	 */
	Seconds tdr;
	/**
	 * Exciter time constant, sec. (> 0.)
	 */
	Seconds te;
	/**
	 * Rate feedback time constant (> 0.)
	 */
	Seconds tf;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Maximum amplifier output (> 0.)
	 */
	Float vamax;
	/**
	 * Minimum amplifier output (< 0.)
	 */
	Float vamin;
	/**
	 * Minimum exciter ouput voltage (<= 0.)
	 */
	Float vemin;
	/**
	 * Exciter field current limit parameter
	 */
	Float vfemax;
	/**
	 * Maximum regulator output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum regulator output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_76FB047B_E4A4_4d2e_82C1_827AB97FD7E8__INCLUDED_)
