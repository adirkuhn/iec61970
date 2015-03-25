///////////////////////////////////////////////////////////
//  PowerSystemStabilizer.h
//  Implementation of the Class PowerSystemStabilizer
//  Created on:      07-fev-2014 11:44:15
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_95E71EBC_F4D8_4d0a_B81D_A986D3D4E0D3__INCLUDED_)
#define EA_95E71EBC_F4D8_4d0a_B81D_A986D3D4E0D3__INCLUDED_

#include "PowerSystemResource.h"

/**
 * A PSS provides an input (Vs) to the excitation system model to improve damping
 * of system oscillations.  A variety of input signals may be used depending on
 * the particular design. 
 */
class PowerSystemStabilizer : public PowerSystemResource
{

public:
	PowerSystemStabilizer();
	virtual ~PowerSystemStabilizer();

};
#endif // !defined(EA_95E71EBC_F4D8_4d0a_B81D_A986D3D4E0D3__INCLUDED_)
