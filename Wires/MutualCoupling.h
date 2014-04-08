///////////////////////////////////////////////////////////
//  MutualCoupling.h
//  Implementation of the Class MutualCoupling
//  Created on:      07-fev-2014 11:44:10
///////////////////////////////////////////////////////////

#if !defined(EA_FCEF9C0B_B219_4549_A66D_7EB61C8A9A51__INCLUDED_)
#define EA_FCEF9C0B_B219_4549_A66D_7EB61C8A9A51__INCLUDED_

#include "Susceptance.h"
#include "Length.h"
#include "Conductance.h"
#include "Resistance.h"
#include "Reactance.h"
#include "IdentifiedObject.h"
#include "Terminal.h"

/**
 * This class represents the zero sequence line mutual coupling.
 */
class MutualCoupling : public IdentifiedObject
{

public:
	MutualCoupling();
	virtual ~MutualCoupling();
	/**
	 * Zero sequence mutual coupling shunt (charging) susceptance, uniformly
	 * distributed, of the entire line section.
	 */
	Susceptance b0ch;
	/**
	 * Distance to the start of the coupled region from the first line's terminal
	 * having sequence number equal to 1.
	 */
	Length distance11;
	/**
	 * Distance to the end of the coupled region from the first line's terminal with
	 * sequence number equal to 1.
	 */
	Length distance12;
	/**
	 * Distance to the start of coupled region from the second line's terminal with
	 * sequence number equal to 1.
	 */
	Length distance21;
	/**
	 * Distance to the end of coupled region from the second line's terminal with
	 * squence number equal to 1.
	 */
	Length distance22;
	/**
	 * Zero sequence mutual coupling shunt (charging) conductance, uniformly
	 * distributed, of the entire line section.
	 */
	Conductance g0ch;
	/**
	 * Zero sequence branch-to-branch mutual impedance coupling, resistance.
	 */
	Resistance r0;
	/**
	 * Zero sequence branch-to-branch mutual impedance coupling, reactance.
	 */
	Reactance x0;
	/**
	 * The starting terminal for the calculation of distances along the second branch
	 * of the mutual coupling.
	 */
	Terminal *Second_Terminal;
	/**
	 * The starting terminal for the calculation of distances along the first branch
	 * of the mutual coupling.  Normally MutualCoupling would only be used for
	 * terminals of AC line segments.  The first and second terminals of a mutual
	 * coupling should point to different AC line segments.
	 */
	Terminal *First_Terminal;

};
#endif // !defined(EA_FCEF9C0B_B219_4549_A66D_7EB61C8A9A51__INCLUDED_)
