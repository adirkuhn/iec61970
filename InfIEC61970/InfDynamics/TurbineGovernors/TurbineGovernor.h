///////////////////////////////////////////////////////////
//  TurbineGovernor.h
//  Implementation of the Class TurbineGovernor
//  Created on:      07-fev-2014 11:44:34
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_A63F05BE_AA21_46e8_932F_67BAE781087A__INCLUDED_)
#define EA_A63F05BE_AA21_46e8_932F_67BAE781087A__INCLUDED_

#include "PowerSystemResource.h"

/**
 * The turbine-governor determines the mechanical power (Pm) supplied to the
 * generator model.
 */
class TurbineGovernor : public PowerSystemResource
{

public:
	TurbineGovernor();
	virtual ~TurbineGovernor();

};
#endif // !defined(EA_A63F05BE_AA21_46e8_932F_67BAE781087A__INCLUDED_)
