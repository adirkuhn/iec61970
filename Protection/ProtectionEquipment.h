///////////////////////////////////////////////////////////
//  ProtectionEquipment.h
//  Implementation of the Class ProtectionEquipment
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_C47F66B0_85F2_444e_B1A6_E46F34328C21__INCLUDED_)
#define EA_C47F66B0_85F2_444e_B1A6_E46F34328C21__INCLUDED_

#include "Seconds.h"
#include "Float.h"
#include "Boolean.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"
#include "Equipment.h"
#include "ProtectedSwitch.h"
#include "ConductingEquipment.h"

/**
 * An electrical device designed to respond to input conditions in a prescribed
 * manner and after specified conditions are met to cause contact operation or
 * similar abrupt change in associated electric control circuits, or simply to
 * display the detected condition. Protection equipment are associated with
 * conducting equipment and usually operate circuit breakers.
 */
class ProtectionEquipment : public Equipment
{

public:
	ProtectionEquipment();
	virtual ~ProtectionEquipment();
	/**
	 * The time delay from detection of abnormal conditions to relay operation.
	 */
	Seconds relayDelayTime;
	/**
	 * The maximum allowable value.
	 */
	Float highLimit;
	/**
	 * The minimum allowable value.
	 */
	Float lowLimit;
	/**
	 * Direction same as positive active power flow value.
	 */
	Boolean powerDirectionFlag;
	/**
	 * The unit of measure of the value.
	 */
	UnitSymbol unitSymbol;
	/**
	 * The unit multiplier of the value.
	 */
	UnitMultiplier unitMultiplier;
	/**
	 * Protected switches operated by this ProtectionEquipment.
	 */
	QList<ProtectedSwitch> *ProtectedSwitches;
	/**
	 * Protection equipment may be used to protect specific conducting equipment.
	 */
	QList<ConductingEquipment> *ConductingEquipments;

};
#endif // !defined(EA_C47F66B0_85F2_444e_B1A6_E46F34328C21__INCLUDED_)
