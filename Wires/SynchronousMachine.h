///////////////////////////////////////////////////////////
//  SynchronousMachine.h
//  Implementation of the Class SynchronousMachine
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_1B97749C_734B_45b7_9B34_5A57E7D70D6D__INCLUDED_)
#define EA_1B97749C_734B_45b7_9B34_5A57E7D70D6D__INCLUDED_

#include "Seconds.h"
#include "ReactivePower.h"
#include "ActivePower.h"
#include "Float.h"
#include "CoolantType.h"
#include "Voltage.h"
#include "SynchronousMachineOperatingMode.h"
#include "PerCent.h"
#include "Resistance.h"
#include "Integer.h"
#include "SynchronousGeneratorType.h"
#include "SynchronousMachineType.h"
#include "Reactance.h"
#include "HydroPump.h"
#include "RotatingMachine.h"

/**
 * An electromechanical device that operates with shaft rotating synchronously
 * with the network. It is a single machine operating either as a generator or
 * synchronous condenser or pump.
 */
class SynchronousMachine : public RotatingMachine
{

public:
	SynchronousMachine();
	virtual ~SynchronousMachine();

	/**
	 * Time delay required when switching from Automatic Voltage Regulation (AVR) to
	 * Manual for a lagging MVAr violation.
	 */
	Seconds aVRToManualLag;

	/**
	 * Time delay required when switching from Automatic Voltage Regulation (AVR) to
	 * Manual for a leading MVAr violation.
	 */
	Seconds aVRToManualLead;

	/**
	 * Default base reactive power value. This value represents the initial reactive
	 * power that can be used by any application function.
	 */
	ReactivePower baseQ;

	/**
	 * Active power consumed when in condenser mode operation.
	 */
	ActivePower condenserP;

	/**
	 * Temperature or pressure of coolant medium
	 */
	Float coolantCondition;

	/**
	 * Method of cooling the machine.
	 */
	CoolantType coolantType;

	/**
	 * Time delay required when switching from Manual to Automatic Voltage Regulation.
	 * This value is used in the accelerating power reference frame for powerflow
	 * solutions
	 */
	Seconds manualToAVR;

	/**
	 * Maximum reactive power limit. This is the maximum (nameplate) limit for the
	 * unit.
	 */
	ReactivePower maxQ;

	/**
	 * Maximum voltage limit for the unit.
	 */
	Voltage maxU;

	/**
	 * Minimum reactive power limit for the unit.
	 */
	ReactivePower minQ;

	/**
	 * Minimum voltage  limit for the unit.
	 */
	Voltage minU;

	/**
	 * Current mode of operation.
	 */
	SynchronousMachineOperatingMode operatingMode;

	/**
	 * Percent of the coordinated reactive control that comes from this machine.
	 */
	PerCent qPercent;

	/**
	 * Positive sequence resistance of the synchronous machine.
	 */
	Resistance r;

	/**
	 * Zero sequence resistance of the synchronous machine.
	 */
	Resistance r0;

	/**
	 * Negative sequence resistance.
	 */
	Resistance r2;

	/**
	 * Priority of unit for use as powerflow voltage phase angle reference bus
	 * selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and
	 * so on.
	 */
	Integer referencePriority;

	/**
	 * Type of Synchronous Generator used in Dynamic simulation applications.
	 */
	SynchronousGeneratorType synchronousGeneratorType;

	/**
	 * Direct axis transient rotor time constant, also known as T'do
	 */
	Seconds tpdo;

	/**
	 * Direct axis sub-transient rotor time constant, also known as T''do
	 */
	Seconds tppdo;

	/**
	 * Quadrature axis subtransient rotor time constant, also known as T"qo
	 */
	Seconds tppqo;

	/**
	 * Quadrature axis transient rotor time constant, also known as T'qo
	 */
	Seconds tpqo;

	/**
	 * Modes that this synchronous machine can operate in.
	 */
	SynchronousMachineType type;

	/**
	 * Positive sequence reactance of the synchronous machine.
	 */
	Reactance x;

	/**
	 * Zero sequence reactance of the synchronous machine.
	 */
	Reactance x0;

	/**
	 * Negative sequence reactance.
	 */
	Reactance x2;

	/**
	 * Direct-axis subtransient reactance, also known as X"d.
	 */
	Reactance xDirectSubtrans;

	/**
	 * Direct-axis synchronous reactance. The quotient of a sustained value of that AC
	 * component of armature voltage that is produced by the total direct-axis flux
	 * due to direct-axis armature current and the value of the AC component of this
	 * current, the machine running at rated speed. (Xd)
	 */
	Reactance xDirectSync;

	/**
	 * Direct-axis transient reactance, also known as X'd.
	 */
	Reactance xDirectTrans;

	/**
	 * Quadrature-axis subtransient reactance, also known as X"q.
	 */
	Reactance xQuadSubtrans;

	/**
	 * Quadrature-axis synchronous reactance (Xq) , the ratio of the component of
	 * reactive armature voltage, due to the quadrature-axis component of armature
	 * current, to this component of current, under steady state conditions and at
	 * rated frequency.
	 */
	Reactance xQuadSync;

	/**
	 * Quadrature-axis transient reactance, also known as X'q.
	 */
	Reactance xQuadTrans;

	/**
	 * The synchronous machine drives the turbine which moves the water from a low
	 * elevation to a higher elevation. The direction of machine rotation for pumping
	 * may or may not be the same as for generating.
	 */
    HydroPump *hydroPump;
};
#endif // !defined(EA_1B97749C_734B_45b7_9B34_5A57E7D70D6D__INCLUDED_)
