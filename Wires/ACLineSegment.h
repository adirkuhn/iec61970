///////////////////////////////////////////////////////////
//  ACLineSegment.h
//  Implementation of the Class ACLineSegment
//  Created on:      07-fev-2014 11:43:26
///////////////////////////////////////////////////////////

#if !defined(EA_9FC81051_4025_49dd_81EE_C6FCE5D9A362__INCLUDED_)
#define EA_9FC81051_4025_49dd_81EE_C6FCE5D9A362__INCLUDED_

#include "Susceptance.h"
#include "Conductance.h"
#include "Resistance.h"
#include "Reactance.h"
#include "Conductor.h"
#include "Clamp.h"

/**
 * A wire or combination of wires, with consistent electrical characteristics,
 * building a single electrical system, used to carry alternating current between
 * points in the power system.
 * For symmetrical, transposed 3ph lines, it is sufficient to use  attributes of
 * the line segment, which describe impedances and admittances for the entire
 * length of the segment.  Additionally impedances can be computed by using length
 * and associated per length impedances.
 */
class ACLineSegment : public Conductor
{

public:
	ACLineSegment();
	virtual ~ACLineSegment();
	/**
	 * Zero sequence shunt (charging) susceptance, uniformly distributed, of the
	 * entire line section.
	 */
	Susceptance b0ch;
	/**
	 * Positive sequence shunt (charging) susceptance, uniformly distributed, of the
	 * entire line section.  This value represents the full charging over the full
	 * length of the line.
	 */
	Susceptance bch;
	/**
	 * Zero sequence shunt (charging) conductance, uniformly distributed, of the
	 * entire line section.
	 */
	Conductance g0ch;
	/**
	 * Positive sequence shunt (charging) conductance, uniformly distributed, of the
	 * entire line section.
	 */
	Conductance gch;
	/**
	 * Positive sequence series resistance of the entire line section.
	 */
	Resistance r;
	/**
	 * Zero sequence series resistance of the entire line section.
	 */
	Resistance r0;
	/**
	 * Positive sequence series reactance of the entire line section.
	 */
	Reactance x;
	/**
	 * Zero sequence series reactance of the entire line section.
	 */
	Reactance x0;
	/**
	 * The clamps connected to the line segment.
	 */
    QList<Clamp> *Clamps;

};
#endif // !defined(EA_9FC81051_4025_49dd_81EE_C6FCE5D9A362__INCLUDED_)
