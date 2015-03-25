///////////////////////////////////////////////////////////
//  MetaBlockParameter.h
//  Implementation of the Class MetaBlockParameter
//  Created on:      07-fev-2014 11:44:08
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_BAA3127A_5BEB_4a29_BBEA_5C98571C3D80__INCLUDED_)
#define EA_BAA3127A_5BEB_4a29_BBEA_5C98571C3D80__INCLUDED_

#include "MetaBlockConnectable.h"

/**
 * An identified parameter of a block.   This is meta dynamics model and does not
 * contain specific parameter values. When using a block one would need to supply
 * specific parameter values. These are typically time constants, but are not
 * restricted to this.  Sometimes, for standard blocks, the block paramter may
 * come directly from the attributes of an associated PowerSystemResource object,
 * but such parameters may be specified to enable user defined models to alter the
 * behavior of a standard block.
 */
class MetaBlockParameter : public MetaBlockConnectable
{

public:
	MetaBlockParameter();
	virtual ~MetaBlockParameter();

};
#endif // !defined(EA_BAA3127A_5BEB_4a29_BBEA_5C98571C3D80__INCLUDED_)
