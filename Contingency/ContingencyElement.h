///////////////////////////////////////////////////////////
//  ContingencyElement.h
//  Implementation of the Class ContingencyElement
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_FF491400_2A65_4f91_B7AA_8E2A82D6FFF3__INCLUDED_)
#define EA_FF491400_2A65_4f91_B7AA_8E2A82D6FFF3__INCLUDED_

#include "IdentifiedObject.h"

/**
 * An element of a system event to be studied by contingency analysis,
 * representing a change in status of a single piece of equipment. 
 */
class ContingencyElement : public IdentifiedObject
{

public:
	ContingencyElement();
	virtual ~ContingencyElement();

};
#endif // !defined(EA_FF491400_2A65_4f91_B7AA_8E2A82D6FFF3__INCLUDED_)
