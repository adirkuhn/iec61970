///////////////////////////////////////////////////////////
//  CurrentFlow.h
//  Implementation of the Class CurrentFlow
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_D2FBD16B_7BA4_4a95_BFCD_259D5FA9925F__INCLUDED_)
#define EA_D2FBD16B_7BA4_4a95_BFCD_259D5FA9925F__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Electrical current with sign convention: positive flow is out of the conducting
 * equipment into the connectivity node.
 */
class CurrentFlow
{

public:
	CurrentFlow();
	virtual ~CurrentFlow();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_D2FBD16B_7BA4_4a95_BFCD_259D5FA9925F__INCLUDED_)
