///////////////////////////////////////////////////////////
//  Block.h
//  Implementation of the Class Block
//  Created on:      07-fev-2014 11:43:30
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_381AE681_A78C_4678_BE11_DBB65D9CC83A__INCLUDED_)
#define EA_381AE681_A78C_4678_BE11_DBB65D9CC83A__INCLUDED_

#include "Boolean.h"
#include "PowerSystemResource.h"
#include "Terminal.h"
#include "BlockConnection.h"
#include "MetaBlock.h"
#include "BlockParameter.h"
#include "TieToMeasurement.h"

/**
 * A specific usage of a dynamics block, supplied with parameters and any linkages
 * to the power system static model that are required.     Sometimes a block is
 * used to simply specify a location of input or output from dyanmics equations to
 * the static model.
 */
class Block : public PowerSystemResource
{

public:
	Block();
	virtual ~Block();
	/**
	 * If false, the block is ignored in dynamics calculations
	 */
	Boolean inService;
	/**
	 * The power system resource associated with the dyanmics block instance.   This
	 * is optional because sometimes no linkage is needed, yet parameters must be
	 * specified.  Also the linkage to Terminal can be used instead of the linkage to
	 * PowerSystemResource.
	 */
	PowerSystemResource *PowerSystemResource;
	/**
	 * The optional terminal to which the block applies.  This is used to link a
	 * specific terminal flow to the dynamics block.
	 */
    Terminal *terminal;
	/**
	 * The connections of the block.
	 */
    QList<BlockConnection> *BlockConnections;
	/**
	 * The meta block of this block.
	 */
    MetaBlock *metaBlock;
	/**
	 * The block parameters of this block.
	 */
    QList<BlockParameter> *BlockParameters;
	/**
	 * Measurements for the Block.
	 */
	QList<TieToMeasurement> *TieToMeasurements;

};
#endif // !defined(EA_381AE681_A78C_4678_BE11_DBB65D9CC83A__INCLUDED_)
