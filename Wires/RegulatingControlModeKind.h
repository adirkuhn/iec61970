///////////////////////////////////////////////////////////
//  RegulatingControlModeKind.h
//  Implementation of the Class RegulatingControlModeKind
//  Created on:      07-fev-2014 11:44:21
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_AC7FA156_9F5E_4695_BECA_422C71F9D7C9__INCLUDED_)
#define EA_AC7FA156_9F5E_4695_BECA_422C71F9D7C9__INCLUDED_

namespace RegulatingControlModeKindEnum
{
/**
 * The kind of regulation model.   For example regulating voltage, reactive power,
 * active power, etc.
 */
enum Type
{
	/**
	 * Voltage is specified.
	 */
	voltage,
	/**
	 * Active power is specified.
	 */
	activePower,
	/**
	 * Reactive power is specified.
	 */
	reactivePower,
	/**
	 * Current flow is specified.
	 */
	currentFlow,
	/**
	 * The regulation mode is fixed, and thus not regulating.
	 */
	fixed,
	/**
	 * Admittance is specified.
	 */
	admittance,
	/**
	 * Control switches on/off by time of day. The times may change on the weekend, or
	 * in different seasons.
	 */
	timeScheduled,
	/**
	 * Control switches on/off based on the local temperature (i.e., a thermostat).
	 */
	temperature,
	/**
	 * Power factor is specified.
	 */
	powerFactor
};
};

typedef enum RegulatingControlModeKindEnum::Type RegulatingControlModeKind;

#endif // !defined(EA_AC7FA156_9F5E_4695_BECA_422C71F9D7C9__INCLUDED_)
