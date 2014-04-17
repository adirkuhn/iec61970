///////////////////////////////////////////////////////////
//  GeneratingUnit.h
//  Implementation of the Class GeneratingUnit
//  Created on:      07-fev-2014 11:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_C43254C6_5BE8_48fb_ADD8_7AA5782D965C__INCLUDED_)
#define EA_C43254C6_5BE8_48fb_ADD8_7AA5782D965C__INCLUDED_

#include "ActivePower.h"
#include "Seconds.h"
#include "ActivePowerChangeRate.h"
#include "Boolean.h"
#include "PU.h"
#include "HeatRate.h"
#include "Integer.h"
#include "GeneratorControlMode.h"
#include "GeneratorControlSource.h"
#include "GeneratorOperatingMode.h"
#include "PerCent.h"
#include "lFloat.h"
#include "Classification.h"
#include "Money.h"
#include "GenUnitOpSchedule.h"
#include "Equipment.h"
#include "SynchronousMachine.h"
#include "GrossToNetActivePowerCurve.h"
#include "GenUnitOpCostCurve.h"

/**
 * A single or set of synchronous machines for converting mechanical power into
 * alternating-current power. For example, individual machines within a set may be
 * defined for scheduling purposes while a single control signal is derived for
 * the set. In this case there would be a GeneratingUnit for each member of the
 * set and an additional GeneratingUnit corresponding to the set.
 */
class GeneratingUnit : public Equipment
{

public:
	GeneratingUnit();
	virtual ~GeneratingUnit();
	/**
	 * The planned unused capacity (spinning reserve) which can be used to support
	 * emergency load.
	 */
	ActivePower allocSpinResP;
	/**
	 * The planned unused capacity which can be used to support automatic control
	 * overruns.
	 */
	ActivePower autoCntrlMarginP;
	/**
	 * For dispatchable units, this value represents the economic active power
	 * basepoint, for units that are not dispatchable, this value represents the fixed
	 * generation value. The value must be between the operating low and high limits.
	 */
	ActivePower baseP;
	/**
	 * Unit control error deadband. When a unit's desired active power change is less
	 * than this deadband, then no control pulses will be sent to the unit.
	 */
	ActivePower controlDeadband;
	/**
	 * Pulse high limit which is the largest control pulse that the unit can respond
	 * to.
	 */
	Seconds controlPulseHigh;
	/**
	 * Pulse low limit which is the smallest control pulse that the unit can respond
	 * to.
	 */
	Seconds controlPulseLow;
	/**
	 * Unit response rate which specifies the active power change for a control pulse
	 * of one second in the most responsive loading level of the unit.
	 */
	ActivePowerChangeRate controlResponseRate;
	/**
	 * Recommended to be deleted from standard.
	 */
	Boolean dispReserveFlag;
	/**
	 * The efficiency of the unit in converting mechanical energy, from the prime
	 * mover, into electrical energy.
	 */
	PU efficiency;
	/**
	 * Recommended to be deleted from standard.
	 */
	HeatRate energyMinP;
	/**
	 * Indicates the generating unit has a fast start capability and implies the
	 * generating unit can potentially contribute to spinning reserve even while not
	 * spinning.
	 */
	Boolean fastStartFlag;
	/**
	 * Recommended to be deleted from standard.
	 */
	Integer fuelPriority;
	/**
	 * The unit control mode.
	 */
	GeneratorControlMode genControlMode;
	/**
	 * The source of controls for a generating unit.
	 */
	GeneratorControlSource genControlSource;
	/**
	 * Operating mode for secondary control.
	 */
	GeneratorOperatingMode genOperatingMode;
	/**
	 * Governor motor position limit.
	 */
	PU governorMPL;
	/**
	 * Governor Speed Changer Droop.   This is the change in generator power output
	 * divided by the change in frequency normalized by the nominal power of the
	 * generator and the nominal frequency and expressed in percent and negated. A
	 * positive value of speed change droop provides additional generator output upon
	 * a drop in frequency.
	 */
	PerCent governorSCD;
	/**
	 * High limit for secondary (AGC) control.
	 */
	ActivePower highControlLimit;
	/**
	 * Default initial active power  which is used to store a powerflow result for the
	 * initial active power for this unit in this network configuration.
	 */
	ActivePower initialP;
	/**
	 * Generating unit long term economic participation factor.
	 */
	Float longPF;
	/**
	 * Low limit for secondary (AGC) control.
	 */
	ActivePower lowControlLimit;
	/**
	 * The normal maximum rate the generating unit active power output can be lowered
	 * by control actions.
	 */
	ActivePowerChangeRate lowerRampRate;
	/**
	 * Maximum high economic active power limit, that should not exceed the maximum
	 * operating active power limit.
	 */
	ActivePower maxEconomicP;
	/**
	 * Maximum allowable spinning reserve. Spinning reserve will never be considered
	 * greater than this value regardless of the current operating point.
	 */
	ActivePower maximumAllowableSpinningReserve;
	/**
	 * This is the maximum operating active power limit the dispatcher can enter for
	 * this unit.
	 */
	ActivePower maxOperatingP;
	/**
	 * Low economic active power limit that must be greater than or equal to the
	 * minimum operating active power limit.
	 */
	ActivePower minEconomicP;
	/**
	 * Minimum time interval between unit shutdown and startup.
	 */
	Seconds minimumOffTime;
	/**
	 * This is the minimum operating active power limit the dispatcher can enter for
	 * this unit.
	 */
	ActivePower minOperatingP;
	/**
	 * Detail level of the generator model data.
	 */
	Classification modelDetail;
	/**
	 * The nominal power of the generating unit.  Used to give precise meaning to
	 * percentage based attributes such as the govenor speed change droop (govenorSCD
	 * attribute).
	 */
	ActivePower nominalP;
	/**
	 * Generating unit economic participation factor.
	 */
	Float normalPF;
	/**
	 * Defined as: 1 / ( 1 - Incremental Transmission Loss); with the Incremental
	 * Transmission Loss expressed as a plus or minus value. The typical range of
	 * penalty factors is (0.9 to 1.1).
	 */
	Float penaltyFactor;
	/**
	 * The normal maximum rate the generating unit active power output can be raised
	 * by control actions.
	 */
	ActivePowerChangeRate raiseRampRate;
	/**
	 * The unit's gross rated maximum capacity (book value).
	 */
	ActivePower ratedGrossMaxP;
	/**
	 * The gross rated minimum generation level which the unit can safely operate at
	 * while delivering power to the transmission grid.
	 */
	ActivePower ratedGrossMinP;
	/**
	 * The net rated maximum capacity determined by subtracting the auxiliary power
	 * used to operate the internal plant machinery from the rated gross maximum
	 * capacity.
	 */
	ActivePower ratedNetMaxP;
	/**
	 * Generating unit short term economic participation factor.
	 */
	Float shortPF;
	/**
	 * Reccommended to be deleted from standard.
	 */
	ActivePowerChangeRate spinReserveRamp;
	/**
	 * The initial startup cost incurred for each start of the GeneratingUnit.
	 */
	Money startupCost;
	/**
	 * Time it takes to get the unit on-line, from the time that the prime mover
	 * mechanical power is applied.
	 */
	Seconds startupTime;
	/**
	 * Recommended to be deleted from standard.
	 */
	ActivePower stepChange;
	/**
	 * Generating unit economic participation factor.
	 */
	Float tieLinePF;
	/**
	 * The variable cost component of production per unit of ActivePower.
	 */
	Money variableCost;
	/**
	 * A generating unit may have an operating schedule, indicating the planned
	 * operation of the unit.
	 */
    GenUnitOpSchedule *genUnitOpSchedule;
	/**
	 * A synchronous machine may operate as a generator and as such becomes a member
	 * of a generating unit.
	 */
	QList<SynchronousMachine> *SynchronousMachines;
	/**
	 * A generating unit may have a gross active power to net active power curve,
	 * describing the losses and auxiliary power requirements of the unit.
	 */
	QList<GrossToNetActivePowerCurve> *GrossToNetActivePowerCurves;
	/**
	 * A generating unit may have one or more cost curves, depending upon fuel mixture
	 * and fuel cost.
	 */
	QList<GenUnitOpCostCurve> *GenUnitOpCostCurves;

};
#endif // !defined(EA_C43254C6_5BE8_48fb_ADD8_7AA5782D965C__INCLUDED_)
