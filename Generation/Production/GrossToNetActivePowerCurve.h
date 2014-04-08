///////////////////////////////////////////////////////////
//  GrossToNetActivePowerCurve.h
//  Implementation of the Class GrossToNetActivePowerCurve
//  Created on:      07-fev-2014 11:43:58
///////////////////////////////////////////////////////////

#if !defined(EA_CF2D62D6_776A_4144_8B30_796CB80ADA5A__INCLUDED_)
#define EA_CF2D62D6_776A_4144_8B30_796CB80ADA5A__INCLUDED_

#include "Curve.h"

/**
 * Relationship between the generating unit's gross active power output on the X-
 * axis (measured at the terminals of the machine(s)) and the generating unit's
 * net active power output on the Y-axis (based on utility-defined measurements at
 * the power station). Station service loads, when modeled, should be treated as
 * non-conforming bus loads. There may be more than one curve, depending on the
 * auxiliary equipment that is in service.
 */
class GrossToNetActivePowerCurve : public Curve
{

public:
	GrossToNetActivePowerCurve();
	virtual ~GrossToNetActivePowerCurve();

};
#endif // !defined(EA_CF2D62D6_776A_4144_8B30_796CB80ADA5A__INCLUDED_)
