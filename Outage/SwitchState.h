///////////////////////////////////////////////////////////
//  SwitchState.h
//  Implementation of the Class SwitchState
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_CFCA1EE5_A726_439b_BC3E_3ADDDB06CF8A__INCLUDED_)
#define EA_CFCA1EE5_A726_439b_BC3E_3ADDDB06CF8A__INCLUDED_

namespace SwitchStateEnum
{
/**
 * Possible states for a switch.
 */
enum State
{
	/**
	 * Switch is open.
	 */
	open,
	/**
	 * Switch is closed.
	 */
	close
};
};

typedef enum SwitchStateEnum::State SwitchState;

#endif // !defined(EA_CFCA1EE5_A726_439b_BC3E_3ADDDB06CF8A__INCLUDED_)
