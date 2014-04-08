///////////////////////////////////////////////////////////
//  OperatingShare.h
//  Implementation of the Class OperatingShare
//  Created on:      07-fev-2014 11:44:11
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_2CD9B78F_F504_452a_A3B2_D0C207C760D4__INCLUDED_)
#define EA_2CD9B78F_F504_452a_A3B2_D0C207C760D4__INCLUDED_

#include "PerCent.h"
#include "OperatingParticipant.h"
#include "PowerSystemResource.h"

/**
 * Specifies the operations contract relationship between a power system resource
 * and a contract participant.
 */
class OperatingShare
{

public:
	OperatingShare();
	virtual ~OperatingShare();
	/**
	 * Percentage operational ownership between the pair (power system resource and
	 * operatging participant) associated with this share. The total percentage
	 * ownership for a power system resource should add to 100%.
	 */
	PerCent percentage;
	/**
	 * The operating participant having this share with the associated power system
	 * resource.
	 */
    OperatingParticipant *operatingParticipant;
	/**
	 * The power system resource to which the share applies.
	 */
    PowerSystemResource *powerSystemResource;

};
#endif // !defined(EA_2CD9B78F_F504_452a_A3B2_D0C207C760D4__INCLUDED_)
