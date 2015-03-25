///////////////////////////////////////////////////////////
//  Disconnector.h
//  Implementation of the Class Disconnector
//  Created on:      07-fev-2014 11:43:40
///////////////////////////////////////////////////////////

#if !defined(EA_ED359462_BDDF_4934_9972_99CDE4251E21__INCLUDED_)
#define EA_ED359462_BDDF_4934_9972_99CDE4251E21__INCLUDED_

#include "Switch.h"

/**
 * A manually operated or motor operated mechanical switching device used for
 * changing the connections in a circuit, or for isolating a circuit or equipment
 * from a source of power. It is required to open or close circuits when
 * negligible current is broken or made. 
 */
class Disconnector : public Switch
{

public:
	Disconnector();
	virtual ~Disconnector();

};
#endif // !defined(EA_ED359462_BDDF_4934_9972_99CDE4251E21__INCLUDED_)
