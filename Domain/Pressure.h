///////////////////////////////////////////////////////////
//  Pressure.h
//  Implementation of the Class Pressure
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_3A5EB1F4_A884_4b3d_97AC_D3E55D80D4AC__INCLUDED_)
#define EA_3A5EB1F4_A884_4b3d_97AC_D3E55D80D4AC__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Pressure in Pascal.
 */
class Pressure
{

public:
	Pressure();
	virtual ~Pressure();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_3A5EB1F4_A884_4b3d_97AC_D3E55D80D4AC__INCLUDED_)
