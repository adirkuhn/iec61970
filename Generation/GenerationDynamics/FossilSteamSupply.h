///////////////////////////////////////////////////////////
//  FossilSteamSupply.h
//  Implementation of the Class FossilSteamSupply
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_FA1D8B27_C11A_4161_B19E_8D1CE9B19EF4__INCLUDED_)
#define EA_FA1D8B27_C11A_4161_B19E_8D1CE9B19EF4__INCLUDED_

#include "PU.h"
#include "BoilerControlMode.h"
#include "Float.h"
#include "Seconds.h"
#include "Integer.h"
#include "SteamSupply.h"

/**
 * Fossil fueled boiler (e.g., coal, oil, gas).
 */
class FossilSteamSupply : public SteamSupply
{

public:
	FossilSteamSupply();
	virtual ~FossilSteamSupply();
	/**
	 * Off nominal frequency effect on auxiliary real power. Per unit active power
	 * variation versus per unit frequency variation.
	 */
	PU auxPowerVersusFrequency;
	/**
	 * Off nominal voltage effect on auxiliary real power. Per unit active power
	 * variation versus per unit voltage variation.
	 */
	PU auxPowerVersusVoltage;
	/**
	 * The control mode of the boiler.
	 */
	BoilerControlMode boilerControlMode;
	/**
	 * Active power error bias ratio.
	 */
	Float controlErrorBiasP;
	/**
	 * Integral constant.
	 */
	Float controlIC;
	/**
	 * Proportional constant.
	 */
	Float controlPC;
	/**
	 * Pressure error bias ratio.
	 */
	Float controlPEB;
	/**
	 * Pressure error deadband.
	 */
	PU controlPED;
	/**
	 * Time constant.
	 */
	Float controlTC;
	/**
	 * Feedwater integral gain ratio.
	 */
	Float feedWaterIG;
	/**
	 * Feedwater proportional gain ratio.
	 */
	Float feedWaterPG;
	/**
	 * Feedwater time constant rato.
	 */
	Seconds feedWaterTC;
	/**
	 * Fuel demand limit.
	 */
	PU fuelDemandLimit;
	/**
	 * Fuel delay.
	 */
	Seconds fuelSupplyDelay;
	/**
	 * Fuel supply time constant.
	 */
	Seconds fuelSupplyTC;
	/**
	 * Active power maximum error rate limit.
	 */
	Float maxErrorRateP;
	/**
	 * Mechanical power sensor lag.
	 */
	Seconds mechPowerSensorLag;
	/**
	 * Active power minimum error rate limit.
	 */
	Float minErrorRateP;
	/**
	 * Pressure control derivative gain ratio.
	 */
	Float pressureCtrlDG;
	/**
	 * Pressure control integral gain ratio.
	 */
	Float pressureCtrlIG;
	/**
	 * Pressure control proportional gain ratio.
	 */
	Float pressureCtrlPG;
	/**
	 * Pressure feedback indicator.
	 */
	Integer pressureFeedback;
	/**
	 * Drum/primary superheater capacity.
	 */
	Float superHeater1Capacity;
	/**
	 * Secondary superheater capacity.
	 */
	Float superHeater2Capacity;
	/**
	 * Superheater pipe pressure drop constant.
	 */
	Float superHeaterPipePD;
	/**
	 * Throttle pressure setpoint.
	 */
	PU throttlePressureSP;

};
#endif // !defined(EA_FA1D8B27_C11A_4161_B19E_8D1CE9B19EF4__INCLUDED_)
