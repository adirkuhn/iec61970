///////////////////////////////////////////////////////////
//  GenUnitOpCostCurve.h
//  Implementation of the Class GenUnitOpCostCurve
//  Created on:      07-fev-2014 11:43:53
///////////////////////////////////////////////////////////

#if !defined(EA_61184581_3975_456b_A471_30A505A730CB__INCLUDED_)
#define EA_61184581_3975_456b_A471_30A505A730CB__INCLUDED_

#include "Boolean.h"
#include "Curve.h"

/**
 * Relationship between unit operating cost (Y-axis) and unit output active power
 * (X-axis). The operating cost curve for thermal units is derived from heat input
 * and fuel costs. The operating cost curve for hydro units is derived from water
 * flow rates and equivalent water costs.
 */
class GenUnitOpCostCurve : public Curve
{

public:
	GenUnitOpCostCurve();
	virtual ~GenUnitOpCostCurve();
	/**
	 * Flag is set to true when output is expressed in net active power.
	 */
	Boolean isNetGrossP;

};
#endif // !defined(EA_61184581_3975_456b_A471_30A505A730CB__INCLUDED_)
