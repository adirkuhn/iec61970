///////////////////////////////////////////////////////////
//  StationSupply.h
//  Implementation of the Class StationSupply
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_CB8678C3_8A42_4918_84CC_49CB917EC238__INCLUDED_)
#define EA_CB8678C3_8A42_4918_84CC_49CB917EC238__INCLUDED_

#include "EnergyConsumer.h"

/**
 * Station supply with load derived from the station output.
 */
class StationSupply : public EnergyConsumer
{

public:
	StationSupply();
	virtual ~StationSupply();

};
#endif // !defined(EA_CB8678C3_8A42_4918_84CC_49CB917EC238__INCLUDED_)
