///////////////////////////////////////////////////////////
//  CurveStyle.h
//  Implementation of the Class CurveStyle
//  Created on:      07-fev-2014 11:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_1E414E4E_D0B1_4237_8002_2CE7E32629BC__INCLUDED_)
#define EA_1E414E4E_D0B1_4237_8002_2CE7E32629BC__INCLUDED_

/**
 * Style or shape of curve.
 */
enum CurveStyle
{
	/**
	 * The Y-axis values are assumed constant until the next curve point and prior to
	 * the first curve point.
	 */
	constantYValue,
	/**
	 * The Y-axis values are assumed to be a straight line between values.  Also known
	 * as linear interpolation.
	 */
	straightLineYValues,
	/**
	 * The Y-axis values are assumed to ramp between points.
	 */
	rampYValue,
	/**
	 * An unspecified formula is assumed to compute the Y-axis value between points.
	 */
	formula
};
#endif // !defined(EA_1E414E4E_D0B1_4237_8002_2CE7E32629BC__INCLUDED_)
