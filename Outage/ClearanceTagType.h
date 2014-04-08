///////////////////////////////////////////////////////////
//  ClearanceTagType.h
//  Implementation of the Class ClearanceTagType
//  Created on:      07-fev-2014 11:43:33
///////////////////////////////////////////////////////////

#if !defined(EA_126D6C1F_6591_4b4d_8698_7027866463E6__INCLUDED_)
#define EA_126D6C1F_6591_4b4d_8698_7027866463E6__INCLUDED_

#include "IdentifiedObject.h"

/**
 * Type of ClearanceTag. Could indicate the type of work to be performed and/or
 * the type of supervisory control.
 */
class ClearanceTagType : public IdentifiedObject
{

public:
	ClearanceTagType();
	virtual ~ClearanceTagType();

};
#endif // !defined(EA_126D6C1F_6591_4b4d_8698_7027866463E6__INCLUDED_)
