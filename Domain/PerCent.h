///////////////////////////////////////////////////////////
//  PerCent.h
//  Implementation of the Class PerCent
//  Created on:      07-fev-2014 11:44:12
///////////////////////////////////////////////////////////

#if !defined(EA_8776124E_7A8F_4e10_A2F2_25280E34D294__INCLUDED_)
#define EA_8776124E_7A8F_4e10_A2F2_25280E34D294__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Percentage on a defined base.   For example, specify as 100 to indicate at the
 * defined base.
 */
class PerCent
{

public:
	PerCent();
	virtual ~PerCent();

	/**
	 * Normally 0 - 100 on a defined base
	 */
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
};
#endif // !defined(EA_8776124E_7A8F_4e10_A2F2_25280E34D294__INCLUDED_)
