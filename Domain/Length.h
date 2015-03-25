///////////////////////////////////////////////////////////
//  Length.h
//  Implementation of the Class Length
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_BE4E630C_8BAB_4964_BF97_D52D256BE7CB__INCLUDED_)
#define EA_BE4E630C_8BAB_4964_BF97_D52D256BE7CB__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "lFloat.h"

/**
 * Unit of length. Never negative.
 */
class Length
{

public:
	Length();
	virtual ~Length();
	UnitMultiplier multiplier;
	static const UnitSymbol unit;
	Float value;

};
#endif // !defined(EA_BE4E630C_8BAB_4964_BF97_D52D256BE7CB__INCLUDED_)
