///////////////////////////////////////////////////////////
//  BranchGroupTerminal.h
//  Implementation of the Class BranchGroupTerminal
//  Created on:      07-fev-2014 11:43:31
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_A4DDA57F_ACB6_463e_8867_9757A670C0B1__INCLUDED_)
#define EA_A4DDA57F_ACB6_463e_8867_9757A670C0B1__INCLUDED_

#include "Boolean.h"
#include "Terminal.h"

/**
 * A specific directed terminal flow for a branch group.
 */
class BranchGroupTerminal
{

public:
	BranchGroupTerminal();
	virtual ~BranchGroupTerminal();
	/**
	 * The flow into the terminal is summed if set true.   The flow out of the
	 * terminanl is summed if set false.
	 */
	Boolean positiveFlowIn;
	/**
	 * The terminal to be summed.
	 */
    Terminal *terminal;

};
#endif // !defined(EA_A4DDA57F_ACB6_463e_8867_9757A670C0B1__INCLUDED_)
