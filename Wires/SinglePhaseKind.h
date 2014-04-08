///////////////////////////////////////////////////////////
//  SinglePhaseKind.h
//  Implementation of the Class SinglePhaseKind
//  Created on:      07-fev-2014 11:44:24
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_F861A8C1_52A9_43f4_8F1E_82619EC99431__INCLUDED_)
#define EA_F861A8C1_52A9_43f4_8F1E_82619EC99431__INCLUDED_

/**
 * Enumeration of single phase identifiers. Allows designation of single phases
 * for both transmission and distribution equipment, circuits and loads.
 */
enum SinglePhaseKind
{
	/**
	 * Phase A.
	 */
	A,
	/**
	 * Phase B.
	 */
	B,
	/**
	 * Phase C.
	 */
	C,
	/**
	 * Neutral.
	 */
	N,
	/**
	 * Secondary phase 1.
	 */
	s1,
	/**
	 * Secondary phase 2.
	 */
	s2
};
#endif // !defined(EA_F861A8C1_52A9_43f4_8F1E_82619EC99431__INCLUDED_)
