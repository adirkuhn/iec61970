///////////////////////////////////////////////////////////
//  ControlArea.h
//  Implementation of the Class ControlArea
//  Created on:      07-fev-2014 11:43:36
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_AE39040B_3103_402c_B672_98E87547C8E5__INCLUDED_)
#define EA_AE39040B_3103_402c_B672_98E87547C8E5__INCLUDED_

#include "ActivePower.h"
#include "ControlAreaTypeKind.h"
#include "ControlAreaGeneratingUnit.h"
#include "PowerSystemResource.h"
#include "EnergyArea.h"
#include "TieFlow.h"

/**
 * A <b>control area </b>is a grouping of <b>generating units</b> and/or loads and
 * a cutset of tie lines (as <b>terminals</b>) which may be used for a variety of
 * purposes including automatic generation control, powerflow solution area
 * interchange control specification, and input to load forecasting.   Note that
 * any number of overlapping control area specifications can be superimposed on
 * the physical model.
 */
class ControlArea : public PowerSystemResource
{

public:
	ControlArea();
	virtual ~ControlArea();
	/**
	 * The specified positive net interchange into the control area.
	 */
	ActivePower netInterchange;
	/**
	 * Active power net interchange tolerance
	 */
	ActivePower pTolerance;
	/**
	 * The type of control area defintion used to determine if this is used for
	 * automatic generation control, for planning interchange control, or other
	 * purposes.
	 */
	ControlAreaTypeKind type;
	/**
	 * The generating unit specificaitons for the control area.
	 */
    QList<ControlAreaGeneratingUnit> *ControlAreaGeneratingUnits;
	/**
	 * The energy area that is forecast from this control area specification.
	 */
    EnergyArea *energyArea;
	/**
	 * The tie flows associated with the control area.
	 */
    QList<TieFlow> *TieFlows;

};
#endif // !defined(EA_AE39040B_3103_402c_B672_98E87547C8E5__INCLUDED_)
