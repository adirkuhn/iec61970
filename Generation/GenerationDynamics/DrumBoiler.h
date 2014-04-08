///////////////////////////////////////////////////////////
//  DrumBoiler.h
//  Implementation of the Class DrumBoiler
//  Created on:      07-fev-2014 11:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_9A78D302_F758_448a_9F17_76962DE0BCE6__INCLUDED_)
#define EA_9A78D302_F758_448a_9F17_76962DE0BCE6__INCLUDED_

#include "Float.h"
#include "FossilSteamSupply.h"

/**
 * Drum boiler.
 */
class DrumBoiler : public FossilSteamSupply
{

public:
	DrumBoiler();
	virtual ~DrumBoiler();
	/**
	 * Rating of drum boiler in steam units.
	 */
	Float drumBoilerRating;

};
#endif // !defined(EA_9A78D302_F758_448a_9F17_76962DE0BCE6__INCLUDED_)
