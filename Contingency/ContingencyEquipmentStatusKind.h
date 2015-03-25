///////////////////////////////////////////////////////////
//  ContingencyEquipmentStatusKind.h
//  Implementation of the Class ContingencyEquipmentStatusKind
//  Created on:      07-fev-2014 11:43:36
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_0E134530_E6C3_438a_8418_6195728FA2E0__INCLUDED_)
#define EA_0E134530_E6C3_438a_8418_6195728FA2E0__INCLUDED_

/**
 * Indicates the state which the contingency equipment is to be in when the
 * contingency is applied.
 */
enum ContingencyEquipmentStatusKind
{
	/**
	 * The equipment is in service.
	 */
	inService,
	/**
	 * The equipment is to be taken out of service.
	 */
	outOfService
};
#endif // !defined(EA_0E134530_E6C3_438a_8418_6195728FA2E0__INCLUDED_)
