///////////////////////////////////////////////////////////
//  MetaBlockStateReference.h
//  Implementation of the Class MetaBlockStateReference
//  Created on:      07-fev-2014 11:44:09
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_9E151509_072D_4364_9BB5_F1C575C03F28__INCLUDED_)
#define EA_9E151509_072D_4364_9BB5_F1C575C03F28__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConnectable.h"

class MetaBlockStateReference : public IdentifiedObject
{

public:
	MetaBlockStateReference();
	virtual ~MetaBlockStateReference();
	/**
	 * The meta block connectable of the standard control block.
	 */
	MetaBlockConnectable *StandardControlBlock_MetaBlockConnectable;
	/**
	 * The meta block connectable.
	 */
    MetaBlockConnectable *metaBlockConnectable;

};
#endif // !defined(EA_9E151509_072D_4364_9BB5_F1C575C03F28__INCLUDED_)
