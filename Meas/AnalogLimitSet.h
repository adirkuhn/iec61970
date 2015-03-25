///////////////////////////////////////////////////////////
//  AnalogLimitSet.h
//  Implementation of the Class AnalogLimitSet
//  Created on:      07-fev-2014 11:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_126027B5_76E9_4a9f_B2E3_E96679A65032__INCLUDED_)
#define EA_126027B5_76E9_4a9f_B2E3_E96679A65032__INCLUDED_

#include "LimitSet.h"
#include "AnalogLimit.h"

/**
 * An AnalogLimitSet specifies a set of Limits that are associated with an Analog
 * measurement.
 */
class AnalogLimitSet : public LimitSet
{

public:
	AnalogLimitSet();
	virtual ~AnalogLimitSet();
	/**
	 * The limit values used for supervision of Measurements.
	 */
	QList<AnalogLimit> *Limits;

};
#endif // !defined(EA_126027B5_76E9_4a9f_B2E3_E96679A65032__INCLUDED_)
