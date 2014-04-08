///////////////////////////////////////////////////////////
//  Clamp.h
//  Implementation of the Class Clamp
//  Created on:      07-fev-2014 11:43:32
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_81402A02_BE92_492b_A015_FE84B2459794__INCLUDED_)
#define EA_81402A02_BE92_492b_A015_FE84B2459794__INCLUDED_

#include "Length.h"
#include "ConductingEquipment.h"

/**
 * A Clamp is a galvanic connection at a line segment where other equipment is
 * connected. A Clamp does not cut the line segment.
 * A Clamp is ConductingEquipment and has one Terminal with an associated
 * ConnectivityNode. Any other ConductingEquipment can be connected to the Clamp
 * ConnectivityNode.
 */
class Clamp : public ConductingEquipment
{

public:
	Clamp();
	virtual ~Clamp();
	/**
	 * The length to the place where the clamp is located starting from side one of
	 * the line segment, i.e. the line segment terminal with sequence number equal to
	 * 1.
	 */
	Length lengthFromTerminal1;

};
#endif // !defined(EA_81402A02_BE92_492b_A015_FE84B2459794__INCLUDED_)
