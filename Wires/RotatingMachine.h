///////////////////////////////////////////////////////////
//  RotatingMachine.h
//  Implementation of the Class RotatingMachine
//  Created on:      07-fev-2014 11:44:23
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_BB6C8224_BF27_43d2_998D_91A6A9BAE021__INCLUDED_)
#define EA_BB6C8224_BF27_43d2_998D_91A6A9BAE021__INCLUDED_

#include <QList>

#include "lFloat.h"
#include "Seconds.h"
#include "ApparentPower.h"
#include "Reactance.h"
#include "Resistance.h"
#include "RegulatingCondEq.h"
#include "MechanicalLoad.h"

/**
 * A rotating machine which may be used as a generator or motor.
 */
class RotatingMachine : public RegulatingCondEq
{

public:
	RotatingMachine();
	virtual ~RotatingMachine();

    /**
	 * Damping torque coefficient, a proportionality constant that, when multiplied by
	 * the angular velocity of the rotor poles with respect to the magnetic field
	 * (frequency), results in the damping torque.  This value is often zero when the
	 * sources of damping torques (generator damper windings, load damping effects,
	 * etc.) are modeled in detail.
	 */
	Float damping;

    /**
	 * Inertia constant of generator or motor and mechanical load.  Must be greater
	 * than zero.  This is the specification for the stored energy in the rotating
	 * mass when operating at rated speed. For a generator, this includes the
	 * generator plus all other elements (turbine, exciter) on the same shaft and has
	 * units of MW-sec. For a motor, it includes the motor plus its mechanical load.
	 * Conventional units are per unit on the generator MVA base, usually expressed as
	 * MW-second./MVA or just second.   This value is used in the accelerating power
	 * reference frame for  operator training simulator solutions.
	 */
	Seconds inertia;

    /**
	 * Nameplate apparent power rating for the unit.
	 */
	ApparentPower ratedS;

    /**
	 * Saturation factor at rated terminal voltage.  Should be greather than or equal
	 * to zero. 
	 */
	Float saturationFactor;

    /**
	 * Saturation factor at 120% of rated terminal voltage.  Should be greater than or
	 * equal to the saturation factor at rated terminal voltage.
	 */
	Float saturationFactor120;

	/**
	 * Stator leakage reactance.  Should be greater than or equal to 0.
	 */
	Reactance statorLeakageReactance;

	/**
	 * Stator (armature) resistance.  Should be greather than or equal to zero.
	 * Equivalent resistance when used for GenEquiv model. 
	 */
	Resistance statorResistance;

	/**
	 * The mechanical loads of this rotating machine.
	 */
    QList<MechanicalLoad> mechanicalLoads;
};
#endif // !defined(EA_BB6C8224_BF27_43d2_998D_91A6A9BAE021__INCLUDED_)
