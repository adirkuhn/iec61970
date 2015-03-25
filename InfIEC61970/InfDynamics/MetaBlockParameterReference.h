///////////////////////////////////////////////////////////
//  MetaBlockParameterReference.h
//  Implementation of the Class MetaBlockParameterReference
//  Created on:      07-fev-2014 11:44:08
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D5F93CA3_E61C_4124_90DC_CF101CD62959__INCLUDED_)
#define EA_D5F93CA3_E61C_4124_90DC_CF101CD62959__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConnectable.h"

/**
 * References a parameter of a block used in the internal representation of a
 * block.
 */
class MetaBlockParameterReference : public IdentifiedObject
{

public:
	MetaBlockParameterReference();
	virtual ~MetaBlockParameterReference();
	/**
	 * The meta block connectable for standard block.
	 */
	MetaBlockConnectable *StandardControlBlock_MetaBlockConnectable;
	/**
	 * The meta block connectable.
	 */
    MetaBlockConnectable *metaBlockConnectable;

};
#endif // !defined(EA_D5F93CA3_E61C_4124_90DC_CF101CD62959__INCLUDED_)
