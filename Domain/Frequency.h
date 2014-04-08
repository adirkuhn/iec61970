///////////////////////////////////////////////////////////
//  Frequency.h
//  Implementation of the Class Frequency
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_BEE2B189_7778_401f_BA91_8AFD7D69EE24__INCLUDED_)
#define EA_BEE2B189_7778_401f_BA91_8AFD7D69EE24__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Cycles per second.
 */
class Frequency
{

public:
	Frequency();
	virtual ~Frequency();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_BEE2B189_7778_401f_BA91_8AFD7D69EE24__INCLUDED_)
