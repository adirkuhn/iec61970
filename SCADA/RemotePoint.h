///////////////////////////////////////////////////////////
//  RemotePoint.h
//  Implementation of the Class RemotePoint
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_C9F07F97_B1D0_40d1_8369_703BEC83DC08__INCLUDED_)
#define EA_C9F07F97_B1D0_40d1_8369_703BEC83DC08__INCLUDED_

#include "IdentifiedObject.h"

/**
 * For a RTU remote points correspond to telemetered values or control outputs.
 * Other units (e.g. control centers) usually also contain calculated values.
 */
class RemotePoint : public IdentifiedObject
{

public:
	RemotePoint();
	virtual ~RemotePoint();

};
#endif // !defined(EA_C9F07F97_B1D0_40d1_8369_703BEC83DC08__INCLUDED_)
