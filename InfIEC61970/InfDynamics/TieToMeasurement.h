///////////////////////////////////////////////////////////
//  TieToMeasurement.h
//  Implementation of the Class TieToMeasurement
//  Created on:      07-fev-2014 11:44:32
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_95E15A11_93FA_4422_BB68_06A7416D41C9__INCLUDED_)
#define EA_95E15A11_93FA_4422_BB68_06A7416D41C9__INCLUDED_

#include "MetaBlockInput.h"
#include "Measurement.h"
#include "IdentifiedObject.h"

/**
 * Ties a block input to a specific state variable measurment.  Thus giving a unit
 * type, a location in the network (typically a terminal).   A specific value is
 * not given, just enough information to obtain the value from the model during a
 * solution. This has nothing to do with SCADA.
 */
class TieToMeasurement : public IdentifiedObject
{

public:
	TieToMeasurement();
	virtual ~TieToMeasurement();
	/**
	 * The identified block input to which this measurement applies.   Note this
	 * applies only to the external interface of blocks.
	 */
    MetaBlockInput *metaBlockInput;
	/**
	 * Measurement linkage for dyanmics.
	 */
    Measurement *measurement;

};
#endif // !defined(EA_95E15A11_93FA_4422_BB68_06A7416D41C9__INCLUDED_)
