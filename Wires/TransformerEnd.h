///////////////////////////////////////////////////////////
//  TransformerEnd.h
//  Implementation of the Class TransformerEnd
//  Created on:      07-fev-2014 11:44:33
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_58CF9C62_1967_4b7e_85FF_5B3F6A040C5B__INCLUDED_)
#define EA_58CF9C62_1967_4b7e_85FF_5B3F6A040C5B__INCLUDED_

#include "PerCent.h"
#include "Integer.h"
#include "Boolean.h"
#include "Voltage.h"
#include "Resistance.h"
#include "Reactance.h"
#include "RatioTapChanger.h"
#include "IdentifiedObject.h"
#include "PhaseTapChanger.h"
#include "TransformerStarImpedance.h"
#include "Terminal.h"
#include "BaseVoltage.h"

/**
 * A conducting connection point of a power transformer. It corresponds to a
 * physical transformer winding terminal.  In earlier CIM versions, the
 * TransformerWinding class served a similar purpose, but this class is more
 * flexible because it associates to terminal but is not a specialization of
 * ConductingEquipment.
 */
class TransformerEnd : public IdentifiedObject
{

public:
	TransformerEnd();
	virtual ~TransformerEnd();
	/**
	 * Core shunt magnetizing susceptance in the saturation region.
	 */
	PerCent bmagSat;
	/**
	 * Number for this transformer end, corresponding to the end's order in the power
	 * transformer vector group or phase angle clock number.  Highest voltage winding
	 * should be 1.  Each end within a power transformer should have a unique
	 * subsequent end number.   Note the transformer end number need not match the
	 * terminal sequence number.
	 */
	Integer endNumber;
	/**
	 * (for Yn and Zn connections) True if the neutral is solidly grounded.
	 */
	Boolean grounded;
	/**
	 * The reference voltage at which the magnetizing saturation measurements were made
	 */
	Voltage magBaseU;
	/**
	 * Core magnetizing saturation curve knee flux level.
	 */
	PerCent magSatFlux;
	/**
	 * (for Yn and Zn connections) Resistance part of neutral impedance where
	 * 'grounded' is true.
	 */
	Resistance rground;
	/**
	 * (for Yn and Zn connections) Reactive part of neutral impedance where 'grounded'
	 * is true.
	 */
	Reactance xground;
	/**
	 * Ratio tap changer associated with this transformer end.
	 */
    RatioTapChanger *ratioTapChanger;
	/**
	 * Phase tap changer associated with this transformer end.
	 */
    PhaseTapChanger *phaseTapChanger;
	/**
	 * (accurate for 2- or 3-winding transformers only) Pi-model impedances of this
	 * transformer end. By convention, for a two winding transformer, the full values
	 * of the transformer should be entered on the high voltage end (endNumber=1).
	 */
    TransformerStarImpedance *starImpedance;
	/**
	 * Terminal of the power transformer to which this transformer end belongs.
	 */
    Terminal *terminal;
	/**
	 * Base voltage of the transformer end.  This is essential for PU calculation.
	 */
    BaseVoltage *baseVoltage;

};
#endif // !defined(EA_58CF9C62_1967_4b7e_85FF_5B3F6A040C5B__INCLUDED_)
