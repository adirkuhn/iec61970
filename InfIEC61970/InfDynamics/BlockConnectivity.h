///////////////////////////////////////////////////////////
//  BlockConnectivity.h
//  Implementation of the Class BlockConnectivity
//  Created on:      07-fev-2014 11:43:30
//  Original author: KDD
///////////////////////////////////////////////////////////

#if !defined(EA_FF2B4BF7_BE9E_4305_8CE0_55D93CEEE301__INCLUDED_)
#define EA_FF2B4BF7_BE9E_4305_8CE0_55D93CEEE301__INCLUDED_

#include "BlockConnection.h"
#include "Block.h"
#include "IdentifiedObject.h"
#include "MetaBlockConnectivity.h"

/**
 * A instance definition of connectivity of BlockUsage objects as defined in a a
 * BlockConnection within the dyanmics-meta-model.
 */
class BlockConnectivity : public IdentifiedObject
{

public:
	BlockConnectivity();
	virtual ~BlockConnectivity();
	/**
	 * Block connections.
	 */
    QList<BlockConnection> *BlockConnections;
	/**
	 * Blocks of the block connectivity specification.
	 */
    QList<Block> *Blocks;
	/**
	 * The meta block connectivity to which this block connectivity conforms.
	 */
    MetaBlockConnectivity *metaBlockConnectivity;

};
#endif // !defined(EA_FF2B4BF7_BE9E_4305_8CE0_55D93CEEE301__INCLUDED_)
