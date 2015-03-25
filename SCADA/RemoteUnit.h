///////////////////////////////////////////////////////////
//  RemoteUnit.h
//  Implementation of the Class RemoteUnit
//  Created on:      07-fev-2014 11:44:21
///////////////////////////////////////////////////////////

#if !defined(EA_01C9A474_BFF3_4600_BDB4_119862BD3C05__INCLUDED_)
#define EA_01C9A474_BFF3_4600_BDB4_119862BD3C05__INCLUDED_

#include "RemoteUnitType.h"
#include "PowerSystemResource.h"
#include "RemotePoint.h"

/**
 * A remote unit can be a RTU, IED, substation control system, control center etc.
 * The communication with the remote unit can be through various standard
 * protocols (e.g. IEC 61870, IEC 61850) or non standard protocols (e.g. DNP,
 * RP570 etc.). A remote unit contain remote data points that might be telemetered,
 * collected or calculated. The RemoteUnit class inherit PowerSystemResource. The
 * intention is to allow RemotUnits to have Measurements. These Measurements can
 * be used to model unit status as operational, out of service, unit failure etc.
 */
class RemoteUnit : public PowerSystemResource
{

public:
	RemoteUnit();
	virtual ~RemoteUnit();
	/**
	 * Type of remote unit.
	 */
	RemoteUnitType remoteUnitType;
	/**
	 * Remote points this Remote unit contains.
	 */
	QList<RemotePoint> *RemotePoints;

};
#endif // !defined(EA_01C9A474_BFF3_4600_BDB4_119862BD3C05__INCLUDED_)
