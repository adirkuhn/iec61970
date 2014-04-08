///////////////////////////////////////////////////////////
//  BranchGroup.h
//  Implementation of the Class BranchGroup
//  Created on:      07-fev-2014 11:43:31
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_95B650BB_26B4_413c_944C_5BEA09F3662F__INCLUDED_)
#define EA_95B650BB_26B4_413c_944C_5BEA09F3662F__INCLUDED_

#include "ActivePower.h"
#include "ReactivePower.h"
#include "Boolean.h"
#include "BranchGroupTerminal.h"
#include "IdentifiedObject.h"

/**
 * A group of branch terminals whose directed flow summation is to be monitored. A
 * branch group need not form a cutset of the network.
 */
class BranchGroup : public IdentifiedObject
{

public:
	BranchGroup();
	virtual ~BranchGroup();
	/**
	 * The maximum active power flow.
	 */
	ActivePower maximumActivePower;
	/**
	 * The maximum reactive power flow.
	 */
	ReactivePower maximumReactivePower;
	/**
	 * The minimum active power flow.
	 */
	ActivePower minimumActivePower;
	/**
	 * The minimum reactive power flow.
	 */
	ReactivePower minimumReactivePower;
	/**
	 * Monitor the active power flow.
	 */
	Boolean monitorActivePower;
	/**
	 * Monitor the reactive power flow.
	 */
	Boolean monitorReactivePower;
	/**
	 * The directed branch group terminals to be summed.
	 */
    QList<BranchGroupTerminal> *BranchGroupTerminals;

};
#endif // !defined(EA_95B650BB_26B4_413c_944C_5BEA09F3662F__INCLUDED_)
