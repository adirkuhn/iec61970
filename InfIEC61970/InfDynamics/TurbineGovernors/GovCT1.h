///////////////////////////////////////////////////////////
//  GovCT1.h
//  Implementation of the Class GovCT1
//  Created on:      07-fev-2014 11:43:53
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1F05EB39_C050_48be_8A7C_E2DA56C4E5AD__INCLUDED_)
#define EA_1F05EB39_C050_48be_8A7C_E2DA56C4E5AD__INCLUDED_

#include "lFloat.h"
#include "ActivePower.h"
#include "Boolean.h"
#include "Seconds.h"
#include "TurbineGovernor.h"

/**
 * General model for any prime mover with a PID governor, used primarily for
 * combustion turbine and combined cycle units.
 */
class GovCT1 : public TurbineGovernor
{

public:
	GovCT1();
	virtual ~GovCT1();
	/**
	 * Acceleration limiter setpoint
	 */
	Float aset;
	/**
	 * Speed governor dead band
	 */
	Float db;
	/**
	 * Speed sensitivity coefficient
	 */
	Float dm;
	/**
	 * Acceleration limiter gain
	 */
	Float ka;
	/**
	 * Governor derivative gain
	 */
	Float kdgov;
	/**
	 * Governor integral gain
	 */
	Float kigov;
	/**
	 * Load limiter integral gain for PI controller
	 */
	Float kiload;
	/**
	 * Power controller (reset) gain
	 */
	Float kimw;
	/**
	 * Governor proportional gain
	 */
	Float kpgov;
	/**
	 * Load limiter proportional gain for PI controller
	 */
	Float kpload;
	/**
	 * Turbine gain  (>0.)
	 */
	Float kturb;
	/**
	 * Load limiter reference value
	 */
	Float ldref;
	/**
	 * Maximum value for speed error signal
	 */
	Float maxerr;
	/**
	 * Minimum value for speed error signal
	 */
	Float minerr;
	/**
	 * Base for power values (> 0.)
	 */
	ActivePower mwbase;
	/**
	 * Power controller setpoint
	 */
	ActivePower pmwset;
	/**
	 * Permanent droop
	 */
	Float r;
	/**
	 * Minimum valve closing rate
	 */
	Float rclose;
	/**
	 * Maximum rate of load limit decrease
	 */
	Float rdown;
	/**
	 * Maximum valve opening rate
	 */
	Float ropen;
	/**
	 * Feedback signal for droop
	 * = 1 electrical power
	 * = 0 none (isochronous governor)
	 * = -1 fuel valve stroke ( true stroke)
	 * = -2 governor output ( requested stroke)
	 */
	Boolean rselect;
	/**
	 * Maximum rate of load limit increase
	 */
	Float rup;
	/**
	 * Acceleration limiter time constant (>0.)
	 */
	Seconds ta;
	/**
	 * Actuator time constant
	 */
	Seconds tact;
	/**
	 * Turbine lag time constant, sec.  (>0.)
	 */
	Seconds tb;
	/**
	 * Turbine lead time constant, sec.
	 */
	Seconds tc;
	/**
	 * Governor derivative controller time constant
	 */
	Seconds tdgov;
	/**
	 * Transport time delay for diesel engine
	 */
	Seconds teng;
	/**
	 * Load Limiter time constant (>0.)
	 */
	Seconds tfload;
	/**
	 * Electrical power transducer time constant, sec. (>0.)
	 */
	Seconds tpelec;
	/**
	 * Temperature detection lead time constant
	 */
	Seconds tsa;
	/**
	 * Temperature detection lag time constant
	 */
	Seconds tsb;
	/**
	 * Maximum valve position limit
	 */
	Float vmax;
	/**
	 * Minimum valve position limit
	 */
	Float vmin;
	/**
	 * No load fuel flow
	 */
	Float wfnl;
	/**
	 * Switch for fuel source characteristic
	 * = 0 for fuel flow independent of speed
	 * = 1 fuel flow proportional to speed
	 */
	Boolean wfspd;

};
#endif // !defined(EA_1F05EB39_C050_48be_8A7C_E2DA56C4E5AD__INCLUDED_)
