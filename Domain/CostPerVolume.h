///////////////////////////////////////////////////////////
//  CostPerVolume.h
//  Implementation of the Class CostPerVolume
//  Created on:      07-fev-2014 11:43:37
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_DB4A3D67_4282_4b03_89BD_0EB46785ABA5__INCLUDED_)
#define EA_DB4A3D67_4282_4b03_89BD_0EB46785ABA5__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "Currency.h"
#include "Float.h"

/**
 * Cost per unit volume.
 */
class CostPerVolume
{

public:
	CostPerVolume();
	virtual ~CostPerVolume();
	static const UnitMultiplier denominatorMultiplier;
	static const UnitSymbol denominatorUnit;
	UnitMultiplier multiplier;
	Currency unit;
	Float value;

};
#endif // !defined(EA_DB4A3D67_4282_4b03_89BD_0EB46785ABA5__INCLUDED_)
