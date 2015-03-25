///////////////////////////////////////////////////////////
//  GovHydro2.h
//  Implementation of the Class GovHydro2
//  Created on:      07-fev-2014 11:43:54
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_E3B40377_A30E_423a_93D4_CCD9F57BF2D3__INCLUDED_)
#define EA_E3B40377_A30E_423a_93D4_CCD9F57BF2D3__INCLUDED_

#include "lFloat.h"
#include "Frequency.h"
#include "ActivePower.h"
#include "Seconds.h"
#include "TurbineGovernor.h"

class GovHydro2 : public TurbineGovernor
{

public:
	GovHydro2();
	virtual ~GovHydro2();
	/**
	 * Turbine numerator multiplier
	 */
	Float aturb;
	/**
	 * Turbine denominator multiplier
	 */
	Float bturb;
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
	 * Nonlinear gain point 1, p.u. gv
	 */
	Float gv1;
	/**
	 * Nonlinear gain point 2, p.u. gv
	 */
	Float gv2;
	/**
	 * Nonlinear gain point 3, p.u. gv
	 */
	Float gv3;
	/**
	 * Nonlinear gain point 4, p.u. gv
	 */
	Float gv4;
	/**
	 * Nonlinear gain point 5, p.u. gv
	 */
	Float gv5;
	/**
	 * Nonlinear gain point 6, p.u. gv
	 */
	Float gv6;
	/**
	 * Turbine gain
	 */
	Float kturb;
	/**
	 * Base for power values (> 0.)
	 */
	ActivePower mwbase;
	/**
	 * Nonlinear gain point 1, p.u. power
	 */
	Float pgv1;
	/**
	 * Nonlinear gain point 2, p.u. power
	 */
	Float pgv2;
	/**
	 * Nonlinear gain point 3, p.u. power
	 */
	Float pgv3;
	/**
	 * Nonlinear gain point 4, p.u. power
	 */
	Float pgv4;
	/**
	 * Nonlinear gain point 5, p.u. power
	 */
	Float pgv5;
	/**
	 * Maximum gate opening
	 */
	Float pmax;
	/**
	 * Minimum gate opening
	 */
	Float pmin;
	/**
	 * Permanent droop
	 */
	Float rperm;
	/**
	 * Temporary droop
	 */
	Float rtemp;
	/**
	 * Gate servo time constant
	 */
	Seconds tg;
	/**
	 * Pilot servo valve time constant 
	 */
	Seconds tp;
	/**
	 * Dashpot time constant
	 */
	Seconds tr;
	/**
	 * Water inertia time constant
	 */
	Seconds tw;
	/**
	 * Maximum gate closing velocity (<0.)
	 */
	Float uc;
	/**
	 * Maximum gate opening velocity
	 */
	Float uo;
	/**
	 * Nonlinear gain point 6, p.u. power
	 */
	Float pgv6;

};
#endif // !defined(EA_E3B40377_A30E_423a_93D4_CCD9F57BF2D3__INCLUDED_)
