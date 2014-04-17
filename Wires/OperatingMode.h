///////////////////////////////////////////////////////////
//  OperatingMode.h
//  Implementation of the Class OperatingMode
//  Created on:      07-fev-2014 11:44:11
///////////////////////////////////////////////////////////

#if !defined(EA_5A57460D_A326_46d8_851C_C01A3F1B5F27__INCLUDED_)
#define EA_5A57460D_A326_46d8_851C_C01A3F1B5F27__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "lString.h"

/**
 * Textual name for an operating mode.
 */
class OperatingMode
{

public:
	OperatingMode();
	virtual ~OperatingMode();
	UnitMultiplier multipplier;
	UnitSymbol unit;
	String value;

};
#endif // !defined(EA_5A57460D_A326_46d8_851C_C01A3F1B5F27__INCLUDED_)
