///////////////////////////////////////////////////////////
//  OrientationKind.h
//  Implementation of the Class OrientationKind
//  Created on:      07-fev-2014 11:44:12
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_339ECC42_5625_4abc_8FCB_D961125303BF__INCLUDED_)
#define EA_339ECC42_5625_4abc_8FCB_D961125303BF__INCLUDED_

/**
 * The orientation of the coordinate system with respect to top, left, and the
 * coordinate number system.
 */
enum OrientationKind
{
	/**
	 * For 2D diagrams, a positive orientation will result in X values increasing from
	 * left to right and Y values increasing from bottom to top.  This is also known
	 * as a right hand orientation.
	 */
	positive,
	/**
	 * For 2D diagrams, a negative orientation gives the left-hand orientation
	 * (favoured by computer graphics displays) with X values increasing from left to
	 * right and Y values increasing from top to bottom.   This is also known as a
	 * left hand orientation.
	 */
	negative
};
#endif // !defined(EA_339ECC42_5625_4abc_8FCB_D961125303BF__INCLUDED_)
