///////////////////////////////////////////////////////////
//  GeographicalRegion.h
//  Implementation of the Class GeographicalRegion
//  Created on:      07-fev-2014 11:43:53
///////////////////////////////////////////////////////////

#if !defined(EA_C03CC213_0E3D_4e5d_8CE7_7D66AF3BB7C7__INCLUDED_)
#define EA_C03CC213_0E3D_4e5d_8CE7_7D66AF3BB7C7__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"

#include "SubGeographicalRegion.h"

/**
 * A geographical region of a power system network model.
 */
class GeographicalRegion : public IdentifiedObject
{

public:
	GeographicalRegion();
	virtual ~GeographicalRegion();

	/**
	 * All sub-geograhpical regions within this geographical region.
	 */
    QList<SubGeographicalRegion> regions;
};
#endif // !defined(EA_C03CC213_0E3D_4e5d_8CE7_7D66AF3BB7C7__INCLUDED_)
