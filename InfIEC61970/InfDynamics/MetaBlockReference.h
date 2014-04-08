///////////////////////////////////////////////////////////
//  MetaBlockReference.h
//  Implementation of the Class MetaBlockReference
//  Created on:      07-fev-2014 11:44:09
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B2BE8CFA_D540_41cf_9BE6_871D74938D83__INCLUDED_)
#define EA_B2BE8CFA_D540_41cf_9BE6_871D74938D83__INCLUDED_

#include "String.h"
#include "MetaBlockStateReference.h"
#include "BlockParameter.h"
#include "MetaBlockOutputReference.h"
#include "IdentifiedObject.h"
#include "MetaBlockInputReference.h"
#include "MetaBlockParameterReference.h"

/**
 * References a control block at the internal meta dynamics model level.    These
 * references are contained in other blocks and reference the single instance of
 * the meta model that defines a particular block definition. One would not expect
 * to see bock references contained within a primitive block.
 */
class MetaBlockReference : public IdentifiedObject
{

public:
	MetaBlockReference();
	virtual ~MetaBlockReference();
	/**
	 * Should be enum, initial conditions vs. simulation equations.
	 */
	String equationType;
	/**
	 * Meta block references.
	 */
    QList<MetaBlockStateReference> *MetaBlockStateReferences;
	/**
	 * The block parameters of this meta block reference.
	 */
    QList<BlockParameter> *BlockParameters;
	/**
	 * Meta block output reference.
	 */
    QList<MetaBlockOutputReference> *MetaBlockOutputReferences;
	/**
	 * Meta block input references.
	 */
    QList<MetaBlockInputReference> *MetaBlockInputReferences;
	/**
	 * Meta block parameter references.
	 */
    QList<MetaBlockParameterReference> *MetaBlockParameterReferences;

};
#endif // !defined(EA_B2BE8CFA_D540_41cf_9BE6_871D74938D83__INCLUDED_)
