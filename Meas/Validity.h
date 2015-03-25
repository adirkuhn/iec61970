///////////////////////////////////////////////////////////
//  Validity.h
//  Implementation of the Class Validity
//  Created on:      07-fev-2014 11:44:34
///////////////////////////////////////////////////////////

#if !defined(EA_21A339DB_ECB7_40fc_BF73_A7C2A644C4A5__INCLUDED_)
#define EA_21A339DB_ECB7_40fc_BF73_A7C2A644C4A5__INCLUDED_

/**
 * Validity for MeasurementValue.
 */
enum Validity
{
	/**
	 * The value is marked good if no abnormal condition of the acquisition function
	 * or the information source is detected.
	 */
	GOOD,
	/**
	 * The value is marked questionable if a supervision function detects an abnormal
	 * behaviour, however the value could still be valid. The client is responsible
	 * for determining whether or not values marked "questionable" should be used.
	 */
	QUESTIONABLE,
	/**
	 * The value is marked invalid when a supervision function recognises abnormal
	 * conditions of the acquisition function or the information source (missing or
	 * non-operating updating devices). The value is not defined under this condition.
	 * The mark invalid is used to indicate to the client that the value may be
	 * incorrect and shall not be used.
	 */
	INVALID
};
#endif // !defined(EA_21A339DB_ECB7_40fc_BF73_A7C2A644C4A5__INCLUDED_)
