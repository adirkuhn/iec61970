///////////////////////////////////////////////////////////
//  CogenerationPlant.h
//  Implementation of the Class CogenerationPlant
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_CB9F5828_C1C1_4c27_B512_9907C1CFDED2__INCLUDED_)
#define EA_CB9F5828_C1C1_4c27_B512_9907C1CFDED2__INCLUDED_

#include "Float.h"
#include "ActivePower.h"
#include "PowerSystemResource.h"
#include "ThermalGeneratingUnit.h"
#include "SteamSendoutSchedule.h"

/**
 * A set of thermal generating units for the production of electrical energy and
 * process steam (usually from the output of the steam turbines). The steam
 * sendout is typically used for industrial purposes or for municipal heating and
 * cooling.
 */
class CogenerationPlant : public PowerSystemResource
{

public:
	CogenerationPlant();
	virtual ~CogenerationPlant();
	/**
	 * The high pressure steam sendout.
	 */
	Float cogenHPSendoutRating;
	/**
	 * The high pressure steam rating.
	 */
	Float cogenHPSteamRating;
	/**
	 * The low pressure steam sendout.
	 */
	Float cogenLPSendoutRating;
	/**
	 * The low pressure steam rating.
	 */
	Float cogenLPSteamRating;
	/**
	 * The rated output active power of the cogeneration plant.
	 */
	ActivePower ratedP;
	/**
	 * A thermal generating unit may be a member of a cogeneration plant.
	 */
	QList<ThermalGeneratingUnit> *ThermalGeneratingUnits;
	/**
	 * A cogeneration plant has a steam sendout schedule.
	 */
    SteamSendoutSchedule *steamSendoutSchedule;

};
#endif // !defined(EA_CB9F5828_C1C1_4c27_B512_9907C1CFDED2__INCLUDED_)
