///////////////////////////////////////////////////////////
//  CurrentRelay.h
//  Implementation of the Class CurrentRelay
//  Created on:      07-fev-2014 11:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_E87F2E28_A574_4d0f_8B65_DDED56E37E66__INCLUDED_)
#define EA_E87F2E28_A574_4d0f_8B65_DDED56E37E66__INCLUDED_

#include "CurrentFlow.h"
#include "Boolean.h"
#include "Seconds.h"
#include "ProtectionEquipment.h"

/**
 * A device that checks current flow values in any direction or designated
 * direction.
 */
class CurrentRelay : public ProtectionEquipment
{

public:
	CurrentRelay();
	virtual ~CurrentRelay();
	/**
	 * Current limit number one 1 for inverse time pickup.
	 */
	CurrentFlow currentLimit1;
	/**
	 * Current limit number 2 for inverse time pickup.
	 */
	CurrentFlow currentLimit2;
	/**
	 * Current limit number 3 for inverse time pickup.
	 */
	CurrentFlow currentLimit3;
	/**
	 * Set true if the current relay has inverse time characteristic.
	 */
	Boolean inverseTimeFlag;
	/**
	 * Inverse time delay number 1 for current limit number 1.
	 */
	Seconds timeDelay1;
	/**
	 * Inverse time delay number 2 for current limit number 2.
	 */
	Seconds timeDelay2;
	/**
	 * Inverse time delay number 3 for current limit number 3.
	 */
	Seconds timeDelay3;

};
#endif // !defined(EA_E87F2E28_A574_4d0f_8B65_DDED56E37E66__INCLUDED_)
