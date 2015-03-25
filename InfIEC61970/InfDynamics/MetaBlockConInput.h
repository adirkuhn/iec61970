///////////////////////////////////////////////////////////
//  MetaBlockConInput.h
//  Implementation of the Class MetaBlockConInput
//  Created on:      07-fev-2014 11:44:07
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_7CFEA43F_5184_4a51_BB55_FF020CB3349C__INCLUDED_)
#define EA_7CFEA43F_5184_4a51_BB55_FF020CB3349C__INCLUDED_

#include "IdentifiedObject.h"

/**
 * If model the association to MeasurementType, the it means take the input from
 * the associated PSR or Terminal in the static model.
 */
class MetaBlockConInput : public IdentifiedObject
{

public:
	MetaBlockConInput();
	virtual ~MetaBlockConInput();

};
#endif // !defined(EA_7CFEA43F_5184_4a51_BB55_FF020CB3349C__INCLUDED_)
