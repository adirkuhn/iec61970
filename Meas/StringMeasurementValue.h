///////////////////////////////////////////////////////////
//  StringMeasurementValue.h
//  Implementation of the Class StringMeasurementValue
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_86645716_42E4_4013_9895_D62AF26C823B__INCLUDED_)
#define EA_86645716_42E4_4013_9895_D62AF26C823B__INCLUDED_

#include "String.h"
#include "MeasurementValue.h"
#include "StringMeasurement.h"

/**
 * StringMeasurementValue represents a measurement value of type string.
 */
class StringMeasurementValue : public MeasurementValue
{

public:
	StringMeasurementValue();
	virtual ~StringMeasurementValue();
	/**
	 * The value to supervise.
	 */
	String value;
	/**
	 * Measurement to which this value is connected.
	 */
    StringMeasurement *stringMeasurement;

};
#endif // !defined(EA_86645716_42E4_4013_9895_D62AF26C823B__INCLUDED_)
