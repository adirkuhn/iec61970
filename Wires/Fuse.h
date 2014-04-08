///////////////////////////////////////////////////////////
//  Fuse.h
//  Implementation of the Class Fuse
//  Created on:      07-fev-2014 11:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_45240969_F137_41d1_B4EB_173496A5C764__INCLUDED_)
#define EA_45240969_F137_41d1_B4EB_173496A5C764__INCLUDED_

#include "Switch.h"

/**
 * An overcurrent protective device with a circuit opening fusible part that is
 * heated and severed by the passage of overcurrent through it. A fuse is
 * considered a switching device because it breaks current.
 */
class Fuse : public Switch
{

public:
	Fuse();
	virtual ~Fuse();

};
#endif // !defined(EA_45240969_F137_41d1_B4EB_173496A5C764__INCLUDED_)
