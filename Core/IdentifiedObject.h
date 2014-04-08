///////////////////////////////////////////////////////////
//  IdentifiedObject.h
//  Implementation of the Class IdentifiedObject
//  Created on:      07-fev-2014 11:44:01
///////////////////////////////////////////////////////////

#if !defined(EA_606AE1C6_392E_426b_B830_6105C03B7B27__INCLUDED_)
#define EA_606AE1C6_392E_426b_B830_6105C03B7B27__INCLUDED_

#include <String.h>

class ModelingAuthoritySet;
class DiagramObject;

/**
 * This is a root class to provide common identification for all classes needing
 * identification and naming attributes.
 */
class IdentifiedObject
{
public:
	IdentifiedObject();
	virtual ~IdentifiedObject();

	/**
	 * The aliasName is free text human readable name of the object alternative to
	 * IdentifiedObject.name. It may be non unique and may not correlate to a naming
	 * hierarchy.
	 * The attribute aliasName is retained because of backwards compatibility between
	 * CIM relases. It is however recommended to replace aliasName with the Name class
	 * as aliasName is planned for retirement at a future time.
	 */
    String aliasName;

    /**
	 * Master resource identifier issued by a model authority. The mRID is globally
	 * unique within an exchange context.
	 * Global uniqeness is easily achived by using a UUID for the mRID. It is strongly
	 * recommended to do this.
	 * For CIMXML data files in RDF syntax, the mRID is mapped to rdf:ID or rdf:about
	 * attributes that identify CIM object elements.
	 */
    String mRID;

    /**
	 * The name is any free human readable and possibly non unique text naming the
	 * object.
	 */
    String name;

    /**
	 * An IdentifiedObject belongs to a Modeling Authority Set for purposes of
	 * defining a group of data maintained by the same Modeling Authority.
	 */
    ModelingAuthoritySet *modelingAuthoritySet;

    /**
	 * The diagram objects that are associated with the domain object.
	 */
    QList<DiagramObject> *diagramObjects;
};
#endif // !defined(EA_606AE1C6_392E_426b_B830_6105C03B7B27__INCLUDED_)
