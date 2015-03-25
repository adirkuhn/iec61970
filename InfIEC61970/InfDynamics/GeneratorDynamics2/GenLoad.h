///////////////////////////////////////////////////////////
//  GenLoad.h
//  Implementation of the Class GenLoad
//  Created on:      07-fev-2014 11:43:52
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_6E906419_E08B_41b3_A401_9637C4A7207B__INCLUDED_)
#define EA_6E906419_E08B_41b3_A401_9637C4A7207B__INCLUDED_

#include "RegulatingCondEq.h"
#include "SynchronousMachine.h"

/**
 * Representation of a small generator as a negative load rather than a dynamic
 * generator model. This practice is also referred to as "netting" the generation
 * with the load, i.e. taking the net value of load minus generation as the new
 * load value.  For dynamic modeling purposes, each generator that does not have a
 * dynamic load model must have a genLoad record.
 */
class GenLoad : public RegulatingCondEq
{

public:
	GenLoad();
	virtual ~GenLoad();
	/**
	 * The synchronous machine.
	 */
    SynchronousMachine *synchronousMachine;

};
#endif // !defined(EA_6E906419_E08B_41b3_A401_9637C4A7207B__INCLUDED_)
