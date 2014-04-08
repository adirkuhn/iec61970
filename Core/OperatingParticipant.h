///////////////////////////////////////////////////////////
//  OperatingParticipant.h
//  Implementation of the Class OperatingParticipant
//  Created on:      07-fev-2014 11:44:11
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_E39721FC_0455_473b_8CB3_C918EC218F6B__INCLUDED_)
#define EA_E39721FC_0455_473b_8CB3_C918EC218F6B__INCLUDED_

#include "IdentifiedObject.h"

/**
 * An operator of multiple power system resource objects. Note multple operating
 * participants may operate the same power system resource object.   This can be
 * used for modeling jointly owned units where each owner operates as a
 * contractual share.
 */
class OperatingParticipant : public IdentifiedObject
{

public:
	OperatingParticipant();
	virtual ~OperatingParticipant();

};
#endif // !defined(EA_E39721FC_0455_473b_8CB3_C918EC218F6B__INCLUDED_)
