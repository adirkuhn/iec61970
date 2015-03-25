///////////////////////////////////////////////////////////
//  ExcST3A.h
//  Implementation of the Class ExcST3A
//  Created on:      07-fev-2014 11:43:49
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_3850559B_2845_46ac_BE59_86BBA6AB4FC3__INCLUDED_)
#define EA_3850559B_2845_46ac_BE59_86BBA6AB4FC3__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) ST3A Model
 * 
 * Some static systems utilize a field voltage control loop to linearize the
 * exciter control characteristic. This also makes the output independent of
 * supply source variations until supply limitations are reached.
 * These systems utilize a variety of controlled-rectifier designs: full thyristor
 * complements or hybrid bridges
 * in either series or shunt configurations. The power source may consist of only
 * a potential source, either fed from the machine terminals or from internal
 * windings. Some designs may have compound power sources utilizing both machine
 * potential and current. These power sources are represented as phasor
 * combinations of machine terminal current and voltage and are accommodated by
 * suitable parameters in the model Type ST3A.
 */
class ExcST3A : public ExcitationSystem
{

public:
	ExcST3A();
	virtual ~ExcST3A();
	/**
	 * Phase angle of potential source
	 */
	Float angp;
	/**
	 * AVR gain (> 0.)
	 */
	Float ka;
	/**
	 * Exciter regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Inner loop feedback gain (>= 0.)
	 */
	Float kg;
	/**
	 * Current source gain (>= 0.)
	 */
	Float ki;
	/**
	 * Inner loop forward gain (> 0.)
	 */
	Float km;
	/**
	 * Potential source gain (> 0.)
	 */
	Float kp;
	/**
	 * AVR time constant (>= 0.)
	 */
	Seconds ta;
	/**
	 * AVR lag time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * AVR lead time constant
	 */
	Seconds tc;
	/**
	 * Inner loop time constant (> 0.)
	 */
	Seconds tm;
	/**
	 * Voltage transducer time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Maximum excitation voltage (> 0.)
	 */
	Float vbmax;
	/**
	 * Maximum inner loop feedback voltage (>= 0.)
	 */
	Float vgmax;
	/**
	 * Maximum error (> 0.)
	 */
	Float vimax;
	/**
	 * Minimum error (< 0.)
	 */
	Float vimin;
	/**
	 * Maximum inner loop output (> 0.)
	 */
	Float vmmax;
	/**
	 * Minimum inner loop output (<= 0.)
	 */
	Float vmmin;
	/**
	 * Maximum AVR output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum AVR output (< 0.)
	 */
	Float vrmin;
	/**
	 * P-bar reactance (>= 0.)
	 */
	Float xl;

};
#endif // !defined(EA_3850559B_2845_46ac_BE59_86BBA6AB4FC3__INCLUDED_)
