///////////////////////////////////////////////////////////
//  MetaBlockSignal.h
//  Implementation of the Class MetaBlockSignal
//  Created on:      07-fev-2014 11:44:09
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_016476B1_2ED7_4260_9251_D1C1B615F9D3__INCLUDED_)
#define EA_016476B1_2ED7_4260_9251_D1C1B615F9D3__INCLUDED_

#include "MetaBlockInputReference.h"
#include "MetaBlockOutputReference.h"
#include "IdentifiedObject.h"

class MetaBlockSignal : public IdentifiedObject
{

public:
	MetaBlockSignal();
	virtual ~MetaBlockSignal();
	/**
	 * Meta block input reference.
	 */
	MetaBlockInputReference *From;
	/**
	 * Meta block output reference.
	 */
	MetaBlockOutputReference *To;

};
#endif // !defined(EA_016476B1_2ED7_4260_9251_D1C1B615F9D3__INCLUDED_)
