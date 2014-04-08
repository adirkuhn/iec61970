///////////////////////////////////////////////////////////
//  RemoteUnitType.h
//  Implementation of the Class RemoteUnitType
//  Created on:      07-fev-2014 11:44:22
///////////////////////////////////////////////////////////

#if !defined(EA_7D5F5372_9B18_49d3_A2AD_C7B96E81C67E__INCLUDED_)
#define EA_7D5F5372_9B18_49d3_A2AD_C7B96E81C67E__INCLUDED_

/**
 * Type of remote unit.
 */
enum RemoteUnitType
{
	/**
	 * Remote terminal unit.
	 */
	RTU,
	/**
	 * Substation control system.
	 */
	SubstationControlSystem,
	/**
	 * Control center.
	 */
	ControlCenter,
	/**
	 * Intelligent electronic device (IED).
	 */
	IED
};
#endif // !defined(EA_7D5F5372_9B18_49d3_A2AD_C7B96E81C67E__INCLUDED_)
