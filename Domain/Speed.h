///////////////////////////////////////////////////////////
//  Speed.h
//  Implementation of the Class Speed
//  Created on:      07-fev-2014 11:44:25
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_67A73A8B_B3D2_4f75_BFF4_14BF7AD27B87__INCLUDED_)
#define EA_67A73A8B_B3D2_4f75_BFF4_14BF7AD27B87__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Distance per unit of time.
 */
class Speed
{

public:
	Speed();
	virtual ~Speed();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_67A73A8B_B3D2_4f75_BFF4_14BF7AD27B87__INCLUDED_)
