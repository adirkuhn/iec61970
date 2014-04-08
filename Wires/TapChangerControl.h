///////////////////////////////////////////////////////////
//  TapChangerControl.h
//  Implementation of the Class TapChangerControl
//  Created on:      07-fev-2014 11:44:31
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_201CE088_4CE4_4c96_84A3_C2A0EF060085__INCLUDED_)
#define EA_201CE088_4CE4_4c96_84A3_C2A0EF060085__INCLUDED_

#include "Voltage.h"
#include "Boolean.h"
#include "Resistance.h"
#include "Reactance.h"
#include "RegulatingControl.h"

/**
 * Discribes behaviour specific to tap changers, e.g. how the voltage at the end
 * of a line varies with the load level and compensation of the voltage drop by
 * tap adjustment.
 */
class TapChangerControl : public RegulatingControl
{

public:
	TapChangerControl();
	virtual ~TapChangerControl();
	/**
	 * Maximum allowed regulated voltage on the PT secondary, regardless of line drop
	 * compensation. Sometimes referred to as first-house protection.
	 */
	Voltage limitVoltage;
	/**
	 * If true, the line drop compensation is to be applied.
	 */
	Boolean lineDropCompensation;
	/**
	 * Line drop compensator resistance setting for normal (forward) power flow.
	 */
	Resistance lineDropR;
	/**
	 * Line drop compensator reactance setting for normal (forward) power flow.
	 */
	Reactance lineDropX;
	/**
	 * Line drop compensator resistance setting for reverse power flow.
	 */
	Resistance reverseLineDropR;
	/**
	 * Line drop compensator reactance setting for reverse power flow.
	 */
	Reactance reverseLineDropX;

};
#endif // !defined(EA_201CE088_4CE4_4c96_84A3_C2A0EF060085__INCLUDED_)
