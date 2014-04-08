///////////////////////////////////////////////////////////
//  Cut.h
//  Implementation of the Class Cut
//  Created on:      07-fev-2014 11:43:38
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_4E2A9B44_B46C_4f9c_9500_B29170C992ED__INCLUDED_)
#define EA_4E2A9B44_B46C_4f9c_9500_B29170C992ED__INCLUDED_

#include "Length.h"
#include "Switch.h"
#include "ACLineSegment.h"

/**
 * A cut separates a line segment into two parts. The cut appears as a switch
 * inserted between these two parts and connects them together. As the cut is
 * normally open there is no galvanic connection between the two line segment
 * parts. But it is possible to close the cut to get galvanic connection.
 * The cut terminals are oriented towards the line segment terminals with the same
 * sequence number. Hence the cut terminal with sequence number equal to 1 is
 * oriented to the line segment's terminal with sequence number equal to 1.
 * The cut terminals also act as connection points for jumpers and other equipment,
 * e.g. a mobile generator. To enable this, connectivity nodes are placed at the
 * cut terminals. Once the connectivity nodes are in place any conducting
 * equipment can be connected at them.
 */
class Cut : public Switch
{

public:
	Cut();
	virtual ~Cut();
	/**
	 * The length to the place where the cut is located starting from side one of the
	 * cut line segment, i.e. the line segment Terminal with sequenceNumber equal to 1.
	 */
	Length lengthFromTerminal1;
	/**
	 * The line segment to which the cut is applied.
	 */
    ACLineSegment *acLineSegment;

};
#endif // !defined(EA_4E2A9B44_B46C_4f9c_9500_B29170C992ED__INCLUDED_)
