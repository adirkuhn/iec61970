///////////////////////////////////////////////////////////
//  Analog.h
//  Implementation of the Class Analog
//  Created on:      07-fev-2014 11:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_5FB49AC2_1FF0_411e_BEDC_6AB67F757395__INCLUDED_)
#define EA_5FB49AC2_1FF0_411e_BEDC_6AB67F757395__INCLUDED_

#include <QList>

#include "Float.h"
#include "Boolean.h"
#include "AnalogValue.h"
#include "Measurement.h"
#include "AnalogLimitSet.h"
#include "SetPoint.h"

/**
 * Analog represents an analog Measurement.
 */
class Analog : public Measurement
{

public:
	Analog();
	virtual ~Analog();

	/**
	 * Normal value range maximum for any of the MeasurementValue.values. Used for
	 * scaling, e.g. in bar graphs or of telemetered raw values.
	 */
	Float maxValue;

	/**
	 * Normal value range minimum for any of the MeasurementValue.values. Used for
	 * scaling, e.g. in bar graphs or of telemetered raw values.
	 */
	Float minValue;

	/**
	 * Normal measurement value, e.g., used for percentage calculations.
	 */
	Float normalValue;

	/**
	 * If true then this measurement is an active power, reactive power or current
	 * with the convention that a positive value measured at the Terminal means power
	 * is flowing into the related PowerSystemResource.
	 */
	Boolean positiveFlowIn;

	/**
	 * The values connected to this measurement.
	 */
    QList<AnalogValue*> analogValues;

	/**
	 * A measurement may have zero or more limit ranges defined for it.
	 */
    QList<AnalogLimitSet*> limitSets;

	/**
	 * The Control variable associated with the Measurement.
	 */
    SetPoint *setPoint;
};
#endif // !defined(EA_5FB49AC2_1FF0_411e_BEDC_6AB67F757395__INCLUDED_)
