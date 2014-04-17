///////////////////////////////////////////////////////////
//  BWRSteamSupply.h
//  Implementation of the Class BWRSteamSupply
//  Created on:      07-fev-2014 11:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_E60DA575_7155_4eb8_B117_E6E76E84A90B__INCLUDED_)
#define EA_E60DA575_7155_4eb8_B117_E6E76E84A90B__INCLUDED_

#include "PU.h"
#include "Seconds.h"
#include "lFloat.h"
#include "SteamSupply.h"

/**
 * Boiling water reactor used as a steam supply to a steam turbine.
 */
class BWRSteamSupply : public SteamSupply
{

public:
	BWRSteamSupply();
	virtual ~BWRSteamSupply();
	/**
	 * High power limit.
	 */
	PU highPowerLimit;
	/**
	 * In-core thermal time constant.
	 */
	Seconds inCoreThermalTC;
	/**
	 * Integral gain.
	 */
	Float integralGain;
	/**
	 * Initial lower limit.
	 */
	PU lowerLimit;
	/**
	 * Low power limit.
	 */
	PU lowPowerLimit;
	/**
	 * Pressure limit.
	 */
	PU pressureLimit;
	/**
	 * Pressure setpoint gain adjuster.
	 */
	Float pressureSetpointGA;
	/**
	 * Pressure setpoint time constant.
	 */
	Seconds pressureSetpointTC1;
	/**
	 * Pressure setpoint time constant.
	 */
	Seconds pressureSetpointTC2;
	/**
	 * Proportional gain.
	 */
	Float proportionalGain;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux1;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux2;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux3;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux4;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux5;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux6;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux7;
	/**
	 * Coefficient for modeling the effect of off-nominal frequency and voltage on
	 * recirculation and core flow, which affects the BWR power output.
	 */
	PU rfAux8;
	/**
	 * Rod pattern.
	 */
	PU rodPattern;
	/**
	 * Constant associated with rod pattern.
	 */
	Float rodPatternConstant;
	/**
	 * Initial upper limit.
	 */
	PU upperLimit;

};
#endif // !defined(EA_E60DA575_7155_4eb8_B117_E6E76E84A90B__INCLUDED_)
