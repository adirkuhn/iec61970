///////////////////////////////////////////////////////////
//  Name.h
//  Implementation of the Class Name
//  Created on:      07-fev-2014 11:44:10
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_EAF40C4F_C3EC_4c5a_BC3E_BC43579A2BE1__INCLUDED_)
#define EA_EAF40C4F_C3EC_4c5a_BC3E_BC43579A2BE1__INCLUDED_

#include "lString.h"
#include "IdentifiedObject.h"
#include "NameType.h"

/**
 * The Name class provides the means to define any number of human readable  names
 * for an object. A name is <b>not</b> to be used for defining inter-object
 * relationships. For inter-object relationships instead use the object
 * identification 'mRID'.
 */
class Name
{

public:
	Name();
	virtual ~Name();
	/**
	 * Any free text that name the object.
	 */
	String name;
	/**
	 * Identified object that this name designates.
	 */
    IdentifiedObject *identifiedObject;
	/**
	 * Type of this name.
	 */
    NameType *nameType;

};
#endif // !defined(EA_EAF40C4F_C3EC_4c5a_BC3E_BC43579A2BE1__INCLUDED_)
