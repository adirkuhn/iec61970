///////////////////////////////////////////////////////////
//  LoadStaticBus.h
//  Implementation of the Class LoadStaticBus
//  Created on:      07-fev-2014 11:44:05
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_27A830EC_5007_4b57_A173_027C452943C5__INCLUDED_)
#define EA_27A830EC_5007_4b57_A173_027C452943C5__INCLUDED_

#include "LoadStatic.h"

/**
 * Static load model associated with a single bus.
 */
class LoadStaticBus : public LoadStatic
{

public:
	LoadStaticBus();
	virtual ~LoadStaticBus();

};
#endif // !defined(EA_27A830EC_5007_4b57_A173_027C452943C5__INCLUDED_)
