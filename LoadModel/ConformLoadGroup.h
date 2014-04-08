///////////////////////////////////////////////////////////
//  ConformLoadGroup.h
//  Implementation of the Class ConformLoadGroup
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_2E3D67F2_920C_4da1_9C09_775E62C4B30D__INCLUDED_)
#define EA_2E3D67F2_920C_4da1_9C09_775E62C4B30D__INCLUDED_

#include "LoadGroup.h"
#include "ConformLoad.h"
#include "ConformLoadSchedule.h"

/**
 * A group of loads conforming to an allocation pattern. 
 */
class ConformLoadGroup : public LoadGroup
{

public:
	ConformLoadGroup();
	virtual ~ConformLoadGroup();
	/**
	 * Conform loads assigned to this ConformLoadGroup.
	 */
	QList<ConformLoad> *EnergyConsumers;
	/**
	 * The ConformLoadSchedules in the ConformLoadGroup.
	 */
	QList<ConformLoadSchedule> *ConformLoadSchedules;

};
#endif // !defined(EA_2E3D67F2_920C_4da1_9C09_775E62C4B30D__INCLUDED_)
