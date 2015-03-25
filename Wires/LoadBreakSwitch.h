///////////////////////////////////////////////////////////
//  LoadBreakSwitch.h
//  Implementation of the Class LoadBreakSwitch
//  Created on:      07-fev-2014 11:44:04
///////////////////////////////////////////////////////////

#if !defined(EA_30E34D33_DD6B_4aa2_A277_97056920BFD3__INCLUDED_)
#define EA_30E34D33_DD6B_4aa2_A277_97056920BFD3__INCLUDED_

#include "ProtectedSwitch.h"

/**
 * A mechanical switching device capable of making, carrying, and breaking
 * currents under normal operating conditions.
 */
class LoadBreakSwitch : public ProtectedSwitch
{

public:
	LoadBreakSwitch();
	virtual ~LoadBreakSwitch();

};
#endif // !defined(EA_30E34D33_DD6B_4aa2_A277_97056920BFD3__INCLUDED_)
