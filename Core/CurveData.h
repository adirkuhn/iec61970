///////////////////////////////////////////////////////////
//  CurveData.h
//  Implementation of the Class CurveData
//  Created on:      07-fev-2014 11:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_910D1443_0C02_4b47_873D_2D3C3641DA15__INCLUDED_)
#define EA_910D1443_0C02_4b47_873D_2D3C3641DA15__INCLUDED_

#include "Float.h"

/**
 * Multi-purpose data points for defining a curve.  The use of this generic class
 * is discouraged if a more specific class  can be used to specify the x and y
 * axis values along with their specific data types.
 */
class CurveData
{

public:
	CurveData();
	virtual ~CurveData();
	/**
	 * The data value of the X-axis variable,  depending on the X-axis units.
	 */
	Float xvalue;
	/**
	 * The data value of the  first Y-axis variable, depending on the Y-axis units.
	 */
	Float y1value;
	/**
	 * The data value of the second Y-axis variable (if present), depending on the Y-
	 * axis units.
	 */
	Float y2value;
	/**
	 * The data value of the third Y-axis variable (if present), depending on the Y-
	 * axis units.
	 */
	Float y3value;

};
#endif // !defined(EA_910D1443_0C02_4b47_873D_2D3C3641DA15__INCLUDED_)
