///////////////////////////////////////////////////////////
//  SubGeographicalRegion.h
//  Implementation of the Class SubGeographicalRegion
//  Created on:      07-fev-2014 11:44:27
///////////////////////////////////////////////////////////

#if !defined(EA_58916675_30A4_4f3a_A7FE_4C447DCBEAE6__INCLUDED_)
#define EA_58916675_30A4_4f3a_A7FE_4C447DCBEAE6__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"

#include "Substation.h"
#include "Line.h"

/**
 * A subset of a geographical region of a power system network model.
 */
class SubGeographicalRegion : public IdentifiedObject
{

public:
	SubGeographicalRegion();
	virtual ~SubGeographicalRegion();

	/**
	 * The substations in this sub-geographical region.
	 */
    QList<Substation> substations;

	/**
	 * The lines within the sub-geographical region.
	 */
    QList<Line> lines;
};
#endif // !defined(EA_58916675_30A4_4f3a_A7FE_4C447DCBEAE6__INCLUDED_)
