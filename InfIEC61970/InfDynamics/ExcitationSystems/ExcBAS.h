///////////////////////////////////////////////////////////
//  ExcBAS.h
//  Implementation of the Class ExcBAS
//  Created on:      07-fev-2014 11:43:45
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_ABC6C903_1A2E_47a5_8DFA_D0A466FE7D7A__INCLUDED_)
#define EA_ABC6C903_1A2E_47a5_8DFA_D0A466FE7D7A__INCLUDED_

#include "ExcitationSystem.h"

/**
 * Basler static voltage regulator feeding dc or ac rotating exciter model
 */
class ExcBAS : public ExcitationSystem
{

public:
	ExcBAS();
	virtual ~ExcBAS();

};
#endif // !defined(EA_ABC6C903_1A2E_47a5_8DFA_D0A466FE7D7A__INCLUDED_)
