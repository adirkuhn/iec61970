///////////////////////////////////////////////////////////
//  SvVoltage.h
//  Implementation of the Class SvVoltage
//  Created on:      07-fev-2014 11:44:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_59B32B57_8CEE_4082_B6E4_C9D64E62B9A1__INCLUDED_)
#define EA_59B32B57_8CEE_4082_B6E4_C9D64E62B9A1__INCLUDED_

#include "AngleDegrees.h"
#include "Voltage.h"
#include "TopologicalNode.h"
#include "StateVariable.h"

/**
 * State variable for voltage.
 */
class SvVoltage : public StateVariable
{

public:
	SvVoltage();
	virtual ~SvVoltage();
	/**
	 * The voltage angle of the topological node complex voltage with respect to
	 * system reference.
	 */
	AngleDegrees angle;
	/**
	 * The voltage magnitude of the topological node.
	 */
	Voltage v;
	/**
	 * The topological node associated with the voltage state.
	 */
    TopologicalNode *topologicalNode;

};
#endif // !defined(EA_59B32B57_8CEE_4082_B6E4_C9D64E62B9A1__INCLUDED_)
