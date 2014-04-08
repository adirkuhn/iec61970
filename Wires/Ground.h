///////////////////////////////////////////////////////////
//  Ground.h
//  Implementation of the Class Ground
//  Created on:      07-fev-2014 11:43:58
///////////////////////////////////////////////////////////

#if !defined(EA_50EF78D1_5FE3_435a_A282_D5D197DCA8B9__INCLUDED_)
#define EA_50EF78D1_5FE3_435a_A282_D5D197DCA8B9__INCLUDED_

#include "ConductingEquipment.h"

/**
 * A common point for connecting grounded conducting equipment such as shunt
 * capacitors. The power system model can have more than one ground.
 */
class Ground : public ConductingEquipment
{

public:
	Ground();
	virtual ~Ground();

};
#endif // !defined(EA_50EF78D1_5FE3_435a_A282_D5D197DCA8B9__INCLUDED_)
