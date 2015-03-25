///////////////////////////////////////////////////////////
//  CurrentTransformer.h
//  Implementation of the Class CurrentTransformer
//  Created on:      07-fev-2014 11:43:38
///////////////////////////////////////////////////////////

#if !defined(EA_E86A1D47_3AD4_4307_8F77_4E40CDB47192__INCLUDED_)
#define EA_E86A1D47_3AD4_4307_8F77_4E40CDB47192__INCLUDED_

#include "lString.h"
#include "PerCent.h"
#include "Integer.h"
#include "lFloat.h"
#include "Sensor.h"

/**
 * Instrument transformer used to measure electrical qualities of the circuit that
 * is being protected and/or monitored. Typically used as current transducer for
 * the purpose of metering or protection. A typical secondary current rating would
 * be 5A.
 */
class CurrentTransformer : public Sensor
{

public:
	CurrentTransformer();
	virtual ~CurrentTransformer();
	/**
	 * CT accuracy classification.
	 */
	String accuracyClass;
	/**
	 * Percent of rated current for which the CT remains accurate within specified
	 * limits.
	 */
	PerCent accuracyLimit;
	/**
	 * Number of cores.
	 */
	Integer coreCount;
	/**
	 * CT classification; i.e. class 10P.
	 */
	String ctClass;
	/**
	 * For multi-ratio CT's, the maximum permissable ratio attainable.
	 */
	Float maxRatio;
	/**
	 * Intended usage of the CT; i.e. metering, protection.
	 */
	String usage;

};
#endif // !defined(EA_E86A1D47_3AD4_4307_8F77_4E40CDB47192__INCLUDED_)
