///////////////////////////////////////////////////////////
//  MetaBlock.h
//  Implementation of the Class MetaBlock
//  Created on:      07-fev-2014 11:44:07
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_0450CD9F_3755_4b4f_A938_4ABCDEDC9A88__INCLUDED_)
#define EA_0450CD9F_3755_4b4f_A938_4ABCDEDC9A88__INCLUDED_

#include "Boolean.h"
#include "MetaBlockState.h"
#include "MetaBlockInput.h"
#include "IdentifiedObject.h"
#include "MetaBlockOutput.h"
#include "MetaBlockReference.h"
#include "MetaBlockParameter.h"
#include "MetaBlockSignal.h"

/**
 * A block is a meta-data representation of a control block.   It has an external
 * interface and an optinal internal interface. Blocks internals can be ommitted
 * if the block is well understood by both exchange parties.    When well
 * understood by both partice the block can be treated as a primitive block.   All
 * dynamic models must be defined to the level of primtive blocks in order for the
 * model to be consumed and used for dynamic simulation. Examples of primitive
 * blocks include a well known IEEE exciter model, a summation block, or an
 * integrator block.
 */
class MetaBlock : public IdentifiedObject
{

public:
	MetaBlock();
	virtual ~MetaBlock();
	/**
	 * This block is a proprietary block. Only inputs, outputs and parameters are
	 * exchanged.
	 */
	Boolean proprietary;
	/**
	 * The meta block states of the metablock.
	 */
    QList<MetaBlockState> *MetaBlockStates;
	/**
	 * Inputs belonging to a block.
	 */
    QList<MetaBlockInput> *MetaBlockInputs;
	/**
	 * Outputs that belong to the block.
	 */
    QList<MetaBlockOutput> *MetaBlockOutputs;
	/**
	 * The meta block references of the meta block.
	 */
    QList<MetaBlockReference> *MetaBlockReferences;
	/**
	 * The meta block references contained by the meta block.
	 */
	QList<MetaBlockReference> *Contains_MetaBlockReference;
	/**
	 * Paramters belong to a block.
	 */
    QList<MetaBlockParameter> *MetaBlockParameters;
	/**
	 * Meta block signals of the meta block.
	 */
    QList<MetaBlockSignal> *MetaBlockSignals;

};
#endif // !defined(EA_0450CD9F_3755_4b4f_A938_4ABCDEDC9A88__INCLUDED_)
