///////////////////////////////////////////////////////////
//  AltTieMeas.h
//  Implementation of the Class AltTieMeas
//  Created on:      07-fev-2014 11:43:28
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_B06A7848_B774_4d0f_A952_481CBA84E387__INCLUDED_)
#define EA_B06A7848_B774_4d0f_A952_481CBA84E387__INCLUDED_

#include "Integer.h"
#include "AnalogValue.h"

/**
 * A prioritized measurement to be used for the tie flow as part of the control
 * area specification.
 */
class AltTieMeas
{

public:
	AltTieMeas();
	virtual ~AltTieMeas();
	/**
	 * Priority of a measurement usage.   Lower numbers have first priority.
	 */
	Integer priority;
	/**
	 * The specific analog value used as a source.
	 */
    AnalogValue *pAnalogValue;

};
#endif // !defined(EA_B06A7848_B774_4d0f_A952_481CBA84E387__INCLUDED_)
