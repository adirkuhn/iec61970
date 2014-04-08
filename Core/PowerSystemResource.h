///////////////////////////////////////////////////////////
//  PowerSystemResource.h
//  Implementation of the Class PowerSystemResource
//  Created on:      07-fev-2014 11:44:15
///////////////////////////////////////////////////////////

#if !defined(EA_B3C2E446_E046_4f55_9E2B_0B4EAF6686F7__INCLUDED_)
#define EA_B3C2E446_E046_4f55_9E2B_0B4EAF6686F7__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"

#include "PSRType.h"
#include "Measurement.h"

/**
 * A power system resource can be an item of equipment such as a switch, an
 * equipment container containing many individual items of equipment such as a
 * substation, or an organisational entity such as sub-control area. Power system
 * resources can have measurements associated.
 */
class PowerSystemResource : public IdentifiedObject
{

public:
	PowerSystemResource();
	virtual ~PowerSystemResource();

    /**
	 * Custom classification for this power system resource.
	 */
    PSRType *pPSRType;

	/**
	 * The measurements associated with this power system resource.
	 */
    QList<Measurement*> measurements;
};
#endif // !defined(EA_B3C2E446_E046_4f55_9E2B_0B4EAF6686F7__INCLUDED_)
