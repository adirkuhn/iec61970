///////////////////////////////////////////////////////////
//  ReactiveCapabilityCurve.h
//  Implementation of the Class ReactiveCapabilityCurve
//  Created on:      07-fev-2014 11:44:19
///////////////////////////////////////////////////////////

#if !defined(EA_5A8DC091_CC31_4d6b_838F_8373162E48E8__INCLUDED_)
#define EA_5A8DC091_CC31_4d6b_838F_8373162E48E8__INCLUDED_

#include "Temperature.h"
#include "Pressure.h"
#include "Curve.h"
#include "SynchronousMachine.h"

/**
 * Reactive power rating envelope versus the synchronous machine's active power,
 * in both the generating and motoring modes. For each active power value there is
 * a corresponding high and low reactive power limit  value. Typically there will
 * be a separate curve for each coolant condition, such as hydrogen pressure.  The
 * Y1 axis values represent reactive minimum and the Y2 axis values represent
 * reactive maximum.
 */
class ReactiveCapabilityCurve : public Curve
{

public:
	ReactiveCapabilityCurve();
	virtual ~ReactiveCapabilityCurve();
	/**
	 * The machine's coolant temperature (e.g., ambient air or stator circulating
	 * water).
	 */
	Temperature coolantTemperature;
	/**
	 * The hydrogen coolant pressure
	 */
	Pressure hydrogenPressure;
	/**
	 * Synchronous machines using this curve as default.
	 */
	QList<SynchronousMachine> *InitiallyUsedBySynchronousMachines;
	/**
	 * Synchronous machines using this curve.
	 */
	QList<SynchronousMachine> *SynchronousMachines;

};
#endif // !defined(EA_5A8DC091_CC31_4d6b_838F_8373162E48E8__INCLUDED_)
