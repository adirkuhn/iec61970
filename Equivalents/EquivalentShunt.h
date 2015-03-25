///////////////////////////////////////////////////////////
//  EquivalentShunt.h
//  Implementation of the Class EquivalentShunt
//  Created on:      07-fev-2014 11:43:43
///////////////////////////////////////////////////////////

#if !defined(EA_8F6D21B7_5541_4399_A30A_15758E5363E4__INCLUDED_)
#define EA_8F6D21B7_5541_4399_A30A_15758E5363E4__INCLUDED_

#include "Susceptance.h"
#include "Conductance.h"
#include "EquivalentEquipment.h"

/**
 * The class represents equivalent shunts.
 */
class EquivalentShunt : public EquivalentEquipment
{

public:
	EquivalentShunt();
	virtual ~EquivalentShunt();
	/**
	 * Positive sequence shunt susceptance.
	 */
	Susceptance b;
	/**
	 * Positive sequence shunt conductance.
	 */
	Conductance g;

};
#endif // !defined(EA_8F6D21B7_5541_4399_A30A_15758E5363E4__INCLUDED_)
