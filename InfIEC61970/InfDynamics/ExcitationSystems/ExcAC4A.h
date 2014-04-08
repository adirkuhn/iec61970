///////////////////////////////////////////////////////////
//  ExcAC4A.h
//  Implementation of the Class ExcAC4A
//  Created on:      07-fev-2014 11:43:44
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_C41DBC2C_54D1_454d_A9E2_573D3E7C41F8__INCLUDED_)
#define EA_C41DBC2C_54D1_454d_A9E2_573D3E7C41F8__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC4A Model
 * 
 * The Type AC4A alternator-supplied controlled-rectifier excitation system is
 * quite different from the other type ac systems. This high initial response
 * excitation system utilizes a full thyristor bridge in the exciter output
 * circuit.
 * The voltage regulator controls the firing of the thyristor bridges. The exciter
 * alternator uses an independent
 * voltage regulator to control its output voltage to a constant value. These
 * effects are not modeled; however,
 * transient loading effects on the exciter alternator are included.
 */
class ExcAC4A : public ExcitationSystem
{

public:
	ExcAC4A();
	virtual ~ExcAC4A();
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Excitation system regulation (>= 0.)
	 */
	Float kc;
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
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Maximum error signal ( > 0.)
	 */
	Float vimax;
	/**
	 * Minimum error signal (< 0.)
	 */
	Float vimin;
	/**
	 * Maximum controller output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum controller output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_C41DBC2C_54D1_454d_A9E2_573D3E7C41F8__INCLUDED_)
