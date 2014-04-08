///////////////////////////////////////////////////////////
//  Displacement.h
//  Implementation of the Class Displacement
//  Created on:      07-fev-2014 11:43:41
//  Original author: LOO
///////////////////////////////////////////////////////////

#if !defined(EA_51B13536_494C_4a4b_8928_961F408DC041__INCLUDED_)
#define EA_51B13536_494C_4a4b_8928_961F408DC041__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Unit of displacement relative a reference position, hence can be negative.
 */
class Displacement
{

public:
	Displacement();
	virtual ~Displacement();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_51B13536_494C_4a4b_8928_961F408DC041__INCLUDED_)
