///////////////////////////////////////////////////////////
//  MetaBlockConSignal.h
//  Implementation of the Class MetaBlockConSignal
//  Created on:      07-fev-2014 11:44:08
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_FA1D5A62_B884_4e14_B8FE_C3ABCE0D052A__INCLUDED_)
#define EA_FA1D5A62_B884_4e14_B8FE_C3ABCE0D052A__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConInput.h"
#include "MetaBlockConOutput.h"

class MetaBlockConSignal : public IdentifiedObject
{

public:
	MetaBlockConSignal();
	virtual ~MetaBlockConSignal();
	/**
	 * Meta block connection input.
	 */
    MetaBlockConInput *metaBlockConInput;
	/**
	 * Meta block connection output.
	 */
    MetaBlockConOutput *metaBlockConOutput;

};
#endif // !defined(EA_FA1D5A62_B884_4e14_B8FE_C3ABCE0D052A__INCLUDED_)
