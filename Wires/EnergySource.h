///////////////////////////////////////////////////////////
//  EnergySource.h
//  Implementation of the Class EnergySource
//  Created on:      07-fev-2014 11:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_B86B019E_DA2C_444d_BF1A_338C659D147A__INCLUDED_)
#define EA_B86B019E_DA2C_444d_BF1A_338C659D147A__INCLUDED_

#include "ActivePower.h"
#include "Voltage.h"
#include "Resistance.h"
#include "AngleRadians.h"
#include "Reactance.h"
#include "ConductingEquipment.h"

/**
 * A generic equivalent for an energy supplier on a transmission or distribution
 * voltage level.
 */
class EnergySource : public ConductingEquipment
{

public:
	EnergySource();
	virtual ~EnergySource();
	/**
	 * High voltage source load.
	 */
	ActivePower activePower;
	/**
	 * Phase-to-phase nominal voltage.
	 */
	Voltage nominalVoltage;
	/**
	 * Positive sequence Thevenin resistance.
	 */
	Resistance r;
	/**
	 * Zero sequence Thevenin resistance.
	 */
	Resistance r0;
	/**
	 * Negative sequence Thevenin resistance.
	 */
	Resistance rn;
	/**
	 * Phase angle of a-phase open circuit.
	 */
	AngleRadians voltageAngle;
	/**
	 * Phase-to-phase open circuit voltage magnitude.
	 */
	Voltage voltageMagnitude;
	/**
	 * Positive sequence Thevenin reactance.
	 */
	Reactance x;
	/**
	 * Zero sequence Thevenin reactance.
	 */
	Reactance x0;
	/**
	 * Negative sequence Thevenin reactance.
	 */
	Reactance xn;

};
#endif // !defined(EA_B86B019E_DA2C_444d_BF1A_338C659D147A__INCLUDED_)
