///////////////////////////////////////////////////////////
//  AltGeneratingUnitMeas.h
//  Implementation of the Class AltGeneratingUnitMeas
//  Created on:      07-fev-2014 11:43:27
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_54BAACAD_6BE1_44c2_94C7_B15FEAFB588E__INCLUDED_)
#define EA_54BAACAD_6BE1_44c2_94C7_B15FEAFB588E__INCLUDED_

#include "Integer.h"
#include "AnalogValue.h"

/**
 * A prioritized measurement to be used for the generating unit in the control
 * area specificaiton.
 */
class AltGeneratingUnitMeas
{

public:
	AltGeneratingUnitMeas();
	virtual ~AltGeneratingUnitMeas();
	/**
	 * Priority of a measurement usage.   Lower numbers have first priority.
	 */
	Integer priority;
	/**
	 * The specific analog value used as a source.
	 */
    AnalogValue *pAnalogValue;

};
#endif // !defined(EA_54BAACAD_6BE1_44c2_94C7_B15FEAFB588E__INCLUDED_)
