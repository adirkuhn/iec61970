///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Class Command
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_FC2BA88B_CD44_4046_8F71_6171255F9033__INCLUDED_)
#define EA_FC2BA88B_CD44_4046_8F71_6171255F9033__INCLUDED_

#include "Integer.h"
#include "ValueAliasSet.h"
#include "Control.h"

/**
 * A Command is a discrete control used for supervisory control.
 */
class Command : public Control
{

public:
	Command();
	virtual ~Command();
	/**
	 * Normal value for Control.value e.g. used for percentage scaling.
	 */
	Integer normalValue;
	/**
	 * The value representing the actuator output.
	 */
	Integer value;
	/**
	 * The Commands using the set for translation.
	 */
    ValueAliasSet *valueAliasSet;

};
#endif // !defined(EA_FC2BA88B_CD44_4046_8F71_6171255F9033__INCLUDED_)
