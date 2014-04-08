///////////////////////////////////////////////////////////
//  ExcDC2A.h
//  Implementation of the Class ExcDC2A
//  Created on:      07-fev-2014 11:43:46
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_9F5CF749_4ED2_4f9e_8356_75AFD5B2F13A__INCLUDED_)
#define EA_9F5CF749_4ED2_4f9e_8356_75AFD5B2F13A__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) DC2A Model
 * 
 * The model is used to represent field-controlled dc commutator exciters with
 * continuously acting voltage regulators having supplies obtained from the
 * generator or auxiliary bus. It differs from the Type DC1A model only in the
 * voltage regulator output limits, which are now proportional to terminal voltage
 * <i>V</i><i><sub>T</sub></i>.
 * It is representative of solid-state replacements for various forms of older
 * mechanical and rotating amplifier
 * regulating equipment connected to dc commutator exciters.
 */
class ExcDC2A : public ExcitationSystem
{

public:
	ExcDC2A();
	virtual ~ExcDC2A();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.    (> 0.)
	 */
	Float e2;
	/**
	 * If not 0, apply lower limit of 0. to exciter output
	 */
	Float exclim;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Exciter field resistance line slope
	 */
	Float ke;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Saturation factor at e1  (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2  (>= 0.)
	 */
	Float se2;
	/**
	 * Time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * Lag time constant (>= 0.)
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
	 * Rate feedback time constant, sec. (> 0.)
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
	 * Maximum controller output
	 */
	Float vrmax;
	/**
	 * Minimum controller output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_9F5CF749_4ED2_4f9e_8356_75AFD5B2F13A__INCLUDED_)
