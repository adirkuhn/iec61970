///////////////////////////////////////////////////////////
//  ExcST5B.h
//  Implementation of the Class ExcST5B
//  Created on:      07-fev-2014 11:43:49
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_94D7F443_73FF_4753_986F_DF8C4FBA461E__INCLUDED_)
#define EA_94D7F443_73FF_4753_986F_DF8C4FBA461E__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (2005) ST5B Model
 * 
 * The Type ST5B excitation system is a variation of the Type ST1A model, with
 * alternative overexcitation and underexcitation inputs and additional limits.
 * The corresponding stabilizer models that can be used with these models are the
 * Type PSS2B, PSS3B, or PSS4B. 
 */
class ExcST5B : public ExcitationSystem
{

public:
	ExcST5B();
	virtual ~ExcST5B();
	/**
	 * Rectifier regulation factor (>= 0.)
	 */
	Float kc;
	/**
	 * Regulator gain (> 0.)
	 */
	Float kr;
	/**
	 * Firing circuit time constant (>= 0.)
	 */
	Seconds t1;
	/**
	 * Regulator lag time constant (>= 0.)
	 */
	Seconds tb1;
	/**
	 * Regulator lag time constant (>= 0.)
	 */
	Seconds tb2;
	/**
	 * Regulator lead time constant
	 */
	Seconds tc1;
	/**
	 * Regulator lead time constant.
	 */
	Seconds tc2;
	/**
	 * OEL lag time constant (>= 0.)
	 */
	Seconds tob1;
	/**
	 * OEL lag time constant (>= 0.)
	 */
	Seconds tob2;
	/**
	 * OEL lead time constant
	 */
	Seconds toc1;
	/**
	 * OEL lead time constant
	 */
	Seconds toc2;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * UEL lag time constant (>= 0.)
	 */
	Seconds tub1;
	/**
	 * UEL lag time constant (>= 0.)
	 */
	Seconds tub2;
	/**
	 * UEL lead time constant.
	 */
	Seconds tuc1;
	/**
	 * UEL lead time constant
	 */
	Seconds tuc2;
	/**
	 * Maximum regulator output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum regulator output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_94D7F443_73FF_4753_986F_DF8C4FBA461E__INCLUDED_)
