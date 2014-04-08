///////////////////////////////////////////////////////////
//  ShuntCompensator.h
//  Implementation of the Class ShuntCompensator
//  Created on:      07-fev-2014 11:44:24
///////////////////////////////////////////////////////////

#if !defined(EA_A01BB09C_80FD_4704_A1A8_6F09628F6BA9__INCLUDED_)
#define EA_A01BB09C_80FD_4704_A1A8_6F09628F6BA9__INCLUDED_

#include "Seconds.h"
#include "Susceptance.h"
#include "Conductance.h"
#include "WindingConnection.h"
#include "Integer.h"
#include "Voltage.h"
#include "PhaseShuntConnectionKind.h"
#include "DateTime.h"
#include "VoltagePerReactivePower.h"
#include "RegulatingCondEq.h"
#include "ShuntCompensatorPhase.h"

/**
 * A shunt capacitor or reactor or switchable bank of shunt capacitors or reactors.
 * A section of a shunt compensator is an individual capacitor or reactor.  A
 * negative value for reactivePerSection indicates that the compensator is a
 * reactor. ShuntCompensator is a single terminal device.  Ground is implied.
 */
class ShuntCompensator : public RegulatingCondEq
{

public:
	ShuntCompensator();
	virtual ~ShuntCompensator();
	/**
	 * Time delay required for the device to be connected or disconnected by automatic
	 * voltage regulation (AVR).
	 */
	Seconds aVRDelay;
	/**
	 * Zero sequence shunt (charging) susceptance per section
	 */
	Susceptance b0PerSection;
	/**
	 * Positive sequence shunt (charging) susceptance per section
	 */
	Susceptance bPerSection;
	/**
	 * Zero sequence shunt (charging) conductance per section
	 */
	Conductance g0PerSection;
	/**
	 * Positive sequence shunt (charging) conductance per section
	 */
	Conductance gPerSection;
	/**
	 * Used for Yn and Zn connections. True if the neutral is solidly grounded.
	 */
	WindingConnection grounded;
	/**
	 * The maximum number of sections that may be switched in. 
	 */
	Integer maximumSections;
	/**
	 * The voltage at which the nominal reactive power may be calculated. This should
	 * normally be within 10% of the voltage at which the capacitor is connected to
	 * the network.
	 */
	Voltage nomU;
	/**
	 * The normal number of sections switched in.
	 */
	Integer normalSections;
	/**
	 * The type of phase connection, such as wye or delta.
	 */
	PhaseShuntConnectionKind phaseConnection;
	/**
	 * The switch on count since the capacitor count was last reset or initialized.
	 */
	Integer switchOnCount;
	/**
	 * The date and time when the capacitor bank was last switched on.
	 */
	DateTime switchOnDate;
	/**
	 * Voltage sensitivity required for the device to regulate the bus voltage, in
	 * voltage/reactive power.
	 */
	VoltagePerReactivePower voltageSensitivity;
	/**
	 * The individual phases models for the shunt compensator.
	 */
    QList<ShuntCompensatorPhase> *shuntCompensatorPhase;

};
#endif // !defined(EA_A01BB09C_80FD_4704_A1A8_6F09628F6BA9__INCLUDED_)
