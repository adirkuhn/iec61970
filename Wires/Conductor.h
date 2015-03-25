///////////////////////////////////////////////////////////
//  Conductor.h
//  Implementation of the Class Conductor
//  Created on:      07-fev-2014 11:43:34
///////////////////////////////////////////////////////////

#if !defined(EA_242A1CE2_F671_44a7_A21E_D9F9979F21BC__INCLUDED_)
#define EA_242A1CE2_F671_44a7_A21E_D9F9979F21BC__INCLUDED_

#include "Length.h"
#include "ConductingEquipment.h"

/**
 * Combination of conducting material with consistent electrical characteristics,
 * building a single electrical system, used to carry current between points in
 * the power system.  
 */
class Conductor : public ConductingEquipment
{

public:
	Conductor();
	virtual ~Conductor();
	/**
	 * Segment length for calculating line section capabilities
	 */
	Length length;

};
#endif // !defined(EA_242A1CE2_F671_44a7_A21E_D9F9979F21BC__INCLUDED_)
