///////////////////////////////////////////////////////////
//  ExcAC3A.h
//  Implementation of the Class ExcAC3A
//  Created on:      07-fev-2014 11:43:44
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_CADE6D4E_C4BA_4afc_AB4E_C8E4E9892E5E__INCLUDED_)
#define EA_CADE6D4E_C4BA_4afc_AB4E_C8E4E9892E5E__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC3A Model
 * 
 * The model represents the field-controlled alternator-rectifier excitation
 * systems
 * designated Type AC3A. These excitation systems include an alternator main
 * exciter with non-controlled
 * rectifiers. The exciter employs self-excitation, and the voltage regulator
 * power is derived from the exciter
 * output voltage. Therefore, this system has an additional nonlinearity,
 * simulated by the use of a multiplier
 * whose inputs are the voltage regulator command signal, <i>VA</i>, and the
 * exciter output voltage, <i>EFD</i>, times <i>KR</i>.
 * This model is applicable to excitation systems employing static voltage
 * regulators.
 */
class ExcAC3A : public ExcitationSystem
{

public:
	ExcAC3A();
	virtual ~ExcAC3A();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.     (> 0.)
	 */
	Float e2;
	/**
	 * Rate feedback gain break level (> 0.)
	 */
	Float efdn;
	/**
	 * AVR gain (> 0.)
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
	 * Low level rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * High level rate feedback gain (>= 0.)
	 */
	Float kn;
	/**
	 * Field self-excitation feedback gain (> 0.)
	 */
	Float kr;
	/**
	 * Saturation factor at e1   (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2   (>= 0.)
	 */
	Float se2;
	/**
	 * AVR time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * TGR lag time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * TGR lead time constant
	 */
	Seconds tc;
	/**
	 * Exciter time constant (> 0.)
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
	 * Maximum AVR output (> 0.)
	 */
	Float vamax;
	/**
	 * Minimum AVR output (< 0.)
	 */
	Float vamin;
	/**
	 * Minimum field voltage limit (<= 0.)
	 */
	Float vemin;
	/**
	 * Exciter field current limit parameter (>= 0.)
	 */
	Float vfemax;

};
#endif // !defined(EA_CADE6D4E_C4BA_4afc_AB4E_C8E4E9892E5E__INCLUDED_)
