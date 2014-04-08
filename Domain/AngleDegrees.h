///////////////////////////////////////////////////////////
//  AngleDegrees.h
//  Implementation of the Class AngleDegrees
//  Created on:      07-fev-2014 11:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_CEA2A5F2_C8A4_4c3f_85B6_2EB91A4202AF__INCLUDED_)
#define EA_CEA2A5F2_C8A4_4c3f_85B6_2EB91A4202AF__INCLUDED_

#include "Float.h"

#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Measurement of angle in degrees.
 */
class AngleDegrees
{

public:
	AngleDegrees();
	virtual ~AngleDegrees();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_CEA2A5F2_C8A4_4c3f_85B6_2EB91A4202AF__INCLUDED_)
