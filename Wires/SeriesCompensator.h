///////////////////////////////////////////////////////////
//  SeriesCompensator.h
//  Implementation of the Class SeriesCompensator
//  Created on:      07-fev-2014 11:44:24
///////////////////////////////////////////////////////////

#if !defined(EA_E71A2183_28BA_493d_8A86_03247F113DB5__INCLUDED_)
#define EA_E71A2183_28BA_493d_8A86_03247F113DB5__INCLUDED_

#include "Resistance.h"
#include "Reactance.h"
#include "ConductingEquipment.h"

/**
 * A Series Compensator is a series capacitor or reactor or an AC transmission
 * line without charging susceptance.  It is a two terminal device.
 */
class SeriesCompensator : public ConductingEquipment
{

public:
	SeriesCompensator();
	virtual ~SeriesCompensator();
	/**
	 * Positive sequence resistance.
	 */
	Resistance r;
	/**
	 * Zero sequence resistance.
	 */
	Resistance r0;
	/**
	 * Positive sequence reactance.
	 */
	Reactance x;
	/**
	 * Zero sequence reactance.
	 */
	Reactance x0;

};
#endif // !defined(EA_E71A2183_28BA_493d_8A86_03247F113DB5__INCLUDED_)
