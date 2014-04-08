///////////////////////////////////////////////////////////
//  Volume.h
//  Implementation of the Class Volume
//  Created on:      07-fev-2014 11:44:36
///////////////////////////////////////////////////////////

#if !defined(EA_290D628C_6CB7_40b0_8E17_D94927B4251F__INCLUDED_)
#define EA_290D628C_6CB7_40b0_8E17_D94927B4251F__INCLUDED_

#include "Float.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Volume.
 */
class Volume
{

public:
	Volume();
	virtual ~Volume();
	Float value;
	static const UnitSymbol unit;
	UnitMultiplier multiplier;

};
#endif // !defined(EA_290D628C_6CB7_40b0_8E17_D94927B4251F__INCLUDED_)
