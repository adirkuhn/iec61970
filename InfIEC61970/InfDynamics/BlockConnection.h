///////////////////////////////////////////////////////////
//  BlockConnection.h
//  Implementation of the Class BlockConnection
//  Created on:      07-fev-2014 11:43:30
//  Original author: KDD
///////////////////////////////////////////////////////////

#if !defined(EA_B611C3B5_3261_4a2d_8B72_0044E2904BFE__INCLUDED_)
#define EA_B611C3B5_3261_4a2d_8B72_0044E2904BFE__INCLUDED_

#include "IdentifiedObject.h"
#include "MetaBlockConnection.h"

/**
 * A meta-dyanamics model connectivity specification.
 */
class BlockConnection : public IdentifiedObject
{

public:
	BlockConnection();
	virtual ~BlockConnection();
	/**
	 * The meta block connection of this block connection.
	 */
    MetaBlockConnection *metaBlockConnection;

};
#endif // !defined(EA_B611C3B5_3261_4a2d_8B72_0044E2904BFE__INCLUDED_)
