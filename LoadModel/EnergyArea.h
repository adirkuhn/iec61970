///////////////////////////////////////////////////////////
//  EnergyArea.h
//  Implementation of the Class EnergyArea
//  Created on:      07-fev-2014 11:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_AFBF0A5D_DC64_4fe2_B50D_D1EA38ED6ED4__INCLUDED_)
#define EA_AFBF0A5D_DC64_4fe2_B50D_D1EA38ED6ED4__INCLUDED_

#include "IdentifiedObject.h"

/**
 * The class describes an area having energy production or consumption.
 */
class EnergyArea : public IdentifiedObject
{

public:
	EnergyArea();
	virtual ~EnergyArea();

};
#endif // !defined(EA_AFBF0A5D_DC64_4fe2_B50D_D1EA38ED6ED4__INCLUDED_)
