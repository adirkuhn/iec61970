///////////////////////////////////////////////////////////
//  DiscreteValue.h
//  Implementation of the Class DiscreteValue
//  Created on:      07-fev-2014 11:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_BB333A1F_BED2_48c5_9317_9F9F7EB5B59F__INCLUDED_)
#define EA_BB333A1F_BED2_48c5_9317_9F9F7EB5B59F__INCLUDED_

#include "Integer.h"
#include "MeasurementValue.h"

/**
 * DiscreteValue represents a discrete MeasurementValue.
 */
class DiscreteValue : public MeasurementValue
{

public:
	DiscreteValue();
	virtual ~DiscreteValue();

	/**
	 * The value to supervise.
	 */
	Integer value;
};
#endif // !defined(EA_BB333A1F_BED2_48c5_9317_9F9F7EB5B59F__INCLUDED_)
