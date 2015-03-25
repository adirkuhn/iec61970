///////////////////////////////////////////////////////////
//  ReportingGroup.h
//  Implementation of the Class ReportingGroup
//  Created on:      07-fev-2014 11:44:22
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_CBBF8843_9C9E_4dbc_9989_CA665BBC8D21__INCLUDED_)
#define EA_CBBF8843_9C9E_4dbc_9989_CA665BBC8D21__INCLUDED_

#include "IdentifiedObject.h"
#include "PowerSystemResource.h"

/**
 * A reporting group is used for various ad-hoc groupings used for reporting.
 */
class ReportingGroup : public IdentifiedObject
{

public:
	ReportingGroup();
	virtual ~ReportingGroup();
	/**
	 * Power system resources which belong to this reporting group.
	 */
    QList<PowerSystemResource> *PowerSystemResources;

};
#endif // !defined(EA_CBBF8843_9C9E_4dbc_9989_CA665BBC8D21__INCLUDED_)
