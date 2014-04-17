///////////////////////////////////////////////////////////
//  NameType.h
//  Implementation of the Class NameType
//  Created on:      07-fev-2014 11:44:10
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_D0C6F48E_3A1F_42a5_9FB4_46EFC9579E88__INCLUDED_)
#define EA_D0C6F48E_3A1F_42a5_9FB4_46EFC9579E88__INCLUDED_

#include "lString.h"
#include "NameTypeAuthority.h"

/**
 * Type of name. Possible values for attribute 'name' are implementation dependent
 * but standard profiles may specify types. An enterprise may have multiple IT
 * systems each having its own local name for the same object, e.g. a planning
 * system may have different names from an EMS. An object may also have different
 * names within the same IT system, e.g. localName as defined in CIM version 14.
 * The definition from CIM14 is:
 * The localName is a human readable name of the object. It is a free text name
 * local to a node in a naming hierarchy similar to a file directory structure. A
 * power system related naming hierarchy may be: Substation, VoltageLevel,
 * Equipment etc. Children of the same parent in such a hierarchy have names that
 * typically are unique among them.
 */
class NameType
{

public:
	NameType();
	virtual ~NameType();
	/**
	 * Name of the name type.
	 */
	String name;
	/**
	 * Description of the name type.
	 */
	String description;
	/**
	 * Authority responsible for managing names of this type.
	 */
    NameTypeAuthority *nameTypeAuthority;

};
#endif // !defined(EA_D0C6F48E_3A1F_42a5_9FB4_46EFC9579E88__INCLUDED_)
