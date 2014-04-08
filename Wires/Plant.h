///////////////////////////////////////////////////////////
//  Plant.h
//  Implementation of the Class Plant
//  Created on:      07-fev-2014 11:44:14
///////////////////////////////////////////////////////////

#if !defined(EA_4BC0F3EB_767B_40a6_828A_E36F88DB4605__INCLUDED_)
#define EA_4BC0F3EB_767B_40a6_828A_E36F88DB4605__INCLUDED_

#include "EquipmentContainer.h"

/**
 * A Plant is a collection of equipment for purposes of generation.
 */
class Plant : public EquipmentContainer
{

public:
	Plant();
	virtual ~Plant();

};
#endif // !defined(EA_4BC0F3EB_767B_40a6_828A_E36F88DB4605__INCLUDED_)
