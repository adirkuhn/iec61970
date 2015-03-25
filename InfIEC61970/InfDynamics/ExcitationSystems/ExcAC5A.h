///////////////////////////////////////////////////////////
//  ExcAC5A.h
//  Implementation of the Class ExcAC5A
//  Created on:      07-fev-2014 11:43:44
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_E6F71179_52C4_4c46_B210_EC37011646CE__INCLUDED_)
#define EA_E6F71179_52C4_4c46_B210_EC37011646CE__INCLUDED_

#include "lFloat.h"
#include "Seconds.h"
#include "ExcitationSystem.h"

/**
 * IEEE (1992/2005) AC5A Model
 * 
 * The model designated as Type AC5A, is a simplified model for brushless
 * excitation systems. The regulator is supplied from a source, such as a
 * permanent magnet generator, which is not affected by system disturbances.
 * Unlike other ac models, this model uses loaded rather than open circuit exciter
 * saturation data in the same
 * way as it is used for the dc models.
 * Because the model has been widely implemented by the industry, it is sometimes
 * used to represent other
 * types of systems when either detailed data for them are not available or
 * simplified models are required.
 */
class ExcAC5A : public ExcitationSystem
{

public:
	ExcAC5A();
	virtual ~ExcAC5A();
	/**
	 * Field voltage value 1      (> 0.)
	 */
	Float e1;
	/**
	 * Field voltage value 2.  (> 0.)
	 */
	Float e2;
	/**
	 * Gain  (> 0.)
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
	 * Saturation factor at e2 (>= 0.)
	 */
	Float se2;
	/**
	 * Time constant (> 0.)
	 */
	Seconds ta;
	/**
	 * Exciter time constant, sec. (> 0.)
	 */
	Seconds te;
	/**
	 * Rate feedback lag time constant (> 0.)
	 */
	Seconds tf1;
	/**
	 * Rate feedback lag time constant (>= 0.)
	 */
	Seconds tf2;
	/**
	 * Rate feedback lead time constant
	 */
	Seconds tf3;
	/**
	 * Filter time constant (>= 0.)
	 */
	Seconds tr;
	/**
	 * Maximum controller output (> 0.)
	 */
	Float vrmax;
	/**
	 * Minimum controller output (<  0.)
	 */
	Float vrmin;

};
#endif // !defined(EA_E6F71179_52C4_4c46_B210_EC37011646CE__INCLUDED_)
