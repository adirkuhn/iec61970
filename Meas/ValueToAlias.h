///////////////////////////////////////////////////////////
//  ValueToAlias.h
//  Implementation of the Class ValueToAlias
//  Created on:      07-fev-2014 11:44:34
///////////////////////////////////////////////////////////

#if !defined(EA_5D836B1F_6ED9_40fb_8960_5BE5E360A308__INCLUDED_)
#define EA_5D836B1F_6ED9_40fb_8960_5BE5E360A308__INCLUDED_

#include "Integer.h"
#include "IdentifiedObject.h"

/**
 * Describes the translation of one particular value into a name, e.g. 1 as "Open".
 */
class ValueToAlias : public IdentifiedObject
{

public:
	ValueToAlias();
	virtual ~ValueToAlias();
	/**
	 * The value that is mapped.
	 */
	Integer value;

};
#endif // !defined(EA_5D836B1F_6ED9_40fb_8960_5BE5E360A308__INCLUDED_)
