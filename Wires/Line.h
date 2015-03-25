///////////////////////////////////////////////////////////
//  Line.h
//  Implementation of the Class Line
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_7FB5249E_09CF_48da_9107_3F6676465B71__INCLUDED_)
#define EA_7FB5249E_09CF_48da_9107_3F6676465B71__INCLUDED_

#include "EquipmentContainer.h"

/**
 * Contains equipment beyond a substation belonging to a power transmission line. 
 */
class Line : public EquipmentContainer
{

public:
	Line();
	virtual ~Line();

};
#endif // !defined(EA_7FB5249E_09CF_48da_9107_3F6676465B71__INCLUDED_)
