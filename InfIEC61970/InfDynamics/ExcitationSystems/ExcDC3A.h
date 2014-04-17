///////////////////////////////////////////////////////////
//  ExcDC3A.h
//  Implementation of the Class ExcDC3A
//  Created on:      07-fev-2014 11:43:46
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_AB5332C8_B43F_4501_B8BB_FC6A830F7AF7__INCLUDED_)
#define EA_AB5332C8_B43F_4501_B8BB_FC6A830F7AF7__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) DC3A Model
 * 
 * The Type DC3A model is used to represent older systems, in particular those dc
 * commutator exciters with non-continuously acting regulators that were commonly
 * used before the development of the continuously acting varieties. These systems
 * respond at basically two different rates, depending upon the magnitude of
 * voltage error. For small errors, adjustment is made periodically with a signal
 * to a motor-operated rheostat. Larger errors cause
 * resistors to be quickly shorted or inserted and a strong forcing signal applied
 * to the exciter. Continuous
 * motion of the motor-operated rheostat occurs for these larger error signals,
 * even though it is bypassed by
 * contactor action. 
 */
class ExcDC3A : public ExcitationSystem
{

public:
	ExcDC3A();
	virtual ~ExcDC3A();
	/**
	 * Field voltage value 1    (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.     (> 0.)
	 */
	Float e2;
	/**
	 * If not 0, apply lower limit of 0. to exciter output
	 */
	Float exclim;
	/**
	 * Exciter field resistance line slope
	 */
	Float ke;
	/**
	 * Voltage error threshold min/max control action (> 0.)
	 */
	Float kv;
	/**
	 * Saturation factor at e1 (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2  (>= 0.)
	 */
	Float se2;
	/**
	 * Exciter field time constant (> 0.)
	 */
	Seconds te;
	/**
	 * Filter  time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Rheostat full range travel time (> 0.)
	 */
	Seconds trh;
	/**
	 * Maximum control element output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum control element output (<= 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_AB5332C8_B43F_4501_B8BB_FC6A830F7AF7__INCLUDED_)
