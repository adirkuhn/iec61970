///////////////////////////////////////////////////////////
//  String.h
//  Implementation of the Class String
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_D8DF196D_AADF_4fc2_B77F_6F09B5AD1435__INCLUDED_)
#define EA_D8DF196D_AADF_4fc2_B77F_6F09B5AD1435__INCLUDED_

#include <QString>

/**
 * A string consisting of a sequence of 8 bit characters. The character encoding
 * is UTF-8. The string length is unspecified and unlimited.
 */
class String
{
public:
    QString str;

public:
	String();
	virtual ~String();
};
#endif // !defined(EA_D8DF196D_AADF_4fc2_B77F_6F09B5AD1435__INCLUDED_)
