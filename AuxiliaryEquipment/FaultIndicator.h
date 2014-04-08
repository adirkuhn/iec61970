///////////////////////////////////////////////////////////
//  FaultIndicator.h
//  Implementation of the Class FaultIndicator
//  Created on:      07-fev-2014 11:43:50
///////////////////////////////////////////////////////////

#if !defined(EA_33B4D2A9_5F93_4d29_BDA8_63838B33F36C__INCLUDED_)
#define EA_33B4D2A9_5F93_4d29_BDA8_63838B33F36C__INCLUDED_

#include "AuxiliaryEquipment.h"

/**
 * A FaultIndicator is typically only an indicator (which may or may not be
 * remotely monitored), and not a piece of equipment that actually initiates a
 * protection event. It is used for FLISR (Fault Location, Isolation and
 * Restoration) purposes, assisting with the dispatch of crews to "most likely"
 * part of the network (i.e. assists with determining circuit section where the
 * fault most likely happened).
 */
class FaultIndicator : public AuxiliaryEquipment
{

public:
	FaultIndicator();
	virtual ~FaultIndicator();

};
#endif // !defined(EA_33B4D2A9_5F93_4d29_BDA8_63838B33F36C__INCLUDED_)
