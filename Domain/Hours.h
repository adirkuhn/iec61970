///////////////////////////////////////////////////////////
//  Hours.h
//  Implementation of the Class Hours
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_2CF87F42_D093_436c_B255_D62D650F5D3A__INCLUDED_)
#define EA_2CF87F42_D093_436c_B255_D62D650F5D3A__INCLUDED_

#include "lFloat.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"

/**
 * Time specified in hours.
 */
class Hours
{

public:
	Hours();
	virtual ~Hours();
	Float value;
	static const UnitSymbol unit;
	static const UnitMultiplier multiplier;

};
#endif // !defined(EA_2CF87F42_D093_436c_B255_D62D650F5D3A__INCLUDED_)
