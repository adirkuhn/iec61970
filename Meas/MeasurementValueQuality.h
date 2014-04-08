///////////////////////////////////////////////////////////
//  MeasurementValueQuality.h
//  Implementation of the Class MeasurementValueQuality
//  Created on:      07-fev-2014 11:44:06
///////////////////////////////////////////////////////////

#if !defined(EA_3594A28A_F9AA_414c_B608_526B4C0675B2__INCLUDED_)
#define EA_3594A28A_F9AA_414c_B608_526B4C0675B2__INCLUDED_

#include "Quality61850.h"

/**
 * Measurement quality flags. Bits 0-10 are defined for substation automation in
 * draft IEC 61850 part 7-3. Bits 11-15 are reserved for future expansion by that
 * document. Bits 16-31 are reserved for EMS applications.
 */
class MeasurementValueQuality : public Quality61850
{

public:
	MeasurementValueQuality();
	virtual ~MeasurementValueQuality();

};
#endif // !defined(EA_3594A28A_F9AA_414c_B608_526B4C0675B2__INCLUDED_)
