///////////////////////////////////////////////////////////
//  ExcAC1A.h
//  Implementation of the Class ExcAC1A
//  Created on:      07-fev-2014 11:43:43
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_F68F7196_95A2_4a90_A38F_08A8AC992F61__INCLUDED_)
#define EA_F68F7196_95A2_4a90_A38F_08A8AC992F61__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC1A Model
 * The model represents the field-controlled alternator-rectifier excitation
 * systems
 * designated Type AC1A. These excitation systems consist of an alternator main
 * exciter with non-controlled
 * rectifiers.
 */
class ExcAC1A : public ExcitationSystem
{

public:
	ExcAC1A();
	virtual ~ExcAC1A();
	/**
	 * Field voltage value 1    (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.   (> 0.)
	 */
	Float e2;
	/**
	 * AVR gain (> 0.)
	 */
	Float ka;
	/**
	 * Rectifier regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Exciter internal reactance  (>= 0.)
	 */
	Float kd;
	/**
	 * Exciter field resistance constant
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
	 * Maximum exciter control signal (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum exciter control signal  (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_F68F7196_95A2_4a90_A38F_08A8AC992F61__INCLUDED_)
