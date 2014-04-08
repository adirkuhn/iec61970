///////////////////////////////////////////////////////////
//  Boolean.h
//  Implementation of the Class Boolean
//  Created on:      07-fev-2014 11:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_6E2011D6_65A7_452d_8D46_39340B6E62E5__INCLUDED_)
#define EA_6E2011D6_65A7_452d_8D46_39340B6E62E5__INCLUDED_

/**
 * A type with the value space "true" and "false".
 */
class Boolean
{
public:
    bool val;

public:
	Boolean();
    Boolean( bool v );
    virtual ~Boolean();
};
#endif // !defined(EA_6E2011D6_65A7_452d_8D46_39340B6E62E5__INCLUDED_)
