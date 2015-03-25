///////////////////////////////////////////////////////////
//  SetPoint.h
//  Implementation of the Class SetPoint
//  Created on:      07-fev-2014 11:44:24
///////////////////////////////////////////////////////////

#if !defined(EA_FD946FDC_282C_4cd4_AF8F_DAF433FC5A0D__INCLUDED_)
#define EA_FD946FDC_282C_4cd4_AF8F_DAF433FC5A0D__INCLUDED_

#include "lFloat.h"
#include "Control.h"

/**
 * A SetPoint is an analog control used for supervisory control.
 */
class SetPoint : public Control
{

public:
	SetPoint();
	virtual ~SetPoint();
	/**
	 * Normal value range maximum for any of the Control.value. Used for scaling, e.g.
	 * in bar graphs.
	 */
	Float maxValue;
	/**
	 * Normal value range minimum for any of the Control.value. Used for scaling, e.g.
	 * in bar graphs.
	 */
	Float minValue;
	/**
	 * Normal value for Control.value e.g. used for percentage scaling.
	 */
	Float normalValue;
	/**
	 * The value representing the actuator output.
	 */
	Float value;

};
#endif // !defined(EA_FD946FDC_282C_4cd4_AF8F_DAF433FC5A0D__INCLUDED_)
