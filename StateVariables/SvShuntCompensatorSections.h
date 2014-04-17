///////////////////////////////////////////////////////////
//  SvShuntCompensatorSections.h
//  Implementation of the Class SvShuntCompensatorSections
//  Created on:      07-fev-2014 11:44:28
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_47CE31EB_190B_4b48_8F0C_99B5CEE7D892__INCLUDED_)
#define EA_47CE31EB_190B_4b48_8F0C_99B5CEE7D892__INCLUDED_

#include "lFloat.h"
#include "ShuntCompensator.h"
#include "StateVariable.h"

/**
 * State variable for the number of sections in service for a shunt compensator.
 */
class SvShuntCompensatorSections : public StateVariable
{

public:
	SvShuntCompensatorSections();
	virtual ~SvShuntCompensatorSections();
	/**
	 * The number of sections in service as a continous variable. To get integer value
	 * scale with ShuntCompensator.bPerSection.
	 */
	Float sections;
	/**
	 * The shunt compensator for which the state applies.
	 */
    ShuntCompensator *shuntCompensator;

};
#endif // !defined(EA_47CE31EB_190B_4b48_8F0C_99B5CEE7D892__INCLUDED_)
