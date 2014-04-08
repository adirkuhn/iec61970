///////////////////////////////////////////////////////////
//  SynchrocheckRelay.h
//  Implementation of the Class SynchrocheckRelay
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_C5A35338_489F_4e1c_9C5B_E9EBAE252B67__INCLUDED_)
#define EA_C5A35338_489F_4e1c_9C5B_E9EBAE252B67__INCLUDED_

#include "AngleRadians.h"
#include "Frequency.h"
#include "Voltage.h"
#include "ProtectionEquipment.h"

/**
 * A device that operates when two AC circuits are within the desired limits of
 * frequency, phase angle, and voltage, to permit or to cause the paralleling of
 * these two circuits. Used to prevent the paralleling of non-synchronous
 * topological islands.
 */
class SynchrocheckRelay : public ProtectionEquipment
{

public:
	SynchrocheckRelay();
	virtual ~SynchrocheckRelay();
	/**
	 * The maximum allowable voltage vector phase angle difference across the open
	 * device.
	 */
	AngleRadians maxAngleDiff;
	/**
	 * The maximum allowable frequency difference across the open device.
	 */
	Frequency maxFreqDiff;
	/**
	 * The maximum allowable difference voltage across the open device.
	 */
	Voltage maxVoltDiff;

};
#endif // !defined(EA_C5A35338_489F_4e1c_9C5B_E9EBAE252B67__INCLUDED_)
