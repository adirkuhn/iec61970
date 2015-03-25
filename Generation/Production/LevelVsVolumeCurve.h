///////////////////////////////////////////////////////////
//  LevelVsVolumeCurve.h
//  Implementation of the Class LevelVsVolumeCurve
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_A5B070E2_41B6_4aa6_837A_A98D05C4B58E__INCLUDED_)
#define EA_A5B070E2_41B6_4aa6_837A_A98D05C4B58E__INCLUDED_

#include "Curve.h"

/**
 * Relationship between reservoir volume and reservoir level. The  volume is at
 * the y-axis and the reservoir level at the x-axis.
 */
class LevelVsVolumeCurve : public Curve
{

public:
	LevelVsVolumeCurve();
	virtual ~LevelVsVolumeCurve();

};
#endif // !defined(EA_A5B070E2_41B6_4aa6_837A_A98D05C4B58E__INCLUDED_)
