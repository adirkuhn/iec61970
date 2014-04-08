///////////////////////////////////////////////////////////
//  BlockParameter.h
//  Implementation of the Class BlockParameter
//  Created on:      07-fev-2014 11:43:30
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_8683564F_F933_4193_A8F7_D410D29202D6__INCLUDED_)
#define EA_8683564F_F933_4193_A8F7_D410D29202D6__INCLUDED_

#include "Float.h"
#include "IdentifiedObject.h"
#include "MetaBlockParameter.h"

/**
 * Specification of a paramter for use in a dynamic block. This is a paramters
 * like a time constant that could be unique for each instance of, for example, an
 * exciter in the model.
 */
class BlockParameter : public IdentifiedObject
{

public:
	BlockParameter();
	virtual ~BlockParameter();
	/**
	 * The paramter value for this instance of a dynamic block usage.
	 */
	Float value;
	/**
	 * The meta block parameter to which this block parameter conforms.
	 */
    MetaBlockParameter *metaBlockParameter;

};
#endif // !defined(EA_8683564F_F933_4193_A8F7_D410D29202D6__INCLUDED_)
