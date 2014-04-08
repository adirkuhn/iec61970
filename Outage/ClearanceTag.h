///////////////////////////////////////////////////////////
//  ClearanceTag.h
//  Implementation of the Class ClearanceTag
//  Created on:      07-fev-2014 11:43:32
///////////////////////////////////////////////////////////

#if !defined(EA_CD7F5284_C9E6_417b_911F_6B2B095A9904__INCLUDED_)
#define EA_CD7F5284_C9E6_417b_911F_6B2B095A9904__INCLUDED_

#include "String.h"
#include "Boolean.h"
#include "DateTime.h"
#include "IdentifiedObject.h"
#include "ConductingEquipment.h"
#include "ClearanceTagType.h"

/**
 * A clearance tag that is used to authorize and schedule work on conducting
 * equipment in the field. Tagged equipment is not available for commercial
 * service.
 */
class ClearanceTag : public IdentifiedObject
{

public:
	ClearanceTag();
	virtual ~ClearanceTag();
	/**
	 * The name of the person who is authorized to issue the tag.
	 */
	String authorityName;
	/**
	 * Set true if equipment must be deenergized.
	 */
	Boolean deenergizeReqFlag;
	/**
	 * Set true if equipment must be grounded.
	 */
	Boolean groundReqFlag;
	/**
	 * Set true if equipment phasing must be checked.
	 */
	Boolean phaseCheckReqFlag;
	/**
	 * The time at which the clearance tag was issued.
	 */
	DateTime tagIssueTime;
	/**
	 * Description of the work to be performed.
	 */
	String workDescription;
	/**
	 * The time at which the clearance tag is scheduled to be removed.
	 */
	DateTime workEndTime;
	/**
	 * The time at which the clearance tag is scheduled to be set.
	 */
	DateTime workStartTime;
	/**
	 * Conducting equipment of this clearance tags for authorized field work.
	 */
    ConductingEquipment *conductingEquipment;
	/**
	 * The type of tag, depending on the purpose of the work to be performed and/or
	 * the type of supervisory control allowed.
	 */
    ClearanceTagType *clearanceTagType;

};
#endif // !defined(EA_CD7F5284_C9E6_417b_911F_6B2B095A9904__INCLUDED_)
