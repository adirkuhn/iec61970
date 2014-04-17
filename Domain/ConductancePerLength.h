///////////////////////////////////////////////////////////
//  ConductancePerLength.h
//  Implementation of the Class ConductancePerLength
//  Created on:      07-fev-2014 11:43:34
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_2D3513CF_D763_4033_9B97_F66064963811__INCLUDED_)
#define EA_2D3513CF_D763_4033_9B97_F66064963811__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Real part of admittance per unit of length.
 */
class ConductancePerLength
{

public:
	ConductancePerLength();
	virtual ~ConductancePerLength();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;
	static const UnitSymbol denominatorUnit;
	static const UnitMultiplier denominatorMultiplier;

};
#endif // !defined(EA_2D3513CF_D763_4033_9B97_F66064963811__INCLUDED_)
