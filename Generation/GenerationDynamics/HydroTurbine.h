///////////////////////////////////////////////////////////
//  HydroTurbine.h
//  Implementation of the Class HydroTurbine
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_9FAE33A1_454A_4e84_A32E_9FAF075A0BE9__INCLUDED_)
#define EA_9FAE33A1_454A_4e84_A32E_9FAF075A0BE9__INCLUDED_

#include "lFloat.h"
#include "PU.h"
#include "ActivePower.h"
#include "RotationSpeed.h"
#include "Seconds.h"
#include "TurbineType.h"
#include "PrimeMover.h"

/**
 * A water driven prime mover. Typical turbine types are: Francis, Kaplan, and
 * Pelton.
 */
class HydroTurbine : public PrimeMover
{

public:
	HydroTurbine();
	virtual ~HydroTurbine();
	/**
	 * Gate rate limit.
	 */
	Float gateRateLimit;
	/**
	 * Gate upper limit.
	 */
	PU gateUpperLimit;
	/**
	 * Maximum efficiency active power at maximum head conditions.
	 */
	ActivePower maxHeadMaxP;
	/**
	 * Maximum efficiency active power at minimum head conditions.
	 */
	ActivePower minHeadMaxP;
	/**
	 * Rated speed in number of revolutions.
	 */
	RotationSpeed speedRating;
	/**
	 * Speed regulation.
	 */
	PU speedRegulation;
	/**
	 * Transient droop time constant.
	 */
	Seconds transientDroopTime;
	/**
	 * Transient regulation.
	 */
	PU transientRegulation;
	/**
	 * Rated turbine active power.
	 */
	ActivePower turbineRating;
	/**
	 * Type of turbine.
	 */
	TurbineType turbineType;
	/**
	 * Water starting time.
	 */
	Seconds waterStartingTime;

};
#endif // !defined(EA_9FAE33A1_454A_4e84_A32E_9FAF075A0BE9__INCLUDED_)
