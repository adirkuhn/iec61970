///////////////////////////////////////////////////////////
//  ExcST4B.h
//  Implementation of the Class ExcST4B
//  Created on:      07-fev-2014 11:43:49
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_DD3BF4F9_A4C3_4069_87E7_2CAC20FAD4D7__INCLUDED_)
#define EA_DD3BF4F9_A4C3_4069_87E7_2CAC20FAD4D7__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) ST4B Model
 * 
 * This model is a variation of the Type ST3A model, with a proportional plus
 * integral (PI) regulator block
 * replacing the lag-lead regulator characteristic that was in the ST3A model.
 * Both potential- and compoundsource
 * rectifier excitation systems are modeled. The PI regulator blocks have
 * nonwindup limits that are represented. The voltage regulator of this model is
 * typically implemented digitally.
 */
class ExcST4B : public ExcitationSystem
{

public:
	ExcST4B();
	virtual ~ExcST4B();
	/**
	 * Phase angle of potential source
	 */
	Float angp;
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
	 * Integral gain of inner loop regulator
	 */
	Float kim;
	/**
	 * AVR Integral gain
	 */
	Float kir;
	/**
	 * Potential source gain (> 0.)
	 */
	Float kp;
	/**
	 * Prop. gain of inner loop regulator
	 */
	Float kpm;
	/**
	 * AVR proportional gain
	 */
	Float kpr;
	/**
	 * AVR time constant (>= 0.)
	 */
	Seconds ta;
	/**
	 * Voltage transducer time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Maximum excitation voltage (> 0.)
	 */
	Float vbmax;
	/**
	 * Maximum inner loop feedback gain (>= 0.)
	 */
	Float vgmax;
	/**
	 * Maximum inner loop regulator output
	 */
	Float vmmax;
	/**
	 * Minimum inner loop regulator output
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
	 * P-bar leakage reactance (>= 0.)
	 */
	Float xl;

};
#endif // !defined(EA_DD3BF4F9_A4C3_4069_87E7_2CAC20FAD4D7__INCLUDED_)
