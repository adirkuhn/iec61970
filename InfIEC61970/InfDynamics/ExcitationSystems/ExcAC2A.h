///////////////////////////////////////////////////////////
//  ExcAC2A.h
//  Implementation of the Class ExcAC2A
//  Created on:      07-fev-2014 11:43:44
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_4978728D_329A_44cc_B798_0ECDE9D86E67__INCLUDED_)
#define EA_4978728D_329A_44cc_B798_0ECDE9D86E67__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC2A Model
 * The model designated as Type AC2A, represents a high initial response
 * fieldcontrolled
 * alternator-rectifier excitation system. The alternator main exciter is used
 * with non-controlled
 * rectifiers. The Type AC2A model is similar to that of Type AC1A except for the
 * inclusion of exciter time
 * constant compensation and exciter field current limiting elements.
 */
class ExcAC2A : public ExcitationSystem
{

public:
	ExcAC2A();
	virtual ~ExcAC2A();
	/**
	 * Field voltage value 1     (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.    (> 0.)
	 */
	Float e2;
	/**
	 * AVR gain (> 0.)
	 */
	Float ka;
	/**
	 * Exciter field current controller gain (> 0.)
	 */
	Float kb;
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
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Exciter field current feedback gain (>= 0.)
	 */
	Float kh;
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
	 * Exciter field current limit parameter (>= 0.)
	 */
	Float vfemax;
	/**
	 * Maximum exciter control signal (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum exciter control signal (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_4978728D_329A_44cc_B798_0ECDE9D86E67__INCLUDED_)
