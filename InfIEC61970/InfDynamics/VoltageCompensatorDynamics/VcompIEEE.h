///////////////////////////////////////////////////////////
//  VcompIEEE.h
//  Implementation of the Class VcompIEEE
//  Created on:      07-fev-2014 11:44:35
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_87EC0CE2_E542_436a_A5E4_32EEE99D5DC0__INCLUDED_)
#define EA_87EC0CE2_E542_436a_A5E4_32EEE99D5DC0__INCLUDED_

#include "Resistance.h"
#include "Reactance.h"
#include "VoltageCompensator.h"

/**
 * IEEE Voltage Compensation Model.
 */
class VcompIEEE : public VoltageCompensator
{

public:
	VcompIEEE();
	virtual ~VcompIEEE();
	/**
	 * Compensating (compounding) resistance
	 */
	Resistance rcomp;
	/**
	 * Compensating (compounding) reactance
	 */
	Reactance xcomp;

};
#endif // !defined(EA_87EC0CE2_E542_436a_A5E4_32EEE99D5DC0__INCLUDED_)
