///////////////////////////////////////////////////////////
//  PWRSteamSupply.h
//  Implementation of the Class PWRSteamSupply
//  Created on:      07-fev-2014 11:44:18
///////////////////////////////////////////////////////////

#if !defined(EA_E33A2D6C_B604_484e_B729_91A8C6A40A7D__INCLUDED_)
#define EA_E33A2D6C_B604_484e_B729_91A8C6A40A7D__INCLUDED_

#include "PU.h"
#include "SteamSupply.h"

/**
 * Pressurized water reactor used as a steam supply to a steam turbine.
 */
class PWRSteamSupply : public SteamSupply
{

public:
	PWRSteamSupply();
	virtual ~PWRSteamSupply();
	/**
	 * Cold leg feedback lag time constant.
	 */
	PU coldLegFBLagTC;
	/**
	 * Cold leg feedback lead time constant.
	 */
	PU coldLegFBLeadTC1;
	/**
	 * Cold leg feedback lead time constant.
	 */
	PU coldLegFBLeadTC2;
	/**
	 * Cold leg feedback gain 1.
	 */
	PU coldLegFG1;
	/**
	 * Cold leg feedback gain 2.
	 */
	PU coldLegFG2;
	/**
	 * Cold leg lag time constant.
	 */
	PU coldLegLagTC;
	/**
	 * Core heat transfer lag time constant.
	 */
	PU coreHTLagTC1;
	/**
	 * Core heat transfer lag time constant.
	 */
	PU coreHTLagTC2;
	/**
	 * Core neutronics effective time constant.
	 */
	PU coreNeutronicsEffTC;
	/**
	 * Core neutronics and heat transfer.
	 */
	PU coreNeutronicsHT;
	/**
	 * Feedback factor.
	 */
	PU feedbackFactor;
	/**
	 * Hot leg lag time constant.
	 */
	PU hotLegLagTC;
	/**
	 * Hot leg steam gain.
	 */
	PU hotLegSteamGain;
	/**
	 * Hot leg to cold leg gain.
	 */
	PU hotLegToColdLegGain;
	/**
	 * Pressure control gain.
	 */
	PU pressureCG;
	/**
	 * Steam flow feedback gain.
	 */
	PU steamFlowFG;
	/**
	 * Steam pressure drop lag time constant.
	 */
	PU steamPressureDropLagTC;
	/**
	 * Steam pressure feedback gain.
	 */
	PU steamPressureFG;
	/**
	 * Throttle pressure factor.
	 */
	PU throttlePressureFactor;
	/**
	 * Throttle pressure setpoint.
	 */
	PU throttlePressureSP;

};
#endif // !defined(EA_E33A2D6C_B604_484e_B729_91A8C6A40A7D__INCLUDED_)
