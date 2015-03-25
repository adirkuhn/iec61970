///////////////////////////////////////////////////////////
//  PostLineSensor.h
//  Implementation of the Class PostLineSensor
//  Created on:      07-fev-2014 11:44:14
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_F71E4859_F92A_46cd_AD98_15E07FDF9329__INCLUDED_)
#define EA_F71E4859_F92A_46cd_AD98_15E07FDF9329__INCLUDED_

#include "Sensor.h"

/**
 * A sensor used mainly in overhead distribution networks as the source of both
 * current and voltage measurements.
 */
class PostLineSensor : public Sensor
{

public:
	PostLineSensor();
	virtual ~PostLineSensor();

};
#endif // !defined(EA_F71E4859_F92A_46cd_AD98_15E07FDF9329__INCLUDED_)
