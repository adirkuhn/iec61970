///////////////////////////////////////////////////////////
//  ProtectedSwitch.h
//  Implementation of the Class ProtectedSwitch
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_92FDEABD_309F_4507_BC39_42BE69600F73__INCLUDED_)
#define EA_92FDEABD_309F_4507_BC39_42BE69600F73__INCLUDED_

#include "CurrentFlow.h"
#include "Switch.h"
#include "RecloseSequence.h"

/**
 * A ProtectedSwitch is a switching device that can be operated by
 * ProtectionEquipment.
 */
class ProtectedSwitch : public Switch
{

public:
	ProtectedSwitch();
	virtual ~ProtectedSwitch();

	/**
	 * The maximum fault current a breaking device can break safely under prescribed
	 * conditions of use.
	 */
	CurrentFlow breakingCapacity;

	/**
	 * A breaker may have zero or more automatic reclosures after a trip occurs.
	 */
    QList<RecloseSequence*> recloseSequences;
};
#endif // !defined(EA_92FDEABD_309F_4507_BC39_42BE69600F73__INCLUDED_)
