///////////////////////////////////////////////////////////
//  RealEnergy.h
//  Implementation of the Class RealEnergy
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_2615A629_77F9_46a3_9F50_F6494AC26E6E__INCLUDED_)
#define EA_2615A629_77F9_46a3_9F50_F6494AC26E6E__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Real electrical energy.
 */
class RealEnergy
{

public:
	RealEnergy();
	virtual ~RealEnergy();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_2615A629_77F9_46a3_9F50_F6494AC26E6E__INCLUDED_)
