///////////////////////////////////////////////////////////
//  BusNameMarker.h
//  Implementation of the Class BusNameMarker
//  Created on:      07-fev-2014 11:43:31
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B35E66F8_89D1_45ab_96AC_5D9A5FE0C25D__INCLUDED_)
#define EA_B35E66F8_89D1_45ab_96AC_5D9A5FE0C25D__INCLUDED_

#include "IdentifiedObject.h"
#include "Terminal.h"
#include "ReportingGroup.h"

/**
 * Used to apply user standard names to topology buses. Typically used for
 * "bus/branch" case generation. Associated with one or more ConnectivityNodes
 * that are normally a part of the bus name.    The associated ConnectivityNodes
 * are to be connected by non-retained switches. For a ring bus station
 * configuration, all busbar connectivity nodes in the ring are typically
 * associated.   For a breaker and a half scheme, both busbars would be associated.
 *  For a ring bus, all busbars would be associated.  For a "straight" busbar
 * configuration, only the main connectivity node at the busbar would be
 * associated.  
 */
class BusNameMarker : public IdentifiedObject
{

public:
	BusNameMarker();
	virtual ~BusNameMarker();
	/**
	 * The terminals associated with this bus name marker.
	 */
    QList<Terminal> *Terminals;
	/**
	 * The reporting group to which this bus name marker belongs.
	 */
    ReportingGroup *reportingGroup;

};
#endif // !defined(EA_B35E66F8_89D1_45ab_96AC_5D9A5FE0C25D__INCLUDED_)
