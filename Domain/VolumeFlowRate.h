///////////////////////////////////////////////////////////
//  VolumeFlowRate.h
//  Implementation of the Class VolumeFlowRate
//  Created on:      07-fev-2014 11:44:36
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_13737BBF_5CDB_4a49_8618_884BCB1A1D3F__INCLUDED_)
#define EA_13737BBF_5CDB_4a49_8618_884BCB1A1D3F__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "Float.h"

/**
 * Volume per time.
 */
class VolumeFlowRate
{

public:
	VolumeFlowRate();
	virtual ~VolumeFlowRate();
	static const UnitMultiplier denominatorMultiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol unit;
	Float value;

};
#endif // !defined(EA_13737BBF_5CDB_4a49_8618_884BCB1A1D3F__INCLUDED_)
