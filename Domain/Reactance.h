///////////////////////////////////////////////////////////
//  Reactance.h
//  Implementation of the Class Reactance
//  Created on:      07-fev-2014 11:44:19
///////////////////////////////////////////////////////////

#if !defined(EA_79EFF346_DE43_4594_BDBC_801B80D1573A__INCLUDED_)
#define EA_79EFF346_DE43_4594_BDBC_801B80D1573A__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Reactance (imaginary part of impedance), at rated frequency.
 */
class Reactance
{

public:
	Reactance();
	virtual ~Reactance();

	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;
};
#endif // !defined(EA_79EFF346_DE43_4594_BDBC_801B80D1573A__INCLUDED_)
