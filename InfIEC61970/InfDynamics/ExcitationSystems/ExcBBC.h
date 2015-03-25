///////////////////////////////////////////////////////////
//  ExcBBC.h
//  Implementation of the Class ExcBBC
//  Created on:      07-fev-2014 11:43:45
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_8FECD060_70BC_4b73_86CB_CD7E6862C7BE__INCLUDED_)
#define EA_8FECD060_70BC_4b73_86CB_CD7E6862C7BE__INCLUDED_

#include "ExcitationSystem.h"

/**
 * Static Excitation System Model with ABB regulator.
 */
class ExcBBC : public ExcitationSystem
{

public:
	ExcBBC();
	virtual ~ExcBBC();

};
#endif // !defined(EA_8FECD060_70BC_4b73_86CB_CD7E6862C7BE__INCLUDED_)
