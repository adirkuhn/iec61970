///////////////////////////////////////////////////////////
//  Integer.h
//  Implementation of the Class Integer
//  Created on:      07-fev-2014 11:44:02
///////////////////////////////////////////////////////////

#if !defined(EA_4F12CA6B_CC65_4566_981E_C82A1B73B157__INCLUDED_)
#define EA_4F12CA6B_CC65_4566_981E_C82A1B73B157__INCLUDED_

/**
 * An integer number. The range is unspecified and not limited.
 */
class Integer
{
public:
    int val;

public:
	Integer();
    Integer( int v );
	virtual ~Integer();
};
#endif // !defined(EA_4F12CA6B_CC65_4566_981E_C82A1B73B157__INCLUDED_)
