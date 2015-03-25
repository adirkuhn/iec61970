///////////////////////////////////////////////////////////
//  LoadStaticOwner.h
//  Implementation of the Class LoadStaticOwner
//  Created on:      07-fev-2014 11:44:05
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_EDA02B16_A63B_4441_8578_7C5EEFE092A9__INCLUDED_)
#define EA_EDA02B16_A63B_4441_8578_7C5EEFE092A9__INCLUDED_

#include "LoadStatic.h"

/**
 * Static load associated with a single owner.
 */
class LoadStaticOwner : public LoadStatic
{

public:
	LoadStaticOwner();
	virtual ~LoadStaticOwner();

};
#endif // !defined(EA_EDA02B16_A63B_4441_8578_7C5EEFE092A9__INCLUDED_)
