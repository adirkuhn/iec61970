///////////////////////////////////////////////////////////
//  AccumulatorValue.h
//  Implementation of the Class AccumulatorValue
//  Created on:      07-fev-2014 11:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_51ED1C21_1FC1_447d_99C1_3C41F3D9E924__INCLUDED_)
#define EA_51ED1C21_1FC1_447d_99C1_3C41F3D9E924__INCLUDED_

#include "Integer.h"
#include "MeasurementValue.h"

/**
 * AccumulatorValue represents an accumulated (counted) MeasurementValue.
 */
class AccumulatorValue : public MeasurementValue
{

public:
	AccumulatorValue();
	virtual ~AccumulatorValue();
	/**
	 * The value to supervise. The value is positive.
	 */
	Integer value;

};
#endif // !defined(EA_51ED1C21_1FC1_447d_99C1_3C41F3D9E924__INCLUDED_)
