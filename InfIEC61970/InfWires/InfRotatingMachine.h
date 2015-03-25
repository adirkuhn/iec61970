///////////////////////////////////////////////////////////
//  InfRotatingMachine.h
//  Implementation of the Class InfRotatingMachine
//  Created on:      07-fev-2014 11:44:02
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_C598D2C0_47C1_472c_B6CA_66AAB9E22F81__INCLUDED_)
#define EA_C598D2C0_47C1_472c_B6CA_66AAB9E22F81__INCLUDED_

#include "ParametersFormType.h"

/**
 * To hold the dynamics attributes on RotatingMachine that use an enumeration type
 * out of the informative dyanmics package.
 */
class InfRotatingMachine
{

public:
	InfRotatingMachine();
	virtual ~InfRotatingMachine();
	ParametersFormType parametersFormType;

};
#endif // !defined(EA_C598D2C0_47C1_472c_B6CA_66AAB9E22F81__INCLUDED_)
