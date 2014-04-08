///////////////////////////////////////////////////////////
//  CompositeSwitch.h
//  Implementation of the Class CompositeSwitch
//  Created on:      07-fev-2014 11:43:34
///////////////////////////////////////////////////////////

#if !defined(EA_A00A2D7E_07D0_4bfb_8BE0_89EBF9A164E0__INCLUDED_)
#define EA_A00A2D7E_07D0_4bfb_8BE0_89EBF9A164E0__INCLUDED_

#include "CompositeSwitchType.h"
#include "Switch.h"
#include "Equipment.h"

/**
 * A model of a set of individual Switches normally enclosed within the same
 * cabinet and possibly with interlocks that restrict the combination of switch
 * positions. These are typically found in medium voltage distribution networks.
 * A CompositeSwitch could represent a Ring-Main-Unit (RMU), or pad-mounted
 * switchgear, with primitive internal devices such as an internal bus-bar plus 3
 * or 4 internal switches each of which may individually be open or closed. A
 * CompositeSwitch and a set of contained Switches can also be used to represent a
 * multi-position switch e.g. a switch that can connect a circuit to Ground, Open
 * or Busbar.
 */
class CompositeSwitch : public Equipment
{

public:
	CompositeSwitch();
	virtual ~CompositeSwitch();
	/**
	 * An alphanumeric code that can be used as a reference to extra information such
	 * as the description of the interlocking scheme if any.
	 */
	CompositeSwitchType compositeSwitchType;
	/**
	 * Switches contained in this Composite switch.
	 */
	QList<Switch> *Switches;

};
#endif // !defined(EA_A00A2D7E_07D0_4bfb_8BE0_89EBF9A164E0__INCLUDED_)
