///////////////////////////////////////////////////////////
//  LimitSet.h
//  Implementation of the Class LimitSet
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_FE98520D_14AC_49e2_A237_1385D3479186__INCLUDED_)
#define EA_FE98520D_14AC_49e2_A237_1385D3479186__INCLUDED_

#include "Boolean.h"
#include "IdentifiedObject.h"

/**
 * Specifies a set of Limits that are associated with a Measurement. A Measurement
 * may have several LimitSets corresponding to seasonal or other changing
 * conditions. The condition is captured in the name and description attributes.
 * The same LimitSet may be used for several Measurements. In particular
 * percentage limits are used this way.
 */
class LimitSet : public IdentifiedObject
{

public:
	LimitSet();
	virtual ~LimitSet();
	/**
	 * Tells if the limit values are in percentage of normalValue or the specified
	 * Unit for Measurements and Controls.
	 */
	Boolean isPercentageLimits;

};
#endif // !defined(EA_FE98520D_14AC_49e2_A237_1385D3479186__INCLUDED_)
