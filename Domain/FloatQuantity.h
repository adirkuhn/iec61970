///////////////////////////////////////////////////////////
//  FloatQuantity.h
//  Implementation of the Class FloatQuantity
//  Created on:      07-fev-2014 11:43:50
///////////////////////////////////////////////////////////

#if !defined(EA_D0D3C245_53AB_4474_B98C_E3633F592E58__INCLUDED_)
#define EA_D0D3C245_53AB_4474_B98C_E3633F592E58__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Quantity with float value and associated unit information.
 */
class FloatQuantity
{

public:
	FloatQuantity();
	virtual ~FloatQuantity();
	Float value;
	UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_D0D3C245_53AB_4474_B98C_E3633F592E58__INCLUDED_)
