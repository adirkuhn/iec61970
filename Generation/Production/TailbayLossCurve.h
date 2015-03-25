///////////////////////////////////////////////////////////
//  TailbayLossCurve.h
//  Implementation of the Class TailbayLossCurve
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_C04D5900_1450_4755_8352_DC0379B485CA__INCLUDED_)
#define EA_C04D5900_1450_4755_8352_DC0379B485CA__INCLUDED_

#include "Curve.h"

/**
 * Relationship between tailbay head loss hight (y-axis) and the total discharge
 * into the power station's tailbay volume per time unit (x-axis) . There could be
 * more than one curve depending on the level of the tailbay reservoir or river
 * level.
 */
class TailbayLossCurve : public Curve
{

public:
	TailbayLossCurve();
	virtual ~TailbayLossCurve();

};
#endif // !defined(EA_C04D5900_1450_4755_8352_DC0379B485CA__INCLUDED_)
