///////////////////////////////////////////////////////////
//  AttributeBlockParameter.h
//  Implementation of the Class AttributeBlockParameter
//  Created on:      07-fev-2014 11:43:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_6544253F_877C_430f_8A73_985AA4E976CA__INCLUDED_)
#define EA_6544253F_877C_430f_8A73_985AA4E976CA__INCLUDED_

#include "lString.h"
#include "MetaBlockParameter.h"

/**
 * An attribute from the associated PowerSystemResource is used.   This is like
 * reflection into the UML model as one must name the paramter the same as the CIM
 * name of the desired attribute. Such parameters are not important for completely
 * standard models as the relation to the CIM attributes is fixed.  This object is
 * required for user defined models that use attributes already existing on the
 * PowerSystemResource or its derived classes.   Using this class avoids creating
 * new paramter instances (with values) when we already have the values as class
 * attributes of the associated PowerSystemResource.   Standard block models might
 * optinally use objects of this class to convey information about the internals
 * of the standard block.
 */
class AttributeBlockParameter : public MetaBlockParameter
{

public:
	AttributeBlockParameter();
	virtual ~AttributeBlockParameter();
	/**
	 * The name of the attribute in the information model. This could be any attribute
	 * of the derived class of the power system resource for which the block is
	 * intended to be used.  For example, if the one were using the xxx attribute from
	 * Generator class, one would specifiy this attribute as "xxx".  This would also
	 * limit the block to only those classes which have an "xxx" attribute.
	 * 
	 * This attribute could be replaced by using the inherited IdentifiedObject.name
	 * value for the purpose described above.
	 */
	String attributeName;

};
#endif // !defined(EA_6544253F_877C_430f_8A73_985AA4E976CA__INCLUDED_)
