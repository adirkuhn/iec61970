///////////////////////////////////////////////////////////
//  PowerTransformerEnd.h
//  Implementation of the Class PowerTransformerEnd
//  Created on:      07-fev-2014 11:44:15
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_49E1C8AC_E7CB_4a27_96C5_3880F7512DFD__INCLUDED_)
#define EA_49E1C8AC_E7CB_4a27_96C5_3880F7512DFD__INCLUDED_

#include "Susceptance.h"
#include "WindingConnection.h"
#include "Conductance.h"
#include "Integer.h"
#include "Resistance.h"
#include "ApparentPower.h"
#include "Voltage.h"
#include "Reactance.h"
#include "TransformerEnd.h"

/**
 * A PowerTransformerEnd is associated with each Terminal of a PowerTransformer.
 *
 * The impdedance values r, r0, x, and x0 of a PowerTransformerEnd represents a
 * star equivalent as follows
 * 1) for a two Terminal PowerTransformer the high voltage PowerTransformerEnd has
 * non zero values on r, r0, x, and x0 while the low voltage PowerTransformerEnd
 * has zero values for r, r0, x, and x0.
 * 2) for a three Terminal PowerTransformer the three PowerTransformerEnds
 * represents a star equivalent with each leg in the star represented by r, r0, x,
 * and x0 values.
 * 3) for a PowerTransformer with more than three Terminals the
 * PowerTransformerEnd impedance values cannot be used. Instead use the
 * TransformerMeshImpedance or split the transformer into multiple
 * PowerTransformers.
 */
class PowerTransformerEnd : public TransformerEnd
{

public:
	PowerTransformerEnd();
	virtual ~PowerTransformerEnd();

	/**
	 * Magnetizing branch susceptance (B mag).  The value can be positive or negative.
	 */
	Susceptance b;

	/**
	 * Zero sequence magnetizing branch susceptance.
	 */
	Susceptance b0;

	/**
	 * Kind of connection.
	 */
	WindingConnection connectionKind;

	/**
	 * Magnetizing branch conductance.
	 */
	Conductance g;

	/**
	 * Zero sequence magnetizing branch conductance (star-model).
	 */
	Conductance g0;

	/**
	 * Terminal voltage phase angle displacement where 360 degrees are represented
	 * with clock hours. The valid values are 0 to 11. For example, for the secondary
	 * side end of a transformer with vector group code of 'Dyn11', specify the
	 * connection kind as wye with neutral and specify the phase angle of the clock as
	 * 11.  The clock value of the transformer end number specified as 1, is assumed
	 * to be zero.  Note the transformer end number is not assumed to be the same as
	 * the terminal sequence number.
	 */
	Integer phaseAngleClock;

    /**
	 * Resistance (star-model) of the transformer end.
	 */
	Resistance r;

    /**
	 * Zero sequence series resistance (star-model) of the transformer end.
	 */
	Resistance r0;

    /**
	 * Normal apparent power rating.
	 */
	ApparentPower ratedS;

    /**
	 * Rated voltage: phase-phase for three-phase windings, and either phase-phase or
	 * phase-neutral for single-phase windings.
	 */
	Voltage ratedU;

    /**
	 * Positive sequence series reactance (star-model) of the transformer end.
	 */
	Reactance x;

	/**
	 * Zero sequence series reactance of the transformer end.
	 */
	Reactance x0;
};
#endif // !defined(EA_49E1C8AC_E7CB_4a27_96C5_3880F7512DFD__INCLUDED_)
