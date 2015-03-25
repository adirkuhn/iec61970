///////////////////////////////////////////////////////////
//  SvInjection.h
//  Implementation of the Class SvInjection
//  Created on:      07-fev-2014 11:44:28
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_3650B320_303B_4c28_A519_96D4D3D9E447__INCLUDED_)
#define EA_3650B320_303B_4c28_A519_96D4D3D9E447__INCLUDED_

#include "ActivePower.h"
#include "ReactivePower.h"
#include "TopologicalNode.h"
#include "StateVariable.h"

/**
 * Injection state variable.  Used for addressing situations where the exchanged
 * models have a Kirchof's law mismatch at a bus.  This includes exchange of
 * partial models with boundary flows and state estimator solutions with residual
 * mismatch.
 */
class SvInjection : public StateVariable
{

public:
	SvInjection();
	virtual ~SvInjection();
	/**
	 * The active power injected into the bus at this location.  Positive sign means
	 * injection into the bus.
	 */
	ActivePower pNetInjection;
	/**
	 * The reactive power injected into the bus at this location. Positive sign means
	 * injection into the bus.
	 */
	ReactivePower qNetInjection;
	/**
	 * The topological node associated with the flow injection state variable.
	 */
    TopologicalNode *topologicalNode;

};
#endif // !defined(EA_3650B320_303B_4c28_A519_96D4D3D9E447__INCLUDED_)
