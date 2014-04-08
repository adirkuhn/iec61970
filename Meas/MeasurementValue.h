///////////////////////////////////////////////////////////
//  MeasurementValue.h
//  Implementation of the Class MeasurementValue
//  Created on:      07-fev-2014 11:44:06
///////////////////////////////////////////////////////////

#if !defined(EA_6345361B_CE92_43bb_918A_DB0FF3B23241__INCLUDED_)
#define EA_6345361B_CE92_43bb_918A_DB0FF3B23241__INCLUDED_

#include "DateTime.h"
#include "PerCent.h"
#include "RemoteSource.h"
#include "IdentifiedObject.h"
#include "MeasurementValueQuality.h"

/**
 * The current state for a measurement. A state value is an instance of a
 * measurement from a specific source. Measurements can be associated with many
 * state values, each representing a different source for the measurement.
 */
class MeasurementValue : public IdentifiedObject
{

public:
	MeasurementValue();
	virtual ~MeasurementValue();

	/**
	 * The time when the value was last updated
	 */
	DateTime timeStamp;

	/**
	 * The limit, expressed as a percentage of the sensor maximum, that errors will
	 * not exceed when the sensor is used under  reference conditions.
	 */
	PerCent sensorAccuracy;

	/**
	 * Link to the physical telemetered point associated with this measurement.
	 */
    RemoteSource *remoteSource;

    /**
	 * A MeasurementValue has a MeasurementValueQuality associated with it.
	 */
    MeasurementValueQuality *measurementValueQuality;
};
#endif // !defined(EA_6345361B_CE92_43bb_918A_DB0FF3B23241__INCLUDED_)
