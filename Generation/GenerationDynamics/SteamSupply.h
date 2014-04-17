///////////////////////////////////////////////////////////
//  SteamSupply.h
//  Implementation of the Class SteamSupply
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_FF914E75_5E39_406d_83BD_C867AD28F0D7__INCLUDED_)
#define EA_FF914E75_5E39_406d_83BD_C867AD28F0D7__INCLUDED_

#include "lFloat.h"
#include "PowerSystemResource.h"
#include "SteamTurbine.h"

/**
 * Steam supply for steam turbine.
 */
class SteamSupply : public PowerSystemResource
{

public:
	SteamSupply();
	virtual ~SteamSupply();
	/**
	 * Rating of steam supply.
	 */
	Float steamSupplyRating;
	/**
	 * Steam turbines may have steam supplied by a steam supply.
	 */
	QList<SteamTurbine> *SteamTurbines;

};
#endif // !defined(EA_FF914E75_5E39_406d_83BD_C867AD28F0D7__INCLUDED_)
