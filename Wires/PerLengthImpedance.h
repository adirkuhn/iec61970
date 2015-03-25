///////////////////////////////////////////////////////////
//  PerLengthImpedance.h
//  Implementation of the Class PerLengthImpedance
//  Created on:      07-fev-2014 11:44:13
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_15FC64CA_255E_4e88_AA9E_6D7A45978194__INCLUDED_)
#define EA_15FC64CA_255E_4e88_AA9E_6D7A45978194__INCLUDED_

#include "ACLineSegment.h"
#include "IdentifiedObject.h"

/**
 * Common type for per-length impedance electrical catalogues.
 */
class PerLengthImpedance : public IdentifiedObject
{

public:
	PerLengthImpedance();
	virtual ~PerLengthImpedance();
	/**
	 * All line segments described by this per-length impedance.
	 */
	QList<ACLineSegment> *ACLineSegments;

};
#endif // !defined(EA_15FC64CA_255E_4e88_AA9E_6D7A45978194__INCLUDED_)
