///////////////////////////////////////////////////////////
//  HydroGeneratingEfficiencyCurve.h
//  Implementation of the Class HydroGeneratingEfficiencyCurve
//  Created on:      07-fev-2014 11:44:00
///////////////////////////////////////////////////////////

#if !defined(EA_E684CA22_6B71_45d3_ABB4_15E3F3BE88F4__INCLUDED_)
#define EA_E684CA22_6B71_45d3_ABB4_15E3F3BE88F4__INCLUDED_

#include "Curve.h"

/**
 * Relationship between unit efficiency in percent and unit output active power
 * for a given net head in meters. The relationship between efficiency, discharge,
 * head, and power output is expressed as follows:   E =KP/HQ
 * Where:  (E=percentage)  (P=active power)  (H=height)  (Q=volume/time unit)
 * (K=constant)
 * For example, a curve instance for a given net head could relate efficiency (Y-
 * axis) versus active power output (X-axis) or versus discharge on the X-axis.
 */
class HydroGeneratingEfficiencyCurve : public Curve
{

public:
	HydroGeneratingEfficiencyCurve();
	virtual ~HydroGeneratingEfficiencyCurve();

};
#endif // !defined(EA_E684CA22_6B71_45d3_ABB4_15E3F3BE88F4__INCLUDED_)
