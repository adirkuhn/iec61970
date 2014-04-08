///////////////////////////////////////////////////////////
//  DiagramObjectStyle.h
//  Implementation of the Class DiagramObjectStyle
//  Created on:      07-fev-2014 11:43:40
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_D93195D6_9CD0_4ef0_9D85_2F7EE4BE8942__INCLUDED_)
#define EA_D93195D6_9CD0_4ef0_9D85_2F7EE4BE8942__INCLUDED_

#include "IdentifiedObject.h"

/**
 * A reference to a style used by the originating system for a diagram object.  A
 * diagram object style describes information such as line thickness, shape such
 * as circle or rectangle etc, and color.
 */
class DiagramObjectStyle : public IdentifiedObject
{

public:
	DiagramObjectStyle();
	virtual ~DiagramObjectStyle();

};
#endif // !defined(EA_D93195D6_9CD0_4ef0_9D85_2F7EE4BE8942__INCLUDED_)
