///////////////////////////////////////////////////////////
//  MetaBlockOutputReference.h
//  Implementation of the Class MetaBlockOutputReference
//  Created on:      07-fev-2014 11:44:08
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_23CC0102_65DC_49aa_B3FF_9E0E61DECB24__INCLUDED_)
#define EA_23CC0102_65DC_49aa_B3FF_9E0E61DECB24__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConnectable.h"

class MetaBlockOutputReference : public IdentifiedObject
{

public:
	MetaBlockOutputReference();
	virtual ~MetaBlockOutputReference();
	/**
	 * The meta block connectable of the meta block connectable for a standard control
	 * block.
	 */
	MetaBlockConnectable *StandardControlBlock_MetaBlockConnectable;
	/**
	 * Meta block connectable.
	 */
    MetaBlockConnectable *metaBlockConnectable;

};
#endif // !defined(EA_23CC0102_65DC_49aa_B3FF_9E0E61DECB24__INCLUDED_)
