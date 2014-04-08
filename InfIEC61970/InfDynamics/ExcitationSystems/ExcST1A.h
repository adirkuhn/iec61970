///////////////////////////////////////////////////////////
//  ExcST1A.h
//  Implementation of the Class ExcST1A
//  Created on:      07-fev-2014 11:43:48
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_B114CE70_13F6_4a5f_BB03_2BAA82BA3AF7__INCLUDED_)
#define EA_B114CE70_13F6_4a5f_BB03_2BAA82BA3AF7__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) ST1A Model
 * 
 * The computer model of the Type ST1A potential-source controlled-rectifier
 * excitation system represents systems in which excitation power is supplied
 * through a transformer from the generator terminals (or the unit's auxiliary
 * bus) and is regulated by a controlled rectifier. The maximum exciter voltage
 * available from such systems is directly related to the generator terminal
 * voltage.
 */
class ExcST1A : public ExcitationSystem
{

public:
	ExcST1A();
	virtual ~ExcST1A();
	/**
	 * Maximum field current
	 */
	Float ilr;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Excitation system regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Gain on field current limit
	 */
	Float klr;
	/**
	 * If equal 0, then PSS input (Vs) added to error signal.  If not equal  0, then
	 * PSS input (Vs) added to voltage regulator output.
	 */
	Float pssin;
	/**
	 * Time constant (>= 0.)
	 */
	Seconds ta;
	/**
	 * Lag time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * Lag time constant (>= 0.)
	 */
	Seconds tb1;
	/**
	 * Lead time constant
	 */
	Seconds tc;
	/**
	 * Lead time constant
	 */
	Seconds tc1;
	/**
	 * Rate feedback time constant (>= 0.)
	 */
	Seconds tf;
	/**
	 * Voltage transducer time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * If equal 2, then UEL input added to error signal.
	 * If equal 1, then UEL input HV gate with error signal.
	 * If equal -1, then UEL input HV gate with voltage regulation output.
	 * If equal 0, then ignore UEL signal.
	 */
	Float uelin;
	/**
	 * Maximum control element output (> 0.)
	 */
	Float vamax;
	/**
	 * Minimum control element output (< 0.)
	 */
	Float vamin;
	/**
	 * Maximum error (> 0.)
	 */
	Float vimax;
	/**
	 * Minimum error (< 0.)
	 */
	Float vimin;
	/**
	 * Excitation voltage upper limit (> 0.)
	 */
	Float vrmax;
	/**
	 * Excitation voltage lower limit (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_B114CE70_13F6_4a5f_BB03_2BAA82BA3AF7__INCLUDED_)
