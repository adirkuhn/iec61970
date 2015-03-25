///////////////////////////////////////////////////////////
//  PhaseTapChangerTabularPoint.h
//  Implementation of the Class PhaseTapChangerTabularPoint
//  Created on:      07-fev-2014 11:44:14
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_55E71CEC_DEA7_4843_B137_10F28CA44408__INCLUDED_)
#define EA_55E71CEC_DEA7_4843_B137_10F28CA44408__INCLUDED_

#include "AngleDegrees.h"
#include "PerCent.h"
#include "Integer.h"
#include "PhaseTapChangerTabular.h"

/**
 * Describes each tap step in the phase tap changer tabular curve.
 */
class PhaseTapChangerTabularPoint
{

public:
	PhaseTapChangerTabularPoint();
	virtual ~PhaseTapChangerTabularPoint();
	/**
	 * The angle difference in degrees.
	 */
	AngleDegrees angle;
	/**
	 * The magnetizing branch susceptance deviation in percent of nominal value. The
	 * actual susceptance is calculated as follows:
	 * calculated magnetizing susceptance = b(nominal) * (1 + b(from this class)/100).
	 *  The b(nominal) is defined as the static magnetizing susceptance on the
	 * associated power transformer end or ends.  This model assumes the star
	 * impedance (pi model) form.
	 */
	PerCent b;
	/**
	 * The magnetizing branch conductance deviation in percent of nominal value. The
	 * actual conductance is calculated as follows:
	 * calculated magnetizing conductance = b(nominal) * (1 + g(from this class)/100).
	 *  The g(nominal) is defined as the static magnetizing conductance on the
	 * associated power transformer end or ends.  This model assumes the star
	 * impedance (pi model) form.
	 */
	PerCent g;
	/**
	 * The resistance deviation in percent of nominal value. The actual resistance is
	 * calculated as follows:
	 * calculated resistance = r(nominal) * (1 + r(from this class)/100).   The
	 * r(nominal) is defined as the static resistance on the associated power
	 * transformer end or ends.  This model assumes the star impedance (pi model) form.
	 */
	PerCent r;
	/**
	 * The tap step.
	 */
	Integer step;
	/**
	 * The series reactance deviation in percent of nominal value. The actual
	 * reactance is calculated as follows:
	 * calculated reactance = x(nominal) * (1 + x(from this class)/100).   The
	 * x(nominal) is defined as the static series reactance on the associated power
	 * transformer end or ends.  This model assumes the star impedance (pi model) form.
	 */
	PerCent x;
	/**
	 * The table of this point.
	 */
    PhaseTapChangerTabular *phaseTapChangerTabular;

};
#endif // !defined(EA_55E71CEC_DEA7_4843_B137_10F28CA44408__INCLUDED_)
