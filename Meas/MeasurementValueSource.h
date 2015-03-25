///////////////////////////////////////////////////////////
//  MeasurementValueSource.h
//  Implementation of the Class MeasurementValueSource
//  Created on:      07-fev-2014 11:44:06
///////////////////////////////////////////////////////////

#if !defined(EA_38243BE4_A12B_445e_89A6_D080D5BDDC75__INCLUDED_)
#define EA_38243BE4_A12B_445e_89A6_D080D5BDDC75__INCLUDED_

#include <QList>

#include "MeasurementValue.h"
#include "IdentifiedObject.h"

/**
 * MeasurementValueSource describes the alternative sources updating a
 * MeasurementValue. User conventions for how to use the MeasurementValueSource
 * attributes are described in the introduction to IEC 61970-301.
 */
class MeasurementValueSource : public IdentifiedObject
{

public:
	MeasurementValueSource();
	virtual ~MeasurementValueSource();

	/**
	 * The MeasurementValues updated by the source.
	 */
    QList<MeasurementValue*> measurementValues;
};
#endif // !defined(EA_38243BE4_A12B_445e_89A6_D080D5BDDC75__INCLUDED_)
