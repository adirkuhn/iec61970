///////////////////////////////////////////////////////////
//  RectifierInverter.h
//  Implementation of the Class RectifierInverter
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_F6D4E90C_211C_4295_A8D3_11998CDFCEA6__INCLUDED_)
#define EA_F6D4E90C_211C_4295_A8D3_11998CDFCEA6__INCLUDED_

#include "Integer.h"
#include "Reactance.h"
#include "Resistance.h"
#include "Frequency.h"
#include "ActivePower.h"
#include "Voltage.h"
#include "OperatingMode.h"
#include "ConductingEquipment.h"

/**
 * Bi-directional AC-DC conversion equipment that can be used to control DC
 * current, DC voltage, DC power flow, or firing angle.
 */
class RectifierInverter : public ConductingEquipment
{

public:
	RectifierInverter();
	virtual ~RectifierInverter();
	/**
	 * Number of bridges
	 */
	Integer bridges;
	/**
	 * Commutating reactance at AC bus frequency.
	 */
	Reactance commutatingReactance;
	/**
	 * Commutating resistance.
	 */
	Resistance commutatingResistance;
	/**
	 * Compounding resistance.
	 */
	Resistance compoundResistance;
	/**
	 * Frequency on the AC side.
	 */
	Frequency frequency;
	/**
	 * The maximum active power on the DC side at which the fconverter should operate.
	 */
	ActivePower maxP;
	/**
	 * The maximum voltage on the DC side at which the converter should operate.
	 */
	Voltage maxU;
	/**
	 * Minimum compounded DC voltage.
	 */
	Voltage minCompoundVoltage;
	/**
	 * The minimum active power on the DC side at which the converter should operate.
	 */
	ActivePower minP;
	/**
	 * The minimum voltage on the DC side at which the converter should operate.
	 */
	Voltage minU;
	/**
	 * Operating mode for the converter.
	 */
	OperatingMode operatingMode;
	/**
	 * Rectifier/inverter primary base voltage.
	 */
	Voltage ratedU;

};
#endif // !defined(EA_F6D4E90C_211C_4295_A8D3_11998CDFCEA6__INCLUDED_)
