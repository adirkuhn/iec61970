///////////////////////////////////////////////////////////
//  BusbarSection.h
//  Implementation of the Class BusbarSection
//  Created on:      07-fev-2014 11:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_6A814496_352A_448d_9578_460FC2167B20__INCLUDED_)
#define EA_6A814496_352A_448d_9578_460FC2167B20__INCLUDED_

#include "VoltageControlZone.h"
#include "Connector.h"

/**
 * A conductor, or group of conductors, with negligible impedance, that serve to
 * connect other conducting equipment within a single substation.
 * Voltage measurements are typically obtained from VoltageTransformers that are
 * connected to busbar sections. A bus bar section may have many physical
 * terminals but for analysis is modelled with exactly one logical terminal.
 */
class BusbarSection : public Connector
{

public:
	BusbarSection();
	virtual ~BusbarSection();

	/**
	 * A VoltageControlZone is controlled by a designated BusbarSection.
	 */
    VoltageControlZone *voltageControlZone;
};
#endif // !defined(EA_6A814496_352A_448d_9578_460FC2167B20__INCLUDED_)
