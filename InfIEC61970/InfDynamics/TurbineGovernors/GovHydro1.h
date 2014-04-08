///////////////////////////////////////////////////////////
//  GovHydro1.h
//  Implementation of the Class GovHydro1
//  Created on:      07-fev-2014 11:43:54
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_CF28C819_3B83_4498_B0DC_3C7ACED8AB79__INCLUDED_)
#define EA_CF28C819_3B83_4498_B0DC_3C7ACED8AB79__INCLUDED_

#include "Float.h"
#include "ActivePower.h"
#include "Seconds.h"
#include "TurbineGovernor.h"
#include "HydroTurbine.h"
#include "SynchronousMachine.h"

/**
 * Hydro turbine-governor model.
 */
class GovHydro1 : public TurbineGovernor
{

public:
	GovHydro1();
	virtual ~GovHydro1();
	/**
	 * Turbine gain (>0)
	 */
	Float at;
	/**
	 * Turbine damping factor (>=0)
	 */
	Float dturb;
	/**
	 * Maximum gate opening (>0)
	 */
	Float gmax;
	/**
	 * Minimum gate opening (>=0)
	 */
	Float gmin;
	/**
	 * Base for power values  (> 0.)
	 */
	ActivePower mwbase;
	/**
	 * No-load flow at nominal head (>=0)
	 */
	Float qnl;
	/**
	 * Permanent droop (R) (>0)
	 */
	Float rperm;
	/**
	 * Temporary droop (r) (>R)
	 */
	Float rtemp;
	/**
	 * Filter time constant (>0)
	 */
	Seconds tf;
	/**
	 * Gate servo time constant (>0)
	 */
	Seconds tg;
	/**
	 * Washout time constant (>0)
	 */
	Seconds tr;
	/**
	 * Water inertia time constant (>0)
	 */
	Seconds tw;
	/**
	 * Maximum gate velocity (>0)
	 */
	Float velm;
	/**
	 * The turbine of the governor.
	 */
    HydroTurbine *hydroTurbine;
	/**
	 * The synchronous machine of the governor.
	 */
    SynchronousMachine *synchronousMachine;

};
#endif // !defined(EA_CF28C819_3B83_4498_B0DC_3C7ACED8AB79__INCLUDED_)
