///////////////////////////////////////////////////////////
//  EquivalentInjection.h
//  Implementation of the Class EquivalentInjection
//  Created on:      07-fev-2014 11:43:43
//  Original author: KLH
///////////////////////////////////////////////////////////

#if !defined(EA_B7AD9CC2_C474_4b1e_8AEB_B97A990971F6__INCLUDED_)
#define EA_B7AD9CC2_C474_4b1e_8AEB_B97A990971F6__INCLUDED_

#include "ActivePower.h"
#include "Boolean.h"
#include "Voltage.h"
#include "EquivalentEquipment.h"

/**
 * This class represents equivalent injections (generation or load).  Voltage
 * regulation is allowed only at the point of connection.
 */
class EquivalentInjection : public EquivalentEquipment
{

public:
	EquivalentInjection();
	virtual ~EquivalentInjection();
	/**
	 * Minimum active power of the injection.
	 */
	ActivePower maxP;
	/**
	 * Maximum active power of the injection.
	 */
	ActivePower minP;
	/**
	 * Specifies whether or not the EquivalentInjection has the capability to regulate
	 * the local voltage.
	 */
	Boolean regulationCapability;
	/**
	 * Specifies the default regulation status of the EquivalentInjection.  True is
	 * regulating.  False is not regulating.
	 */
	Boolean regulationStatus;
	/**
	 * The target voltage for voltage regulation.
	 */
	Voltage regulationTarget;

};
#endif // !defined(EA_B7AD9CC2_C474_4b1e_8AEB_B97A990971F6__INCLUDED_)
