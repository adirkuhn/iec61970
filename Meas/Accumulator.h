///////////////////////////////////////////////////////////
//  Accumulator.h
//  Implementation of the Class Accumulator
//  Created on:      07-fev-2014 11:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_8DB70310_74CC_4cfd_B2D5_BE873AC5502C__INCLUDED_)
#define EA_8DB70310_74CC_4cfd_B2D5_BE873AC5502C__INCLUDED_

#include "Integer.h"
#include "AccumulatorValue.h"
#include "Measurement.h"
#include "AccumulatorLimitSet.h"

/**
 * Accumulator represents a accumulated (counted) Measurement, e.g. an energy
 * value.
 */
class Accumulator : public Measurement
{

public:
	Accumulator();
	virtual ~Accumulator();
	/**
	 * Normal value range maximum for any of the MeasurementValue.values. Used for
	 * scaling, e.g. in bar graphs or of telemetered raw values.
	 */
	Integer maxValue;
	/**
	 * The values connected to this measurement.
	 */
	QList<AccumulatorValue> *AccumulatorValues;
	/**
	 * A measurement may have zero or more limit ranges defined for it.
	 */
	QList<AccumulatorLimitSet> *LimitSets;

};
#endif // !defined(EA_8DB70310_74CC_4cfd_B2D5_BE873AC5502C__INCLUDED_)
