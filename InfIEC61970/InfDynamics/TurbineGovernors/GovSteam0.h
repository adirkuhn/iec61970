///////////////////////////////////////////////////////////
//  GovSteam0.h
//  Implementation of the Class GovSteam0
//  Created on:      07-fev-2014 11:43:56
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_38C17BC1_CE70_4359_B4EE_A705C6FF9DBF__INCLUDED_)
#define EA_38C17BC1_CE70_4359_B4EE_A705C6FF9DBF__INCLUDED_

#include "lFloat.h"
#include "ActivePower.h"
#include "Seconds.h"
#include "TurbineGovernor.h"

/**
 * A simplified steam turbine-governor model.
 */
class GovSteam0 : public TurbineGovernor
{

public:
	GovSteam0();
	virtual ~GovSteam0();
	/**
	 * Turbine damping coefficient
	 */
	Float dt;
	/**
	 * Base for power values  (> 0.)
	 */
	ActivePower mwbase;
	/**
	 * Permanent droop
	 */
	Float r;
	/**
	 * Steam bowl time constant
	 */
	Seconds t1;
	/**
	 * Numerator time constant of T2/T3 block
	 */
	Seconds t2;
	/**
	 * Reheater time constant
	 */
	Seconds t3;
	/**
	 * Maximum valve position, p.u. of mwcap
	 */
	Float vmax;
	/**
	 * Minimum valve position, p.u. of mwcap
	 */
	Float vmin;

};
#endif // !defined(EA_38C17BC1_CE70_4359_B4EE_A705C6FF9DBF__INCLUDED_)
