///////////////////////////////////////////////////////////
//  ExcAC8B.h
//  Implementation of the Class ExcAC8B
//  Created on:      07-fev-2014 11:43:45
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_0B8424A5_2C1C_42b7_8129_958646D7162D__INCLUDED_)
#define EA_0B8424A5_2C1C_42b7_8129_958646D7162D__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) AC8B Model
 * 
 * The AVR in this model consists of PID
 * control, with separate constants for the proportional (<i>KPR</i>), integral
 * (<i>KIR</i>), and derivative (<i>KDR</i>) gains. The
 * representation of the brushless exciter (<i>TE</i>, <i>KE</i>, <i>SE</i>,
 * <i>KC</i>, <i>KD</i>) is similar to the model Type AC2A. The Type AC8B model
 * can be used to represent static voltage
 * regulators applied to brushless excitation systems. Digitally based voltage
 * regulators feeding dc rotating
 * main exciters can be represented with the AC Type AC8B model with the
 * parameters <i>KC </i>and <i>KD </i>set to 0.
 * For thyristor power stages fed from the generator terminals, the limits
 * <i>VRMAX </i>and <i>VRMIN </i>should be a
 * function of terminal voltage: <i>VT </i>x <i>VRMAX </i>and <i>VT </i>x
 * <i>VRMIN</i>. 
 */
class ExcAC8B : public ExcitationSystem
{

public:
	ExcAC8B();
	virtual ~ExcAC8B();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.    (> 0.)
	 */
	Float e2;
	/**
	 * Amplifier gain (> 0.)
	 */
	Float ka;
	/**
	 * Rectifier regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Exciter regulation factor (>= 0.)
	 */
	Float kd;
	/**
	 * Voltage Regulator Derivative Gain (>= 0.)
	 */
	Float kdr;
	/**
	 * Exciter field proportional constant
	 */
	Float ke;
	/**
	 * Voltage Regulator Integral Gain (>= 0.)
	 */
	Float kir;
	/**
	 * Voltage Regulator Proportional Gain (> 0. if
	 * kir = 0.)
	 */
	Float kpr;
	/**
	 * Saturation factor at e1 (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2  (>= 0.)
	 */
	Float se2;
	/**
	 * Amplifier time constant  (>= 0.)
	 */
	Seconds ta;
	/**
	 * Voltage Regulator Derivative Time Constant
	 * (> 0. if kdr > 0.)
	 */
	Seconds tdr;
	/**
	 * Exciter field time constant (> 0.)
	 */
	Seconds te;
	/**
	 * Voltage transducer time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Minimum exciter ouput voltage (<= 0.)
	 */
	Float vemin;
	/**
	 * Exciter field current limit parameter
	 */
	Float vfemax;
	/**
	 * Maximum controller output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum controller output (<= 0.)
	 */
	Float vrmin;
	/**
	 * If not 0, multiply vrmax and vrmin by
	 * terminal voltage.
	 */
	Float vtmult;

};
#endif // !defined(EA_0B8424A5_2C1C_42b7_8129_958646D7162D__INCLUDED_)
