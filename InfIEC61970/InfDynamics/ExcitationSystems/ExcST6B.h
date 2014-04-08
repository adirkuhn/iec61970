///////////////////////////////////////////////////////////
//  ExcST6B.h
//  Implementation of the Class ExcST6B
//  Created on:      07-fev-2014 11:43:49
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_BF266FA3_0513_4966_A30D_5588A295F7A2__INCLUDED_)
#define EA_BF266FA3_0513_4966_A30D_5588A295F7A2__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) ST6B Model
 * 
 * The AVR consists of a PI voltage regulator with an inner loop field voltage
 * regulator and pre-control. The field voltage regulator implements a
 * proportional control. The pre-control and the delay in the feedback circuit
 * increase the dynamic response. 
 */
class ExcST6B : public ExcitationSystem
{

public:
	ExcST6B();
	virtual ~ExcST6B();
	/**
	 * Field current limiter setpoint (> 0.)
	 */
	Float ilr;
	/**
	 * Field current limiter conversion factor (> 0.)
	 */
	Float kcl;
	/**
	 * Feedforward gain
	 */
	Float kff;
	/**
	 * Feedback gain (>= 0.)
	 */
	Float kg;
	/**
	 * Regulator integral gain (> 0.)
	 */
	Float kia;
	/**
	 * Field current limiter gain (> 0.)
	 */
	Float klr;
	/**
	 * Main gain
	 */
	Float km;
	/**
	 * Regulator proportional gain (> 0.)
	 */
	Float kpa;
	/**
	 * OEL input selector: 1 ? before UEL, 2 ? after UEL, 0 ? no OEL input
	 */
	Float oelin;
	/**
	 * Feedback time constant (>= 0.)
	 */
	Seconds tg;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Rectifier firing time constant (not in IEEE model) (>= 0.)
	 */
	Seconds ts;
	/**
	 * PI maximum output. (> 0.)
	 */
	Float vamax;
	/**
	 * PI minimum output (< 0.)
	 */
	Float vamin;
	/**
	 * If non-zero, multiply regulator output by terminal voltage
	 */
	Float vmult;
	/**
	 * Maximum regulator output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum regulator output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_BF266FA3_0513_4966_A30D_5588A295F7A2__INCLUDED_)
