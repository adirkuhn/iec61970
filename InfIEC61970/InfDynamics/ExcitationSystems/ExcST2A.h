///////////////////////////////////////////////////////////
//  ExcST2A.h
//  Implementation of the Class ExcST2A
//  Created on:      07-fev-2014 11:43:48
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_FD1FB87F_409A_4d58_9973_B7A6EC07EEFC__INCLUDED_)
#define EA_FD1FB87F_409A_4d58_9973_B7A6EC07EEFC__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) ST2A Model
 * 
 * Some static systems utilize both current and voltage sources (generator
 * terminal quantities) to comprise the
 * power source. These compound-source rectifier excitation systems are designated
 * Type ST2A. The regulator controls the exciter output through controlled
 * saturation of the power transformer components. 
 */
class ExcST2A : public ExcitationSystem
{

public:
	ExcST2A();
	virtual ~ExcST2A();
	/**
	 * Maximum field voltage (>=0.)
	 */
	Float efdmax;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Rectifier loading factor (>= 0.)
	 */
	Float kc;
	/**
	 * Time constant feedback
	 */
	Float ke;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Current source gain (>= 0.)
	 */
	Float ki;
	/**
	 * Potential source gain (>= 0.)
	 */
	Float kp;
	/**
	 * Time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * Time constant (>=0.)
	 */
	Seconds tb;
	/**
	 * Time constant
	 */
	Seconds tc;
	/**
	 * Transformer saturation control time constant (> 0.)
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
	 * UEL input: if = 1, HV gate; if = 2, add to error signal
	 */
	Float uelin;
	/**
	 * Maximum controller output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum controller output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_FD1FB87F_409A_4d58_9973_B7A6EC07EEFC__INCLUDED_)
