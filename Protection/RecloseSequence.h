///////////////////////////////////////////////////////////
//  RecloseSequence.h
//  Implementation of the Class RecloseSequence
//  Created on:      07-fev-2014 11:44:20
///////////////////////////////////////////////////////////

#if !defined(EA_1B49C6C6_A422_436d_9200_E369358C8FB5__INCLUDED_)
#define EA_1B49C6C6_A422_436d_9200_E369358C8FB5__INCLUDED_

#include "Seconds.h"
#include "Integer.h"
#include "IdentifiedObject.h"

/**
 * A reclose sequence (open and close) is defined for each possible reclosure of a
 * breaker.
 */
class RecloseSequence : public IdentifiedObject
{

public:
	RecloseSequence();
	virtual ~RecloseSequence();
	/**
	 * Indicates the time lapse before the reclose step will execute a reclose.
	 */
	Seconds recloseDelay;
	/**
	 * Indicates the ordinal position of the reclose step relative to other steps in
	 * the sequence.
	 */
	Integer recloseStep;

};
#endif // !defined(EA_1B49C6C6_A422_436d_9200_E369358C8FB5__INCLUDED_)
