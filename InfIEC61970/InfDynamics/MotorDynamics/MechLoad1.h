///////////////////////////////////////////////////////////
//  MechLoad1.h
//  Implementation of the Class MechLoad1
//  Created on:      07-fev-2014 11:44:07
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_45600C5C_CAA1_4689_8300_36290AC7BADD__INCLUDED_)
#define EA_45600C5C_CAA1_4689_8300_36290AC7BADD__INCLUDED_

#include "lFloat.h"
#include "MechanicalLoad.h"

/**
 * Mechanical load model 1.
 */
class MechLoad1 : public MechanicalLoad
{

public:
	MechLoad1();
	virtual ~MechLoad1();
	/**
	 * Speed squared coefficient
	 */
	Float a;
	/**
	 * Speed squared coefficient
	 */
	Float b;
	/**
	 * Speed to the exponent coefficient
	 */
	Float d;
	/**
	 * Exponent
	 */
	Float e;

};
#endif // !defined(EA_45600C5C_CAA1_4689_8300_36290AC7BADD__INCLUDED_)
