///////////////////////////////////////////////////////////
//  NameTypeAuthority.h
//  Implementation of the Class NameTypeAuthority
//  Created on:      07-fev-2014 11:44:10
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_96D5CC3C_FDEE_40e1_90FB_9350BB92A1AE__INCLUDED_)
#define EA_96D5CC3C_FDEE_40e1_90FB_9350BB92A1AE__INCLUDED_

#include "lString.h"

/**
 * Authority responsible for creation and management of names of a given type;
 * typically an organization or an enterprise system.
 */
class NameTypeAuthority
{

public:
	NameTypeAuthority();
	virtual ~NameTypeAuthority();
	/**
	 * Name of the name type authority.
	 */
	String name;
	/**
	 * Description of the name type authority.
	 */
	String description;

};
#endif // !defined(EA_96D5CC3C_FDEE_40e1_90FB_9350BB92A1AE__INCLUDED_)
