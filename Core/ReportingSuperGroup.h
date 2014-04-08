///////////////////////////////////////////////////////////
//  ReportingSuperGroup.h
//  Implementation of the Class ReportingSuperGroup
//  Created on:      07-fev-2014 11:44:22
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_03F12168_EF26_4538_B9C9_3DDFD25A2C64__INCLUDED_)
#define EA_03F12168_EF26_4538_B9C9_3DDFD25A2C64__INCLUDED_

#include "ReportingGroup.h"
#include "IdentifiedObject.h"

/**
 * A reporting super group, groups reporting groups for a higher level report.
 */
class ReportingSuperGroup : public IdentifiedObject
{

public:
	ReportingSuperGroup();
	virtual ~ReportingSuperGroup();
	/**
	 * Reporting groups that are grouped under this super group.
	 */
    QList<ReportingGroup> *ReportingGroups;

};
#endif // !defined(EA_03F12168_EF26_4538_B9C9_3DDFD25A2C64__INCLUDED_)
