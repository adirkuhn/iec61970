///////////////////////////////////////////////////////////
//  BasicIntervalSchedule.h
//  Implementation of the Class BasicIntervalSchedule
//  Created on:      07-fev-2014 11:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_CF96E004_62BB_43c2_8706_3066D661D9C7__INCLUDED_)
#define EA_CF96E004_62BB_43c2_8706_3066D661D9C7__INCLUDED_

#include "DateTime.h"
#include "UnitSymbol.h"
#include "UnitMultiplier.h"
#include "IdentifiedObject.h"

/**
 * Schedule of values at points in time.
 */
class BasicIntervalSchedule : public IdentifiedObject
{

public:
	BasicIntervalSchedule();
	virtual ~BasicIntervalSchedule();
	/**
	 * The time for the first time point.
	 */
	DateTime startTime;
	/**
	 * Value1 units of measure.
	 */
	UnitSymbol value1Unit;
	/**
	 * Multiplier for value1.
	 */
	UnitMultiplier value1Multiplier;
	/**
	 * Value2 units of measure.
	 */
	UnitSymbol value2Unit;
	/**
	 * Multiplier for value2.
	 */
	UnitMultiplier value2Multiplier;

};
#endif // !defined(EA_CF96E004_62BB_43c2_8706_3066D661D9C7__INCLUDED_)
