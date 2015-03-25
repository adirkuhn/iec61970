///////////////////////////////////////////////////////////
//  ExcSCRX.h
//  Implementation of the Class ExcSCRX
//  Created on:      07-fev-2014 11:43:47
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_F36B75CD_14B9_4ddf_8BA0_4F4F93341996__INCLUDED_)
#define EA_F36B75CD_14B9_4ddf_8BA0_4F4F93341996__INCLUDED_

#include "Boolean.h"
#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * Simple excitation system model representing generic characteristics of many
 * excitation systems; intended for use where negative field current may be a
 * problem.
 */
class ExcSCRX : public ExcitationSystem
{

public:
	ExcSCRX();
	virtual ~ExcSCRX();
	/**
	 * Power source switch:
	 *    1 ? fixed voltage
	 *    0 ? generator terminal voltage
	 */
	Boolean cswitch;
	/**
	 * Maximum field voltage output
	 */
	Float emax;
	/**
	 * Minimum field voltage output
	 */
	Float emin;
	/**
	 * Gain (> 0.)
	 */
	Float k;
	/**
	 * Rc/Rfd - ratio of field discharge resistance to field winding resistance
	 */
	Float rcrfd;
	/**
	 * Ta/Tb - gain reduction ratio of lag-lead element
	 */
	Float tatb;
	/**
	 * Denominator time constant of lag-lead block
	 */
	Seconds tb;
	/**
	 * Time constant of gain block (> 0.)
	 */
	Seconds te;

};
#endif // !defined(EA_F36B75CD_14B9_4ddf_8BA0_4F4F93341996__INCLUDED_)
