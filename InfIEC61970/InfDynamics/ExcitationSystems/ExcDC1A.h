///////////////////////////////////////////////////////////
//  ExcDC1A.h
//  Implementation of the Class ExcDC1A
//  Created on:      07-fev-2014 11:43:46
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_1D60AD2C_234C_44c4_B299_7DD5EFE3335A__INCLUDED_)
#define EA_1D60AD2C_234C_44c4_B299_7DD5EFE3335A__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) DC1A Model
 * 
 * This model is used to represent field-controlled dc
 * commutator exciters with continuously acting voltage regulators (especially the
 * direct-acting rheostatic,
 * rotating amplifier, and magnetic amplifier types). Because this model has been
 * widely implemented by the
 * industry, it is sometimes used to represent other types of systems when
 * detailed data for them are not
 * available or when a simplified model is required.
 */
class ExcDC1A : public ExcitationSystem
{

public:
	ExcDC1A();
	virtual ~ExcDC1A();
	/**
	 * Field voltage value 1    (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.   (> 0.)
	 */
	Float e2;
	/**
	 * If not 0, apply lower limit of 0. to exciter
	 * output
	 */
	Float exclim;
	/**
	 * Gain (> 0.)
	 */
	Float ka;
	/**
	 * Exciter field resistance line slope
	 */
	Float ke;
	/**
	 * Rate feedback gain (>= 0.)
	 */
	Float kf;
	/**
	 * Saturation factor at e1  (>= 0.)
	 */
	Float se1;
	/**
	 * Saturation factor at e2  (>= 0.)
	 */
	Float se2;
	/**
	 * Time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * Lag time constant (>= 0.)
	 */
	Seconds tb;
	/**
	 * Lead time constant
	 */
	Seconds tc;
	/**
	 * Exciter time constant (> 0.)
	 */
	Seconds te;
	/**
	 * Rate feedback time constant, sec. (> 0.)
	 */
	Seconds tf;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * UEL input: if < 2, HV gate; if = 2, add to error signal
	 */
	Float uelin;
	/**
	 * Maximum controller output
	 */
	Float vrmax;
	/**
	 * Minimum controller output (< 0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_1D60AD2C_234C_44c4_B299_7DD5EFE3335A__INCLUDED_)
