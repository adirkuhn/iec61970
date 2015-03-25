///////////////////////////////////////////////////////////
//  Breaker.h
//  Implementation of the Class Breaker
//  Created on:      07-fev-2014 11:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_CAC8D200_31B7_453e_8755_DDB370F4F022__INCLUDED_)
#define EA_CAC8D200_31B7_453e_8755_DDB370F4F022__INCLUDED_

#include "Seconds.h"
#include "ProtectedSwitch.h"

/**
 * A mechanical switching device capable of making, carrying, and breaking
 * currents under normal circuit conditions and also making, carrying for a
 * specified time, and breaking currents under specified abnormal circuit
 * conditions e.g.  those of short circuit.
 */
class Breaker : public ProtectedSwitch
{

public:
	Breaker();
	virtual ~Breaker();

	/**
	 * The transition time from open to close.
	 */
	Seconds inTransitTime;
};
#endif // !defined(EA_CAC8D200_31B7_453e_8755_DDB370F4F022__INCLUDED_)
