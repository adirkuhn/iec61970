///////////////////////////////////////////////////////////
//  PhaseTapChangerSymetrical.h
//  Implementation of the Class PhaseTapChangerSymetrical
//  Created on:      07-fev-2014 11:44:14
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_84F71B9F_1316_47b2_BCE0_2703042D2C01__INCLUDED_)
#define EA_84F71B9F_1316_47b2_BCE0_2703042D2C01__INCLUDED_

#include "PhaseTapChangerNonLinear.h"

/**
 * Describes a symmetrical phase shifting transformer tap model in which the
 * secondary side voltage magnitude is the same as at the primary side. The
 * difference voltage magnitude is the base in an equal-sided triangle where the
 * sides corresponds to the primary and secondary voltages. The phase angle
 * difference corresponds to the top angle and can be expressed as twice the
 * arctangent of half the total difference voltage.
 */
class PhaseTapChangerSymetrical : public PhaseTapChangerNonLinear
{

public:
	PhaseTapChangerSymetrical();
	virtual ~PhaseTapChangerSymetrical();

};
#endif // !defined(EA_84F71B9F_1316_47b2_BCE0_2703042D2C01__INCLUDED_)
