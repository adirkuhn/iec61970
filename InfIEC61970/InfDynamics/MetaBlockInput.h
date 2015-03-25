///////////////////////////////////////////////////////////
//  MetaBlockInput.h
//  Implementation of the Class MetaBlockInput
//  Created on:      07-fev-2014 11:44:08
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_AE30C231_16E3_4a29_B377_A05145F31280__INCLUDED_)
#define EA_AE30C231_16E3_4a29_B377_A05145F31280__INCLUDED_

#include "MetaBlockConnectable.h"

/**
 * Linkage at the dynanics meta model level.    The output of a block could link
 * to this. This is a public interface external to the block.
 */
class MetaBlockInput : public MetaBlockConnectable
{

public:
	MetaBlockInput();
	virtual ~MetaBlockInput();

};
#endif // !defined(EA_AE30C231_16E3_4a29_B377_A05145F31280__INCLUDED_)
