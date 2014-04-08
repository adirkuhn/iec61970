///////////////////////////////////////////////////////////
//  ControlType.h
//  Implementation of the Class ControlType
//  Created on:      07-fev-2014 11:43:36
///////////////////////////////////////////////////////////

#if !defined(EA_DE919CD3_D4F3_4138_A17B_B1122B9F89A7__INCLUDED_)
#define EA_DE919CD3_D4F3_4138_A17B_B1122B9F89A7__INCLUDED_

#include "Control.h"
#include "IdentifiedObject.h"

/**
 * Specifies the type of Control, e.g. BreakerOn/Off, GeneratorVoltageSetPoint,
 * TieLineFlow etc. The ControlType.name shall be unique among all specified types
 * and describe the type. The ControlType.aliasName is meant to be used for
 * localization.
 */
class ControlType : public IdentifiedObject
{

public:
	ControlType();
	virtual ~ControlType();
	/**
	 * The controls having the control type.
	 */
	QList<Control> *Controls;

};
#endif // !defined(EA_DE919CD3_D4F3_4138_A17B_B1122B9F89A7__INCLUDED_)
