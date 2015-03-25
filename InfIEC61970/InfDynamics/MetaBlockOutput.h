///////////////////////////////////////////////////////////
//  MetaBlockOutput.h
//  Implementation of the Class MetaBlockOutput
//  Created on:      07-fev-2014 11:44:08
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_A3EE2076_A251_427d_A5C9_0C0EF69BF0C6__INCLUDED_)
#define EA_A3EE2076_A251_427d_A5C9_0C0EF69BF0C6__INCLUDED_

#include "MetaBlockConnectable.h"

/**
 * Output state of a block.   This is a public interface external to the block.
 * One or more block outputs should be specified in order to link blocks together.
 *   Certain block kinds might require a specific output. For example, an exciter
 * block might require an output called "Ea".
 */
class MetaBlockOutput : public MetaBlockConnectable
{

public:
	MetaBlockOutput();
	virtual ~MetaBlockOutput();

};
#endif // !defined(EA_A3EE2076_A251_427d_A5C9_0C0EF69BF0C6__INCLUDED_)
