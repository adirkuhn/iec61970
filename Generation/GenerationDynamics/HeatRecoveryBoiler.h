///////////////////////////////////////////////////////////
//  HeatRecoveryBoiler.h
//  Implementation of the Class HeatRecoveryBoiler
//  Created on:      07-fev-2014 11:43:59
///////////////////////////////////////////////////////////

#if !defined(EA_70E459DD_EC03_4dad_AF31_1C617FD90535__INCLUDED_)
#define EA_70E459DD_EC03_4dad_AF31_1C617FD90535__INCLUDED_

#include "lFloat.h"
#include "CombustionTurbine.h"
#include "FossilSteamSupply.h"

/**
 * The heat recovery system associated with combustion turbines in order to
 * produce steam for combined cycle plants.
 */
class HeatRecoveryBoiler : public FossilSteamSupply
{

public:
	HeatRecoveryBoiler();
	virtual ~HeatRecoveryBoiler();
	/**
	 * The steam supply rating in kilopounds per hour, if dual pressure boiler.
	 */
	Float steamSupplyRating2;
	/**
	 * A combustion turbine may have a heat recovery boiler for making steam.
	 */
	QList<CombustionTurbine> *CombustionTurbines;

};
#endif // !defined(EA_70E459DD_EC03_4dad_AF31_1C617FD90535__INCLUDED_)
