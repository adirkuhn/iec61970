///////////////////////////////////////////////////////////
//  CombinedCyclePlant.h
//  Implementation of the Class CombinedCyclePlant
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_C9D45B19_D400_4db6_8AB9_4847D3D4E205__INCLUDED_)
#define EA_C9D45B19_D400_4db6_8AB9_4847D3D4E205__INCLUDED_

#include "ActivePower.h"
#include "PowerSystemResource.h"
#include "ThermalGeneratingUnit.h"

/**
 * A set of combustion turbines and steam turbines where the exhaust heat from the
 * combustion turbines is recovered to make steam for the steam turbines,
 * resulting in greater overall plant efficiency.
 */
class CombinedCyclePlant : public PowerSystemResource
{

public:
	CombinedCyclePlant();
	virtual ~CombinedCyclePlant();
	/**
	 * The combined cycle plant's active power output rating.
	 */
	ActivePower combCyclePlantRating;
	/**
	 * A thermal generating unit may be a member of a combined cycle plant.
	 */
	QList<ThermalGeneratingUnit> *ThermalGeneratingUnits;

};
#endif // !defined(EA_C9D45B19_D400_4db6_8AB9_4847D3D4E205__INCLUDED_)
