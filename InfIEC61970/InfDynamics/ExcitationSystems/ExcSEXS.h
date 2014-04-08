///////////////////////////////////////////////////////////
//  ExcSEXS.h
//  Implementation of the Class ExcSEXS
//  Created on:      07-fev-2014 11:43:48
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_0E019A37_E6F1_4a0e_904E_748E866166F9__INCLUDED_)
#define EA_0E019A37_E6F1_4a0e_904E_748E866166F9__INCLUDED_

#include "Float.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * Simplified Excitation System Model.
 */
class ExcSEXS : public ExcitationSystem
{

public:
	ExcSEXS();
	virtual ~ExcSEXS();
	/**
	 * Field voltage clipping maximum limit
	 */
	Float efdmax;
	/**
	 * Field voltage clipping minimum limit
	 */
	Float efdmin;
	/**
	 * Maximum field voltage output
	 */
	Float emax;
	/**
	 * Minimum field voltage output
	 */
	Float emin;
	/**
	 * Gain (> 0.)
	 */
	Float k;
	/**
	 * PI controller gain (> 0. if Tc > 0.)
	 */
	Float kc;
	/**
	 * Ta/Tb - gain reduction ratio of lag-lead element
	 */
	Float tatb;
	/**
	 * Denominator time constant of lag-lead block
	 */
	Seconds tb;
	/**
	 * PI controller phase lead time constant
	 */
	Seconds tc;
	/**
	 * Time constant of gain block (> 0.)
	 */
	Seconds te;

};
#endif // !defined(EA_0E019A37_E6F1_4a0e_904E_748E866166F9__INCLUDED_)
