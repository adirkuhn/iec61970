///////////////////////////////////////////////////////////
//  PhaseShuntConnectionKind.h
//  Implementation of the Class PhaseShuntConnectionKind
//  Created on:      07-fev-2014 11:44:13
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_ECF96126_87F0_4114_849C_6C38449951E1__INCLUDED_)
#define EA_ECF96126_87F0_4114_849C_6C38449951E1__INCLUDED_

/**
 * The configuration of phase connections for a single terminal device such as a
 * load or capactitor.
 */
enum PhaseShuntConnectionKind
{
	/**
	 * Delta connection.
	 */
	D,
	/**
	 * Wye connection.
	 */
	Y,
	/**
	 * Wye, with neutral brought out for grounding.
	 */
	Yn,
	/**
	 * Independent winding, for single-phase connections.
	 */
	I
};
#endif // !defined(EA_ECF96126_87F0_4114_849C_6C38449951E1__INCLUDED_)
