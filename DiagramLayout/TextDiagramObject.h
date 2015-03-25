///////////////////////////////////////////////////////////
//  TextDiagramObject.h
//  Implementation of the Class TextDiagramObject
//  Created on:      07-fev-2014 11:44:31
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_AB84F8B3_22D2_4098_83E5_53D5BDC48CDC__INCLUDED_)
#define EA_AB84F8B3_22D2_4098_83E5_53D5BDC48CDC__INCLUDED_

#include "lString.h"
#include "DiagramObject.h"

/**
 * A diagram object for placing free-text or text derived from an associated
 * domain object.
 */
class TextDiagramObject : public DiagramObject
{

public:
	TextDiagramObject();
	virtual ~TextDiagramObject();
	/**
	 * The text that is displayed by this text diagram object.
	 */
	String text;

};
#endif // !defined(EA_AB84F8B3_22D2_4098_83E5_53D5BDC48CDC__INCLUDED_)
