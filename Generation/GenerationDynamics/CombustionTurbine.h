///////////////////////////////////////////////////////////
//  CombustionTurbine.h
//  Implementation of the Class CombustionTurbine
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_37C366D6_9B3E_4c6a_AC17_F498A70A0842__INCLUDED_)
#define EA_37C366D6_9B3E_4c6a_AC17_F498A70A0842__INCLUDED_

#include "Temperature.h"
#include "PU.h"
#include "Boolean.h"
#include "Seconds.h"
#include "AirCompressor.h"
#include "PrimeMover.h"
#include "CTTempActivePowerCurve.h"

/**
 * A prime mover that is typically fueled by gas or light oil.
 */
class CombustionTurbine : public PrimeMover
{

public:
	CombustionTurbine();
	virtual ~CombustionTurbine();
	/**
	 * Default ambient temperature to be used in modeling applications.
	 */
	Temperature ambientTemp;
	/**
	 * Off-nominal frequency effect on turbine auxiliaries. Per unit reduction in
	 * auxiliary active power consumption versus per unit reduction in frequency (from
	 * rated frequency).
	 */
	PU auxPowerVersusFrequency;
	/**
	 * Off-nominal voltage effect on turbine auxiliaries. Per unit reduction in
	 * auxiliary active power consumption versus per unit reduction in auxiliary bus
	 * voltage (from a specified voltage level).
	 */
	PU auxPowerVersusVoltage;
	/**
	 * Off-nominal frequency effect on turbine capability. Per unit reduction in unit
	 * active power capability versus per unit reduction in frequency (from rated
	 * frequency).
	 */
	PU capabilityVersusFrequency;
	/**
	 * Flag that is set to true if the combustion turbine is associated with a heat
	 * recovery boiler.
	 */
	Boolean heatRecoveryFlag;
	/**
	 * Per unit change in power per (versus) unit change in ambient temperature.
	 */
	PU powerVariationByTemp;
	/**
	 * Reference temperature at which the output of the turbine was defined.
	 */
	Temperature referenceTemp;
	/**
	 * The time constant for the turbine.
	 */
	Seconds timeConstant;
	/**
	 * A CAES air compressor is driven by combustion turbine.
	 */
    AirCompressor *airCompressor;
	/**
	 * A combustion turbine may have an active power versus ambient temperature
	 * relationship.
	 */
    CTTempActivePowerCurve *ctTempActivePowerCurve;

};
#endif // !defined(EA_37C366D6_9B3E_4c6a_AC17_F498A70A0842__INCLUDED_)
