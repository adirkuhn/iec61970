///////////////////////////////////////////////////////////
//  SVCControlMode.h
//  Implementation of the Class SVCControlMode
//  Created on:      07-fev-2014 11:44:28
///////////////////////////////////////////////////////////

#if !defined(EA_48DD8098_8063_4c71_9386_B012C8AD3DEB__INCLUDED_)
#define EA_48DD8098_8063_4c71_9386_B012C8AD3DEB__INCLUDED_

namespace SVCControlModeEnum
{
/**
 * Static VAr Compensator control mode.
 */
enum Type
{
	reactivePower,
	voltage,
	off
};
};

typedef enum SVCControlModeEnum::Type SVCControlMode;

#endif // !defined(EA_48DD8098_8063_4c71_9386_B012C8AD3DEB__INCLUDED_)
