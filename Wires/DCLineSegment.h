///////////////////////////////////////////////////////////
//  DCLineSegment.h
//  Implementation of the Class DCLineSegment
//  Created on:      07-fev-2014 11:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_605B23E1_CA69_4848_8414_BF30D3C95335__INCLUDED_)
#define EA_605B23E1_CA69_4848_8414_BF30D3C95335__INCLUDED_

#include "Inductance.h"
#include "Resistance.h"
#include "Conductor.h"

/**
 * A wire or combination of wires not insulated from one another, with consistent
 * electrical characteristics, used to carry direct current between points in the
 * DC region of the power system.
 */
class DCLineSegment : public Conductor
{

public:
	DCLineSegment();
	virtual ~DCLineSegment();
	/**
	 * Inductance of the DC line segment.
	 */
	Inductance dcSegmentInductance;
	/**
	 * Resistance of the DC line segment.
	 */
	Resistance dcSegmentResistance;

};
#endif // !defined(EA_605B23E1_CA69_4848_8414_BF30D3C95335__INCLUDED_)
