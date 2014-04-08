///////////////////////////////////////////////////////////
//  CTTempActivePowerCurve.h
//  Implementation of the Class CTTempActivePowerCurve
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_84D3DD9F_B96B_454e_960C_89F597D00493__INCLUDED_)
#define EA_84D3DD9F_B96B_454e_960C_89F597D00493__INCLUDED_

#include "Curve.h"

/**
 * Relationship between the combustion turbine's power output rating in gross
 * active power (X-axis) and the ambient air temperature (Y-axis).
 */
class CTTempActivePowerCurve : public Curve
{

public:
	CTTempActivePowerCurve();
	virtual ~CTTempActivePowerCurve();

};
#endif // !defined(EA_84D3DD9F_B96B_454e_960C_89F597D00493__INCLUDED_)
