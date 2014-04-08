///////////////////////////////////////////////////////////
//  MetaBlockConnectable.h
//  Implementation of the Class MetaBlockConnectable
//  Created on:      07-fev-2014 11:44:07
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_1B9BC181_B55F_4de8_818D_CE293B189360__INCLUDED_)
#define EA_1B9BC181_B55F_4de8_818D_CE293B189360__INCLUDED_

#include "IdentifiedObject.h"

/**
 * This is a source connection for a block input at the dynamics meta-data level.
 * The subtypes represent different ways to obtain the numbers.  Note that a block
 * output is NOT derived from this class since block outputs can only be computed
 * from references to other blocks via the BlockOutputReference class.
 */
class MetaBlockConnectable : public IdentifiedObject
{

public:
	MetaBlockConnectable();
	virtual ~MetaBlockConnectable();

};
#endif // !defined(EA_1B9BC181_B55F_4de8_818D_CE293B189360__INCLUDED_)
