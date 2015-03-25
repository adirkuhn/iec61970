///////////////////////////////////////////////////////////
//  Discrete.h
//  Implementation of the Class Discrete
//  Created on:      07-fev-2014 11:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_4BE6185C_EEF4_4aef_BE88_14511EC0F9CD__INCLUDED_)
#define EA_4BE6185C_EEF4_4aef_BE88_14511EC0F9CD__INCLUDED_

#include <QList>

#include "Integer.h"

#include "Command.h"
#include "Measurement.h"
#include "DiscreteValue.h"

/**
 * Discrete represents a discrete Measurement, i.e. a Measurement reprsenting
 * discrete values, e.g. a Breaker position.
 */
class Discrete : public Measurement
{

public:
	Discrete();
	virtual ~Discrete();

	/**
	 * Normal value range maximum for any of the MeasurementValue.values. Used for
	 * scaling, e.g. in bar graphs or of telemetered raw values.
	 */
	Integer maxValue;

	/**
	 * Normal value range minimum for any of the MeasurementValue.values. Used for
	 * scaling, e.g. in bar graphs or of telemetered raw values.
	 */
	Integer minValue;

    /**
	 * Normal measurement value, e.g., used for percentage calculations.
	 */
	Integer normalValue;

    /**
	 * The Control variable associated with the Measurement.
	 */
    Command *command;

    /**
	 * The values connected to this measurement.
	 */
    QList<DiscreteValue*> discreteValues;
};
#endif // !defined(EA_4BE6185C_EEF4_4aef_BE88_14511EC0F9CD__INCLUDED_)
