///////////////////////////////////////////////////////////
//  GovSteam1.h
//  Implementation of the Class GovSteam1
//  Created on:      07-fev-2014 11:43:56
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_61A9FB67_D8B1_4904_A0BC_B7925E8D3C1A__INCLUDED_)
#define EA_61A9FB67_D8B1_4904_A0BC_B7925E8D3C1A__INCLUDED_

#include "Frequency.h"
#include "ActivePower.h"
#include "Float.h"
#include "Seconds.h"
#include "TurbineGovernor.h"

/**
 * IEEE steam turbine/governor model  (with optional deadband and nonlinear valve
 * gain added).
 */
class GovSteam1 : public TurbineGovernor
{

public:
	GovSteam1();
	virtual ~GovSteam1();
	/**
	 * Intentional deadband width
	 */
	Frequency db1;
	/**
	 * Unintentional deadband
	 */
	ActivePower db2;
	/**
	 * Intentional db hysteresis
	 */
	Frequency eps;
	/**
	 * Nonlinear gain valve position point 1
	 */
	Float gv1;
	/**
	 * Nonlinear gain valve position point 2
	 */
	Float gv2;
	/**
	 * Nonlinear gain valve position point 3
	 */
	Float gv3;
	/**
	 * Nonlinear gain valve position point 4
	 */
	Float gv4;
	/**
	 * Nonlinear gain valve position point 5
	 */
	Float gv5;
	/**
	 * Nonlinear gain valve position point 6
	 */
	Float gv6;
	/**
	 * Governor gain (reciprocal of droop) (> 0.)
	 */
	Float k;
	/**
	 * Fraction of HP shaft power after first boiler pass
	 */
	Float k1;
	/**
	 * Fraction of LP shaft power after first boiler pass
	 */
	Float k2;
	/**
	 * Fraction of HP shaft power after second boiler pass
	 */
	Float k3;
	/**
	 * Fraction of LP shaft power after second boiler pass
	 */
	Float k4;
	/**
	 * Fraction of HP shaft power after third boiler pass
	 */
	Float k5;
	/**
	 * Fraction of LP shaft power after third boiler pass
	 */
	Float k6;
	/**
	 * Fraction of HP shaft power after fourth boiler pass
	 */
	Float k7;
	/**
	 * Fraction of LP shaft power after fourth boiler pass
	 */
	Float k8;
	/**
	 * Base for power values (> 0.)
	 */
	ActivePower mwbase;
	/**
	 * Nonlinear gain power value point 1
	 */
	Float pgv1;
	/**
	 * Nonlinear gain power value point 2
	 */
	Float pgv2;
	/**
	 * Nonlinear gain power value point 3
	 */
	Float pgv3;
	/**
	 * Nonlinear gain power value point 4
	 */
	Float pgv4;
	/**
	 * Nonlinear gain power value point 5
	 */
	Float pgv5;
	/**
	 * Nonlinear gain power value point 6
	 */
	Float pgv6;
	/**
	 * Maximum valve opening (> Pmin)
	 */
	Float pmax;
	/**
	 * Minimum valve opening (>= 0.)
	 */
	Float pmin;
	/**
	 * Governor lag time constant
	 */
	Seconds t1;
	/**
	 * Governor lead time constant
	 */
	Seconds t2;
	/**
	 * Valve positioner time constant (> 0.)
	 */
	Seconds t3;
	/**
	 * Inlet piping/steam bowl time constant
	 */
	Seconds t4;
	/**
	 * Time constant of second boiler pass
	 */
	Seconds t5;
	/**
	 * Time constant of third boiler pass
	 */
	Seconds t6;
	/**
	 * Time constant of fourth boiler pas
	 */
	Seconds t7;
	/**
	 * Maximum valve closing velocity, p.u./sec (< 0.)
	 */
	Float uc;
	/**
	 * Maximum valve opening velocity (> 0.)
	 */
	Float uo;

};
#endif // !defined(EA_61A9FB67_D8B1_4904_A0BC_B7925E8D3C1A__INCLUDED_)
