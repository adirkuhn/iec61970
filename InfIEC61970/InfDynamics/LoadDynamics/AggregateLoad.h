///////////////////////////////////////////////////////////
//  AggregateLoad.h
//  Implementation of the Class AggregateLoad
//  Created on:      07-fev-2014 11:43:27
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_40A444E3_ADB8_4c8e_9C1A_06B4FAF2506E__INCLUDED_)
#define EA_40A444E3_ADB8_4c8e_9C1A_06B4FAF2506E__INCLUDED_

#include "PowerSystemResource.h"
#include "EnergyConsumer.h"

/**
 * Aggregate loads are used to represent all or part of the real and reactive load
 * from a load in the static (power flow) data. This load is usually the
 * aggregation of many individual load devices. The load models are approximate
 * representation of the aggregate response of the load devices to system
 * disturbances.
 * 
 * Models of loads for dynamic analysis may themselves be either static or dynamic.
 * A static load model represents the sensitivity of the real and reactive power
 * consumed by the load to the amplitude and frequency of the bus voltage. A
 * dynamic load model can used to represent the aggregate response of the motor
 * components of the load.
 * 
 * Large industrial motors or groups of similar motors may be represented by
 * individual motor models (synchronous or asynchronous) which are usually
 * represented as generators with negative Pgen in the static (power flow) data.
 */
class AggregateLoad : public PowerSystemResource
{

public:
	AggregateLoad();
	virtual ~AggregateLoad();

	/**
	 * The energy consumers for this aggregate load.
	 */
    QList<EnergyConsumer> energyConsumers;
};
#endif // !defined(EA_40A444E3_ADB8_4c8e_9C1A_06B4FAF2506E__INCLUDED_)
