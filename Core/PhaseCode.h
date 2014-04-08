///////////////////////////////////////////////////////////
//  PhaseCode.h
//  Implementation of the Class PhaseCode
//  Created on:      07-fev-2014 11:44:13
///////////////////////////////////////////////////////////

#if !defined(EA_23CAE3FB_9348_4bb4_BD0D_EB37C2A87341__INCLUDED_)
#define EA_23CAE3FB_9348_4bb4_BD0D_EB37C2A87341__INCLUDED_

namespace PhaseCodeEnum
{
/**
 * Enumeration of phase identifiers. Allows designation of phases for both
 * transmission and distribution equipment, circuits and loads.
 * Residential and small commercial loads are often served from single-phase, or
 * split-phase, secondary circuits. For example of s12N, phases 1 and 2 refer to
 * hot wires that are 180 degrees out of phase, while N refers to the neutral wire.
 * Through single-phase transformer connections, these secondary circuits may be
 * served from one or two of the primary phases A, B, and C. For three-phase loads,
 * use the A, B, C phase codes instead of s12N.
 */
enum Type
{
	/**
	 * Phases A, B, C, and N.
	 */
	ABCN,
	/**
	 * Phases A, B, and C.
	 */
	ABC,
	/**
	 * Phases A, B, and neutral.
	 */
	ABN,
	/**
	 * Phases A, C and neutral.
	 */
	ACN,
	/**
	 * Phases B, C, and neutral.
	 */
	BCN,
	/**
	 * Phases A and B.
	 */
	AB,
	/**
	 * Phases A and C.
	 */
	AC,
	/**
	 * Phases B and C.
	 */
	BC,
	/**
	 * Phases A and neutral.
	 */
	AN,
	/**
	 * Phases B and neutral.
	 */
	BN,
	/**
	 * Phases C and neutral.
	 */
	CN,
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
	 * Neutral phase.
	 */
	N,
	/**
	 * Secondary phase 1 and neutral.
	 */
	s1N,
	/**
	 * Secondary phase 2 and neutral.
	 */
	s2N,
	/**
	 * Secondary phases 1, 2, and neutral.
	 */
	s12N,
	/**
	 * Secondary phase 1.
	 */
	s1,
	/**
	 * Secondary phase 2.
	 */
	s2,
	/**
	 * Secondary phase 1 and 2.
	 */
	s12
};
};

typedef enum PhaseCodeEnum::Type PhaseCode;

#endif // !defined(EA_23CAE3FB_9348_4bb4_BD0D_EB37C2A87341__INCLUDED_)
