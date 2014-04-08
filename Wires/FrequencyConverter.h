///////////////////////////////////////////////////////////
//  FrequencyConverter.h
//  Implementation of the Class FrequencyConverter
//  Created on:      07-fev-2014 11:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_D5BB031E_9D35_4249_BB55_3566AD723369__INCLUDED_)
#define EA_D5BB031E_9D35_4249_BB55_3566AD723369__INCLUDED_

#include "Frequency.h"
#include "ActivePower.h"
#include "Voltage.h"
#include "OperatingMode.h"
#include "RegulatingCondEq.h"

/**
 * A device to convert from one frequency to another (e.g., frequency F1 to F2)
 * comprises a pair of FrequencyConverter instances. One converts from F1 to DC,
 * the other converts the DC to F2.
 */
class FrequencyConverter : public RegulatingCondEq
{

public:
	FrequencyConverter();
	virtual ~FrequencyConverter();
	/**
	 * Frequency on the AC side.
	 */
	Frequency frequency;
	/**
	 * The maximum active power on the DC side at which the frequence converter should
	 * operate.
	 */
	ActivePower maxP;
	/**
	 * The maximum voltage on the DC side at which the frequency converter should
	 * operate.
	 */
	Voltage maxU;
	/**
	 * The minimum active power on the DC side at which the frequence converter should
	 * operate.
	 */
	ActivePower minP;
	/**
	 * The minimum voltage on the DC side at which the frequency converter should
	 * operate.
	 */
	Voltage minU;
	/**
	 * Operating mode for the frequency converter
	 */
	OperatingMode operatingMode;

};
#endif // !defined(EA_D5BB031E_9D35_4249_BB55_3566AD723369__INCLUDED_)
