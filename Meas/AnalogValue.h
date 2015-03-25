///////////////////////////////////////////////////////////
//  AnalogValue.h
//  Implementation of the Class AnalogValue
//  Created on:      07-fev-2014 11:43:28
///////////////////////////////////////////////////////////

#if !defined(EA_772CCEBD_8AAC_4d80_A70E_D1BC26496703__INCLUDED_)
#define EA_772CCEBD_8AAC_4d80_A70E_D1BC26496703__INCLUDED_

#include "lFloat.h"
#include "MeasurementValue.h"

/**
 * AnalogValue represents an analog MeasurementValue.
 */
class AnalogValue : public MeasurementValue
{

public:
	AnalogValue();
	virtual ~AnalogValue();
	/**
	 * The value to supervise.
	 */
	Float value;

};
#endif // !defined(EA_772CCEBD_8AAC_4d80_A70E_D1BC26496703__INCLUDED_)
