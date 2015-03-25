///////////////////////////////////////////////////////////
//  RegulatingCondEq.h
//  Implementation of the Class RegulatingCondEq
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_3B8D6AE9_57F1_4d9c_A203_55453B779DE0__INCLUDED_)
#define EA_3B8D6AE9_57F1_4d9c_A203_55453B779DE0__INCLUDED_

#include "RegulatingControl.h"
#include "ConductingEquipment.h"
#include "Control.h"

/**
 * A type of conducting equipment that can regulate a quanity (i.e. voltage or
 * flow) at a specific point in the network. 
 */
class RegulatingCondEq : public ConductingEquipment
{

public:
	RegulatingCondEq();
	virtual ~RegulatingCondEq();
	/**
	 * The regulating control scheme in which this equipment participates.
	 */
    RegulatingControl *pRegulatingControl;
	/**
	 * The controller outputs used to actually govern a regulating device, e.g. the
	 * magnetization of a synchronous machine or capacitor bank breaker actuator.
	 */
	QList<Control> *Controls;

};
#endif // !defined(EA_3B8D6AE9_57F1_4d9c_A203_55453B779DE0__INCLUDED_)
