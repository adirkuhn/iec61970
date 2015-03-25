///////////////////////////////////////////////////////////
//  Curve.h
//  Implementation of the Class Curve
//  Created on:      07-fev-2014 11:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_A825D8F9_4670_4d39_87A1_632D7C7127A7__INCLUDED_)
#define EA_A825D8F9_4670_4d39_87A1_632D7C7127A7__INCLUDED_

#include "CurveStyle.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "CurveData.h"
#include "IdentifiedObject.h"

/**
 * A multi-purpose curve or functional relationship between an independent
 * variable (X-axis) and dependent (Y-axis) variables. 
 */
class Curve : public IdentifiedObject
{

public:
	Curve();
	virtual ~Curve();
	/**
	 * The style or shape of the curve.
	 */
	CurveStyle curveStyle;
	/**
	 * Multiplier for X-axis.
	 */
	UnitMultiplier xMultiplier;
	/**
	 * The X-axis units of measure.
	 */
	UnitSymbol xUnit;
	/**
	 * Multiplier for Y1-axis.
	 */
	UnitMultiplier y1Multiplier;
	/**
	 * The Y1-axis units of measure.
	 */
	UnitSymbol y1Unit;
	/**
	 * Multiplier for Y2-axis.
	 */
	UnitMultiplier y2Multiplier;
	/**
	 * The Y2-axis units of measure.
	 */
	UnitSymbol y2Unit;
	/**
	 * Multiplier for Y3-axis.
	 */
	UnitMultiplier y3Multiplier;
	/**
	 * The Y3-axis units of measure.
	 */
	UnitSymbol y3Unit;
	/**
	 * The point data values that define this curve.
	 */
	QList<CurveData> *CurveDatas;

};
#endif // !defined(EA_A825D8F9_4670_4d39_87A1_632D7C7127A7__INCLUDED_)
