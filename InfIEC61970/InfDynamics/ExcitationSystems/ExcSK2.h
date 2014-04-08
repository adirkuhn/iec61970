///////////////////////////////////////////////////////////
//  ExcSK2.h
//  Implementation of the Class ExcSK2
//  Created on:      07-fev-2014 11:43:48
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_8858F340_D5D5_4dc5_91A6_94CC30CF32C1__INCLUDED_)
#define EA_8858F340_D5D5_4dc5_91A6_94CC30CF32C1__INCLUDED_

#include "ExcitationSystem.h"

/**
 * Slovakian alternator-rectifier Excitation System Model (UEL, secondary voltage
 * control).
 */
class ExcSK2 : public ExcitationSystem
{

public:
	ExcSK2();
	virtual ~ExcSK2();

};
#endif // !defined(EA_8858F340_D5D5_4dc5_91A6_94CC30CF32C1__INCLUDED_)
