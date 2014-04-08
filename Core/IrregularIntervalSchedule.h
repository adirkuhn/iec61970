///////////////////////////////////////////////////////////
//  IrregularIntervalSchedule.h
//  Implementation of the Class IrregularIntervalSchedule
//  Created on:      07-fev-2014 11:44:03
///////////////////////////////////////////////////////////

#if !defined(EA_CED5270D_8BF3_4301_98C9_C5E01CEE3E65__INCLUDED_)
#define EA_CED5270D_8BF3_4301_98C9_C5E01CEE3E65__INCLUDED_

#include "BasicIntervalSchedule.h"
#include "IrregularTimePoint.h"

/**
 * The schedule has time points where the time between them varies.
 */
class IrregularIntervalSchedule : public BasicIntervalSchedule
{

public:
	IrregularIntervalSchedule();
	virtual ~IrregularIntervalSchedule();
	/**
	 * The point data values that define a curve.
	 */
	QList<IrregularTimePoint> *TimePoints;

};
#endif // !defined(EA_CED5270D_8BF3_4301_98C9_C5E01CEE3E65__INCLUDED_)
