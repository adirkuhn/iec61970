///////////////////////////////////////////////////////////
//  VcompCross.h
//  Implementation of the Class VcompCross
//  Created on:      07-fev-2014 11:44:34
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_F892A496_F011_4e8a_A8E8_42DA97ADA6C5__INCLUDED_)
#define EA_F892A496_F011_4e8a_A8E8_42DA97ADA6C5__INCLUDED_

#include "Resistance.h"
#include "Reactance.h"
#include "VoltageCompensator.h"

/**
 * Voltage Compensation Model for Cross-Compound Generating Unit.
 */
class VcompCross : public VoltageCompensator
{

public:
	VcompCross();
	virtual ~VcompCross();
	/**
	 * Cross-Compensating (compounding) resistance
	 */
	Resistance rcomp2;
	/**
	 * Cross-Compensating (compounding) reactance
	 */
	Reactance xcomp2;

};
#endif // !defined(EA_F892A496_F011_4e8a_A8E8_42DA97ADA6C5__INCLUDED_)
