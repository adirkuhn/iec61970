///////////////////////////////////////////////////////////
//  SvShortCircuit.h
//  Implementation of the Class SvShortCircuit
//  Created on:      07-fev-2014 11:44:28
//  Original author: klh
///////////////////////////////////////////////////////////

#if !defined(EA_E9FE6C0C_24FC_4701_A18C_BEA3B2B76217__INCLUDED_)
#define EA_E9FE6C0C_24FC_4701_A18C_BEA3B2B76217__INCLUDED_

#include "lFloat.h"
#include "ApparentPower.h"
#include "StateVariable.h"
#include "TopologicalNode.h"

/**
 * State variable for short circuit.
 */
class SvShortCircuit : public StateVariable
{

public:
	SvShortCircuit();
	virtual ~SvShortCircuit();
	/**
	 * The ratio of zero sequence resistance to positive sequence resistance.
	 */
	Float r0PerR;
	/**
	 * The short circuit apparent power drawn at this node when faulted.
	 */
	ApparentPower sShortCircuit;
	/**
	 * The ratio of zero sequence reactance per positive sequence reactance.
	 */
	Float x0PerX;
	/**
	 * Ratio of positive sequence reactance per postive sequence resistance. 
	 */
	Float xPerR;
	/**
	 * The topological node associated with the state variables for short circuit.
	 */
    TopologicalNode *topologicalNode;

};
#endif // !defined(EA_E9FE6C0C_24FC_4701_A18C_BEA3B2B76217__INCLUDED_)
