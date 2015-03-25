///////////////////////////////////////////////////////////
//  SynchronousMachineOperatingMode.h
//  Implementation of the Class SynchronousMachineOperatingMode
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_20B7F6D7_AAB5_4b65_BDE9_7BA6F36C70CE__INCLUDED_)
#define EA_20B7F6D7_AAB5_4b65_BDE9_7BA6F36C70CE__INCLUDED_

namespace SynchronousMachineOperatingModeEnum
{
/**
 * Synchronous machine operating mode.
 */
enum Type
{
	generator,
	condenser
};
};

typedef enum SynchronousMachineOperatingModeEnum::Type SynchronousMachineOperatingMode;

#endif // !defined(EA_20B7F6D7_AAB5_4b65_BDE9_7BA6F36C70CE__INCLUDED_)
