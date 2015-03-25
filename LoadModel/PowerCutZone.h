///////////////////////////////////////////////////////////
//  PowerCutZone.h
//  Implementation of the Class PowerCutZone
//  Created on:      07-fev-2014 11:44:15
///////////////////////////////////////////////////////////

#if !defined(EA_73D0AAF1_45F8_4dec_876A_619807B6A51E__INCLUDED_)
#define EA_73D0AAF1_45F8_4dec_876A_619807B6A51E__INCLUDED_

#include "PerCent.h"
#include "EnergyConsumer.h"
#include "PowerSystemResource.h"

/**
 * An area or zone of the power system which is used for load shedding purposes.
 */
class PowerCutZone : public PowerSystemResource
{

public:
	PowerCutZone();
	virtual ~PowerCutZone();
	/**
	 * First level (amount) of load to cut as a percentage of total zone load.
	 */
	PerCent cutLevel1;
	/**
	 * Second level (amount) of load to cut as a percentage of total zone load.
	 */
	PerCent cutLevel2;
	/**
	 * Energy consumer is assigned to the power cut zone.
	 */
	QList<EnergyConsumer> *EnergyConsumers;

};
#endif // !defined(EA_73D0AAF1_45F8_4dec_876A_619807B6A51E__INCLUDED_)
