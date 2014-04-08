///////////////////////////////////////////////////////////
//  ControlAreaGeneratingUnit.h
//  Implementation of the Class ControlAreaGeneratingUnit
//  Created on:      07-fev-2014 11:43:36
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B105D38C_679C_4bd9_B783_2DE105694E5A__INCLUDED_)
#define EA_B105D38C_679C_4bd9_B783_2DE105694E5A__INCLUDED_

#include "GeneratingUnit.h"
#include "AltGeneratingUnitMeas.h"

/**
 * A control area generating unit. This class is needed so that alternate control
 * area definitions may include the same generating unit.   Note only one instance
 * within a control area should reference a specific generating unit.
 */
class ControlAreaGeneratingUnit
{

public:
	ControlAreaGeneratingUnit();
	virtual ~ControlAreaGeneratingUnit();
	/**
	 * The generating unit specified for this control area.  Note that a control area
	 * should include a GeneratingUnit only once.
	 */
    GeneratingUnit *generatingUnit;
	/**
	 * The link to prioritized measurements for this GeneratingUnit.
	 */
    QList<AltGeneratingUnitMeas> *altGeneratingUnitMeas;

};
#endif // !defined(EA_B105D38C_679C_4bd9_B783_2DE105694E5A__INCLUDED_)
