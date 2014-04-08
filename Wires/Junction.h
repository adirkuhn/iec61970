///////////////////////////////////////////////////////////
//  Junction.h
//  Implementation of the Class Junction
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_63FA858C_E486_46a7_B612_068845DE57F5__INCLUDED_)
#define EA_63FA858C_E486_46a7_B612_068845DE57F5__INCLUDED_

#include "Connector.h"

/**
 * A point where one or more conducting equipments are connected with zero
 * resistance.
 */
class Junction : public Connector
{

public:
	Junction();
	virtual ~Junction();

};
#endif // !defined(EA_63FA858C_E486_46a7_B612_068845DE57F5__INCLUDED_)
