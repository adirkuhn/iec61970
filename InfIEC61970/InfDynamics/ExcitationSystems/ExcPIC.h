///////////////////////////////////////////////////////////
//  ExcPIC.h
//  Implementation of the Class ExcPIC
//  Created on:      07-fev-2014 11:43:47
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_BE436F79_0C7E_41b8_89C1_01A3AB9BE087__INCLUDED_)
#define EA_BE436F79_0C7E_41b8_89C1_01A3AB9BE087__INCLUDED_

#include "ExcitationSystem.h"

/**
 * Excitation System Model with PI voltage regulator.
 */
class ExcPIC : public ExcitationSystem
{

public:
	ExcPIC();
	virtual ~ExcPIC();

};
#endif // !defined(EA_BE436F79_0C7E_41b8_89C1_01A3AB9BE087__INCLUDED_)
