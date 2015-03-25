///////////////////////////////////////////////////////////
//  AccumulatorLimitSet.h
//  Implementation of the Class AccumulatorLimitSet
//  Created on:      07-fev-2014 11:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_9493E037_85B8_48be_A250_7282DA89F20D__INCLUDED_)
#define EA_9493E037_85B8_48be_A250_7282DA89F20D__INCLUDED_

#include "AccumulatorLimit.h"
#include "LimitSet.h"

/**
 * An AccumulatorLimitSet specifies a set of Limits that are associated with an
 * Accumulator measurement.
 */
class AccumulatorLimitSet : public LimitSet
{

public:
	AccumulatorLimitSet();
	virtual ~AccumulatorLimitSet();
	/**
	 * The limit values used for supervision of Measurements.
	 */
	QList<AccumulatorLimit> *Limits;

};
#endif // !defined(EA_9493E037_85B8_48be_A250_7282DA89F20D__INCLUDED_)
