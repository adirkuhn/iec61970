///////////////////////////////////////////////////////////
//  SvPowerFlow.h
//  Implementation of the Class SvPowerFlow
//  Created on:      07-fev-2014 11:44:28
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_36556AC0_3D78_41dc_8E06_805CC63623BA__INCLUDED_)
#define EA_36556AC0_3D78_41dc_8E06_805CC63623BA__INCLUDED_

#include "ActivePower.h"
#include "ReactivePower.h"
#include "StateVariable.h"
#include "Terminal.h"

/**
 * State variable for power flow. Load convention is used for flow direction. This
 * means flow out from the TopologicalNode into the equipment is positive.
 */
class SvPowerFlow : public StateVariable
{

public:
	SvPowerFlow();
	virtual ~SvPowerFlow();
	/**
	 * The active power flow. Load sign convention is used, i.e. positive sign means
	 * flow out from a node.
	 */
	ActivePower p;
	/**
	 * The reactive power flow. Load sign convention is used, i.e. positive sign means
	 * flow out from a node.
	 */
	ReactivePower q;
	/**
	 * The terminal associated with the power flow state variable.
	 */
    Terminal *terminal;

};
#endif // !defined(EA_36556AC0_3D78_41dc_8E06_805CC63623BA__INCLUDED_)
