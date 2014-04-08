///////////////////////////////////////////////////////////
//  SwitchPhase.h
//  Implementation of the Class SwitchPhase
//  Created on:      07-fev-2014 11:44:29
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_379DE757_56E8_4b8e_8ADB_368DFDE12CCA__INCLUDED_)
#define EA_379DE757_56E8_4b8e_8ADB_368DFDE12CCA__INCLUDED_

#include "Boolean.h"
#include "SinglePhaseKind.h"
#include "PowerSystemResource.h"

/**
 * Single phase of a multi-phase switch when its attributes might be different per
 * phase.
 */
class SwitchPhase : public PowerSystemResource
{

public:
	SwitchPhase();
	virtual ~SwitchPhase();
	/**
	 * Used in cases when no Measurement for the status value is present. If the
	 * SwitchPhase has a status measurement the Discrete.normalValue is expected to
	 * match with this value.
	 */
	Boolean normalOpen;
	/**
	 * Phase of this SwitchPhase on the side with terminal sequence number equal 1.
	 * Should be a phase contained in that terminal&rsquo;s phases attribute.
	 */
	SinglePhaseKind phaseSide1;
	/**
	 * Phase of this SwitchPhase on the side with terminal sequence number equal 2.
	 * Should be a phase contained in that terminal&rsquo;s Terminal.phases attribute.
	 */
	SinglePhaseKind phaseSide2;

};
#endif // !defined(EA_379DE757_56E8_4b8e_8ADB_368DFDE12CCA__INCLUDED_)
