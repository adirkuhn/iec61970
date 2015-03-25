///////////////////////////////////////////////////////////
//  ExcSK.h
//  Implementation of the Class ExcSK
//  Created on:      07-fev-2014 11:43:48
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_C53F1C74_5730_487c_9739_807B068C153D__INCLUDED_)
#define EA_C53F1C74_5730_487c_9739_807B068C153D__INCLUDED_

#include "ExcitationSystem.h"

/**
 * Slovakian Excitation System Model (UEL, secondary voltage control).
 */
class ExcSK : public ExcitationSystem
{

public:
	ExcSK();
	virtual ~ExcSK();

};
#endif // !defined(EA_C53F1C74_5730_487c_9739_807B068C153D__INCLUDED_)
