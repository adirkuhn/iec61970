///////////////////////////////////////////////////////////
//  OperationalLimitSet.h
//  Implementation of the Class OperationalLimitSet
//  Created on:      07-fev-2014 11:44:12
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_5C413CBE_3983_4b24_8212_A1B3C90F9339__INCLUDED_)
#define EA_5C413CBE_3983_4b24_8212_A1B3C90F9339__INCLUDED_

#include "IdentifiedObject.h"
#include "OperationalLimit.h"
#include "Terminal.h"
#include "Equipment.h"

/**
 * A set of limits associated with equipment.  Sets of limits might apply to a
 * specific temperature, or season for example. A set of limits may contain
 * different severities of limit levels that would apply to the same equipment.
 * The set may contain limits of different types such as apparent power and
 * current limits or high and low voltage limits  that are logically applied
 * together as a set.
 */
class OperationalLimitSet : public IdentifiedObject
{

public:
	OperationalLimitSet();
	virtual ~OperationalLimitSet();
	/**
	 * Values of equipment limits.
	 */
	QList<OperationalLimit> *OperationalLimitValue;
	/**
	 * The terminal specifically associated to this operational limit set.  If no
	 * terminal is associated, all terminals of the equipment are implied.
	 */
    Terminal *terminal;
	/**
	 * The equipment to which the limit set applies.
	 */
    Equipment *equipment;

};
#endif // !defined(EA_5C413CBE_3983_4b24_8212_A1B3C90F9339__INCLUDED_)
