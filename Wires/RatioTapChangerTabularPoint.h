///////////////////////////////////////////////////////////
//  RatioTapChangerTabularPoint.h
//  Implementation of the Class RatioTapChangerTabularPoint
//  Created on:      07-fev-2014 11:44:19
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_1B636A72_1484_4292_B2FC_6B688CB04C40__INCLUDED_)
#define EA_1B636A72_1484_4292_B2FC_6B688CB04C40__INCLUDED_

#include "PerCent.h"
#include "Float.h"
#include "Integer.h"

class RatioTapChangerTabular;

/**
 * Describes each tap step in the ratio tap changer tabular curve.
 */
class RatioTapChangerTabularPoint
{

public:
	RatioTapChangerTabularPoint();
	virtual ~RatioTapChangerTabularPoint();

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
	 * calculated magnetizing conductance = g(nominal) * (1 + g(from this class)/100).
	 *  The g(nominal) is defined as the static magnetizing conductance on the
	 * associated power transformer end or ends.  This model assumes the star
	 * impedance (pi model) form.
	 */
    PerCent g;

    /**
	 * The resistance deviation in percent of nominal value. The actual reactance is
	 * calculated as follows:
	 * calculated resistance = r(nominal) * (1 + r(from this class)/100).   The
	 * r(nominal) is defined as the static resistance on the associated power
	 * transformer end or ends.  This model assumes the star impedance (pi model) form.
	 */
	PerCent r;

    /**
	 * The voltage ratio in per unit. Hence this is a value close to one.
	 */
	Float ratio;

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
	 * Table of this point.
	 */
    RatioTapChangerTabular *ratioTapChangerTabular;
};
#endif // !defined(EA_1B636A72_1484_4292_B2FC_6B688CB04C40__INCLUDED_)
