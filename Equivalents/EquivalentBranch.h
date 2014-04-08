///////////////////////////////////////////////////////////
//  EquivalentBranch.h
//  Implementation of the Class EquivalentBranch
//  Created on:      07-fev-2014 11:43:43
///////////////////////////////////////////////////////////

#if !defined(EA_25C9B8AF_54CE_4d05_88ED_E897F7C48E9D__INCLUDED_)
#define EA_25C9B8AF_54CE_4d05_88ED_E897F7C48E9D__INCLUDED_

#include "Resistance.h"
#include "Reactance.h"
#include "EquivalentEquipment.h"

/**
 * The class represents equivalent branches.
 */
class EquivalentBranch : public EquivalentEquipment
{

public:
	EquivalentBranch();
	virtual ~EquivalentBranch();
	/**
	 * Positive sequence series resistance of the reduced branch.
	 */
	Resistance r;
	/**
	 * Positive sequence series reactance of the reduced branch.
	 */
	Reactance x;

};
#endif // !defined(EA_25C9B8AF_54CE_4d05_88ED_E897F7C48E9D__INCLUDED_)
