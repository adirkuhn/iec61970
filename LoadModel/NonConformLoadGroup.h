///////////////////////////////////////////////////////////
//  NonConformLoadGroup.h
//  Implementation of the Class NonConformLoadGroup
//  Created on:      07-fev-2014 11:44:11
///////////////////////////////////////////////////////////

#if !defined(EA_4B468225_4339_4b90_AF40_E51BD3841A07__INCLUDED_)
#define EA_4B468225_4339_4b90_AF40_E51BD3841A07__INCLUDED_

#include "NonConformLoad.h"
#include "LoadGroup.h"
#include "NonConformLoadSchedule.h"

/**
 * Loads that do not follow a daily and seasonal load variation pattern.
 */
class NonConformLoadGroup : public LoadGroup
{

public:
	NonConformLoadGroup();
	virtual ~NonConformLoadGroup();
	/**
	 * Conform loads assigned to this ConformLoadGroup.
	 */
	QList<NonConformLoad> *EnergyConsumers;
	/**
	 * The NonConformLoadSchedules in the NonConformLoadGroup.
	 */
	QList<NonConformLoadSchedule> *NonConformLoadSchedules;

};
#endif // !defined(EA_4B468225_4339_4b90_AF40_E51BD3841A07__INCLUDED_)
