///////////////////////////////////////////////////////////
//  EnergyConsumerPhase.h
//  Implementation of the Class EnergyConsumerPhase
//  Created on:      07-fev-2014 11:43:42
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_6E71EF4A_0C9A_4da8_99C5_E2B06D3A5E99__INCLUDED_)
#define EA_6E71EF4A_0C9A_4da8_99C5_E2B06D3A5E99__INCLUDED_

#include "ActivePower.h"
#include "PerCent.h"
#include "SinglePhaseKind.h"
#include "ReactivePower.h"
#include "PowerSystemResource.h"

/**
 * A single phase of an energy consumer.
 */
class EnergyConsumerPhase : public PowerSystemResource
{

public:
	EnergyConsumerPhase();
	virtual ~EnergyConsumerPhase();

	/**
	 * Active power of the load that is a fixed quantity. Load sign convention is used,
	 * i.e. positive sign means flow out from a node.
	 */
	ActivePower pfixed;

	/**
	 * Fixed active power as per cent of load group fixed active power. Load sign
	 * convention is used, i.e. positive sign means flow out from a node.
	 */
	PerCent pfixedPct;

	/**
	 * Phase of this energy consumer component.   If the energy consumer is wye
	 * connected, the connection is from the indicated phase to the central ground or
	 * neutral point.  If the energy consumer is delta connected, the phase indicates
	 * an energy consumer connected from the indicated phase to the next logical non-
	 * neutral phase.
	 */
	SinglePhaseKind phase;

	/**
	 * Reactive power of the load that is a fixed quantity. Load sign convention is
	 * used, i.e. positive sign means flow out from a node.
	 */
	ReactivePower qfixed;

	/**
	 * Fixed reactive power as per cent of load group fixed reactive power. Load sign
	 * convention is used, i.e. positive sign means flow out from a node.
	 */
	PerCent qfixedPct;
};
#endif // !defined(EA_6E71EF4A_0C9A_4da8_99C5_E2B06D3A5E99__INCLUDED_)
