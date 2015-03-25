///////////////////////////////////////////////////////////
//  MetaBlockInputReference.h
//  Implementation of the Class MetaBlockInputReference
//  Created on:      07-fev-2014 11:44:08
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_FBE7D872_AD5E_47e2_9120_A8E4F298D802__INCLUDED_)
#define EA_FBE7D872_AD5E_47e2_9120_A8E4F298D802__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConnectable.h"

class MetaBlockInputReference : public IdentifiedObject
{

public:
	MetaBlockInputReference();
	virtual ~MetaBlockInputReference();
	/**
	 * The meta block connectable.
	 */
    MetaBlockConnectable *metaBlockConnectable;
	/**
	 * The meta block connectable for standard control block.
	 */
    MetaBlockConnectable *standardControlBlock_MetaBlockConnectable;

};
#endif // !defined(EA_FBE7D872_AD5E_47e2_9120_A8E4F298D802__INCLUDED_)
