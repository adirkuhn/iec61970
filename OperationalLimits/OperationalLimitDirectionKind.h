///////////////////////////////////////////////////////////
//  OperationalLimitDirectionKind.h
//  Implementation of the Class OperationalLimitDirectionKind
//  Created on:      07-fev-2014 11:44:12
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_061FFB11_B2CF_418e_B06D_CDDDC8A66FFA__INCLUDED_)
#define EA_061FFB11_B2CF_418e_B06D_CDDDC8A66FFA__INCLUDED_

/**
 * The direction of an operational limit.
 */
enum OperationalLimitDirectionKind
{
	/**
	 * The limit is a high limit.   If applied to a terminal flow, the positive
	 * direction is into the terminal.
	 */
	high,
	/**
	 * The limit is a low limit.   If applied to a terminal flow, the positive
	 * direction is into the terminal.
	 */
	low,
	/**
	 * If the absolute value of the monitored value is above the limit value, the
	 * limit is violated.  In effect, the limit is both a high limit and its negative
	 * a low limit.
	 */
	absoluteValue
};
#endif // !defined(EA_061FFB11_B2CF_418e_B06D_CDDDC8A66FFA__INCLUDED_)
