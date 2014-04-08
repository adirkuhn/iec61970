///////////////////////////////////////////////////////////
//  ApparentPower.h
//  Implementation of the Class ApparentPower
//  Created on:      07-fev-2014 11:43:29
///////////////////////////////////////////////////////////

#if !defined(EA_E51EB054_A4A6_4ebf_A3AD_097E2778A262__INCLUDED_)
#define EA_E51EB054_A4A6_4ebf_A3AD_097E2778A262__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Product of the RMS value of the voltage and the RMS value of the current.
 */
class ApparentPower
{

public:
	ApparentPower();
	virtual ~ApparentPower();

	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
};
#endif // !defined(EA_E51EB054_A4A6_4ebf_A3AD_097E2778A262__INCLUDED_)
