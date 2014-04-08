///////////////////////////////////////////////////////////
//  EnergyConsumer.h
//  Implementation of the Class EnergyConsumer
//  Created on:      07-fev-2014 11:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_51DB1CFD_057A_40f5_A2A8_C78670805C88__INCLUDED_)
#define EA_51DB1CFD_057A_40f5_A2A8_C78670805C88__INCLUDED_

#include <QList>

#include "Integer.h"
#include "WindingConnection.h"
#include "ActivePower.h"
#include "PerCent.h"
#include "PhaseShuntConnectionKind.h"
#include "ReactivePower.h"
#include "ConductingEquipment.h"
#include "LoadResponseCharacteristic.h"
#include "EnergyConsumerPhase.h"

/**
 * Generic user of energy - a  point of consumption on the power system model.
 */
class EnergyConsumer : public ConductingEquipment
{

public:
	EnergyConsumer();
	virtual ~EnergyConsumer();

	/**
	 * Number of individual customers represented by this demand.
	 */
	Integer customerCount;

	/**
	 * Used for Yn and Zn connections. True if the neutral is solidly grounded.
	 */
	WindingConnection grounded;

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
	 * The type of phase connection, such as wye or delta.
	 */
	PhaseShuntConnectionKind phaseConnection;

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

	/**
	 * The load response characteristic of this load.  If missing, this load is
	 * assumed to be constant power.
	 */
    LoadResponseCharacteristic *loadResponse;

	/**
	 * The individual phase models for this energy consumer.
	 */
    QList<EnergyConsumerPhase> energyConsumerPhases;
};
#endif // !defined(EA_51DB1CFD_057A_40f5_A2A8_C78670805C88__INCLUDED_)
