///////////////////////////////////////////////////////////
//  PotentialTransformer.h
//  Implementation of the Class PotentialTransformer
//  Created on:      07-fev-2014 11:44:15
///////////////////////////////////////////////////////////

#if !defined(EA_0FADE36C_D6E4_4426_9ED0_280DCAADF906__INCLUDED_)
#define EA_0FADE36C_D6E4_4426_9ED0_280DCAADF906__INCLUDED_

#include "String.h"
#include "Float.h"
#include "Sensor.h"

/**
 * Instrument transformer (also known as Voltage Transformer) used to measure
 * electrical qualities of the circuit that is being protected and/or monitored.
 * Typically used as voltage transducer for the purpose of metering, protection,
 * or sometimes auxiliary substation supply. A typical secondary voltage rating
 * would be 120V.
 */
class PotentialTransformer : public Sensor
{

public:
	PotentialTransformer();
	virtual ~PotentialTransformer();
	/**
	 * PT accuracy classification.
	 */
	String accuracyClass;
	/**
	 * Nominal ratio between the primary and secondary voltage.
	 */
	Float nominalRatio;
	/**
	 * Potential transformer (PT) classification.
	 */
	String ptClass;

};
#endif // !defined(EA_0FADE36C_D6E4_4426_9ED0_280DCAADF906__INCLUDED_)
