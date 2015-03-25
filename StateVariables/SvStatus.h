///////////////////////////////////////////////////////////
//  SvStatus.h
//  Implementation of the Class SvStatus
//  Created on:      07-fev-2014 11:44:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_5C4C74A6_CC84_452d_BB6E_48B506C91B95__INCLUDED_)
#define EA_5C4C74A6_CC84_452d_BB6E_48B506C91B95__INCLUDED_

#include "Boolean.h"
#include "StateVariable.h"
#include "ConductingEquipment.h"

/**
 * State variable for status.
 */
class SvStatus : public StateVariable
{

public:
	SvStatus();
	virtual ~SvStatus();

	/**
	 * The in service status as a result of topology processing.
	 */
	Boolean inService;

	/**
	 * The conducting equipment associated with the status state variable.
	 */
    ConductingEquipment *conductingEquipment;
};
#endif // !defined(EA_5C4C74A6_CC84_452d_BB6E_48B506C91B95__INCLUDED_)
