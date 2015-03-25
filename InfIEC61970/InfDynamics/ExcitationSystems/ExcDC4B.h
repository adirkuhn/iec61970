///////////////////////////////////////////////////////////
//  ExcDC4B.h
//  Implementation of the Class ExcDC4B
//  Created on:      07-fev-2014 11:43:46
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_BCD42EF9_87FA_478a_83C8_53F405DE0C87__INCLUDED_)
#define EA_BCD42EF9_87FA_478a_83C8_53F405DE0C87__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) DC4B Model
 * 
 * These excitation systems utilize a field-controlled dc commutator exciter with
 * a continuously acting voltage
 * regulator having supplies obtained from the generator or auxiliary bus. The
 * replacement of the controls only
 * as an upgrade (retaining the dc commutator exciter) has resulted in a new model.
 * This excitation system typically includes a proportional, integral, and
 * differential (PID) generator voltage regulator (AVR). An alternative rate
 * feedback loop (<i>kf</i>, <i>tf</i>) for stabilization is also shown in the
 * model if the AVR does not include a derivative term. If a PSS control is
 * supplied, the appropriate model is the Type PSS2B model.
 */
class ExcDC4B : public ExcitationSystem
{

public:
	ExcDC4B();
	virtual ~ExcDC4B();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.   (> 0.)
	 */
	Float e2;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Derivative gain (>= 0.)
	 */
	Float kd;
	/**
	 * Exciter field resistance line slope
	 */
	Float ke;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Integral gain (>= 0.)
	 */
	Float ki;
	/**
	 * Proportional gain (>= 0.)
	 */
	Float kp;
	/**
	 * OEL input: if < 2, LV gate; if = 2, subtract from error signal
	 */
	Float oelin;
	/**
	 * Saturation factor at e1   (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2 (>= 0.)
	 */
	Float se2;
	/**
	 * Time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * Derivative time constant (> 0. If kd > 0.)
	 */
	Seconds td;
	/**
	 * Exciter time constant (> 0.)
	 */
	Seconds te;
	/**
	 * Rate feedback time constant (>= 0.)
	 */
	Seconds tf;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * UEL input: if < 2, HV gate; if = 2, add to error signal
	 */
	Float uelin;
	/**
	 * Exciter minimum output  (<= 0.)
	 */
	Float vemin;
	/**
	 * Maximum controller output
	 */
	Float vrmax;
	/**
	 * Minimum controller output (<= 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_BCD42EF9_87FA_478a_83C8_53F405DE0C87__INCLUDED_)
