///////////////////////////////////////////////////////////
//  ExcST7B.h
//  Implementation of the Class ExcST7B
//  Created on:      07-fev-2014 11:43:49
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_E8BE702E_D378_4b65_9154_F2EA4C1E13B9__INCLUDED_)
#define EA_E8BE702E_D378_4b65_9154_F2EA4C1E13B9__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) ST7B Model
 * 
 * The model ST7B is representative of static potential-source excitation systems.
 * In this system,
 * the AVR consists of a PI voltage regulator. A phase lead-lag filter in series
 * allows introduction of a
 * derivative function, typically used with brushless excitation systems. In that
 * case, the regulator is of the PID type. In addition, the terminal voltage
 * channel includes a phase lead-lag filter. The AVR includes the appropriate
 * inputs on its reference for overexcitation limiter (OEL1), underexcitation
 * limiter (UEL), stator current limiter (SCL), and current compensator (DROOP).
 * All these limitations, when they work at voltage reference level, keep the PSS
 * (VS signal from Type PSS1A, PSS2A, or PSS2B) in
 * operation. However, the UEL limitation can also be transferred to the high
 * value (HV) gate acting on the
 * output signal. In addition, the output signal passes through a low value (LV)
 * gate for a ceiling overexcitation
 * limiter (OEL2).
 */
class ExcST7B : public ExcitationSystem
{

public:
	ExcST7B();
	virtual ~ExcST7B();
	/**
	 * High-value gate feedback gain (>= 0.)
	 */
	Float kh;
	/**
	 * Feedback gain (>= 0.)
	 */
	Float kia;
	/**
	 * Low-value gate feedback gain (>= 0.)
	 */
	Float kl;
	/**
	 * Regulator proportional gain (> 0.)
	 */
	Float kpa;
	/**
	 * OEL input selector: 1 ? add to Vref, 2 ? input LV gate,
	 * 2 ? output LV gate, 0 ? no OEL input
	 */
	Float oelin;
	/**
	 * Lead-lag denominator time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * Lead-lag numerator time constant (>= 0.)
	 */
	Seconds tc;
	/**
	 * Input lead-lag denominator time constant (>= 0.)
	 */
	Seconds tf;
	/**
	 * Input lead-lag numerator time constant (>= 0.)
	 */
	Seconds tg;
	/**
	 * Feedback time constant (>= 0.)
	 */
	Seconds tia;
	/**
	 * Filter time constant
	 */
	Seconds tr;
	/**
	 * Rectifier firing time constant (>= 0.) (not in IEEE model)
	 */
	Seconds ts;
	/**
	 * UEL input selector: 1 ? add to Vref, 2 ? input HV gate,
	 * 3 ? output HV gate, 0 ? no UEL input
	 */
	Float uelin;
	/**
	 * Maximum voltage reference signal (> 0.)
	 */
	Float vmax;
	/**
	 * Minimum voltage reference signal (> 0.)
	 */
	Float vmin;
	/**
	 * Maximum field voltage output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum field voltage output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_E8BE702E_D378_4b65_9154_F2EA4C1E13B9__INCLUDED_)
