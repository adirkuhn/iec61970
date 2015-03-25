///////////////////////////////////////////////////////////
//  ACLineSegmentPhase.h
//  Implementation of the Class ACLineSegmentPhase
//  Created on:      07-fev-2014 11:43:26
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_7BBBFED0_EA75_449c_8DA7_7B75B21FD33D__INCLUDED_)
#define EA_7BBBFED0_EA75_449c_8DA7_7B75B21FD33D__INCLUDED_

#include "SinglePhaseKind.h"
#include "PowerSystemResource.h"
#include "ACLineSegment.h"

/**
 * Represents a single wire of an alternating current line segment.
 */
class ACLineSegmentPhase : public PowerSystemResource
{

public:
	ACLineSegmentPhase();
	virtual ~ACLineSegmentPhase();
	/**
	 * The phase connection of the wire at both ends.
	 */
	SinglePhaseKind phase;
	/**
	 * The line segment to which the phase belongs.
	 */
    ACLineSegment *acLineSegment;

};
#endif // !defined(EA_7BBBFED0_EA75_449c_8DA7_7B75B21FD33D__INCLUDED_)
