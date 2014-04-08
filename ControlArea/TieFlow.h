///////////////////////////////////////////////////////////
//  TieFlow.h
//  Implementation of the Class TieFlow
//  Created on:      07-fev-2014 11:44:32
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_45576D04_0E63_4512_928A_3F87B86CA76A__INCLUDED_)
#define EA_45576D04_0E63_4512_928A_3F87B86CA76A__INCLUDED_

#include "Boolean.h"
#include "Terminal.h"
#include "AltTieMeas.h"

/**
 * A flow specification in terms of location and direction for a control area.
 */
class TieFlow
{

public:
	TieFlow();
	virtual ~TieFlow();
	/**
	 * The flow is positive into the terminal.  A flow is positive if it is an import
	 * into the control area.
	 */
	Boolean positiveFlowIn;
	/**
	 * The terminal to which this tie flow belongs.
	 */
    Terminal *terminal;
	/**
	 * The primary and alternate tie flow measurements associated with the tie flow.
	 */
    QList<AltTieMeas> *altTieMeas;

};
#endif // !defined(EA_45576D04_0E63_4512_928A_3F87B86CA76A__INCLUDED_)
