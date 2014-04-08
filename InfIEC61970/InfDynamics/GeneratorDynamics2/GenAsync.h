///////////////////////////////////////////////////////////
//  GenAsync.h
//  Implementation of the Class GenAsync
//  Created on:      07-fev-2014 11:43:52
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_6BF7AB7F_402E_4d50_8603_AA15622B6585__INCLUDED_)
#define EA_6BF7AB7F_402E_4d50_8603_AA15622B6585__INCLUDED_

#include "AsynchronousMachine.h"

/**
 * An asynchronous (induction) generator with no external connection to the rotor
 * windings, e.g., squirrel-cage induction machine. 
 */
class GenAsync : public AsynchronousMachine
{

public:
	GenAsync();
	virtual ~GenAsync();

};
#endif // !defined(EA_6BF7AB7F_402E_4d50_8603_AA15622B6585__INCLUDED_)
