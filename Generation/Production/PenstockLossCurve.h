///////////////////////////////////////////////////////////
//  PenstockLossCurve.h
//  Implementation of the Class PenstockLossCurve
//  Created on:      07-fev-2014 11:44:12
///////////////////////////////////////////////////////////

#if !defined(EA_0D82E931_4F9A_4783_AA1B_2AF05DB06A29__INCLUDED_)
#define EA_0D82E931_4F9A_4783_AA1B_2AF05DB06A29__INCLUDED_

#include "Curve.h"

/**
 * Relationship between penstock head loss (in meters) and  total discharge
 * through the penstock (in cubic meters per second). One or more turbines may be
 * connected to the same penstock.
 */
class PenstockLossCurve : public Curve
{

public:
	PenstockLossCurve();
	virtual ~PenstockLossCurve();

};
#endif // !defined(EA_0D82E931_4F9A_4783_AA1B_2AF05DB06A29__INCLUDED_)
