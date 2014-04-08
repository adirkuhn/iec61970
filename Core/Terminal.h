///////////////////////////////////////////////////////////
//  Terminal.h
//  Implementation of the Class Terminal
//  Created on:      07-fev-2014 11:44:31
///////////////////////////////////////////////////////////

#if !defined(EA_119AECEB_9D94_4bde_9E1A_5A2C67EEA124__INCLUDED_)
#define EA_119AECEB_9D94_4bde_9E1A_5A2C67EEA124__INCLUDED_

#include "Boolean.h"
#include "Integer.h"

#include "IdentifiedObject.h"

#include "PhaseCode.h"

#include "ConductingEquipment.h"
#include "RegulatingControl.h"
#include "ConnectivityNode.h"

/**
 * An electrical connection point to a piece of conducting equipment. Terminals
 * are connected at physical connection points called connectivity nodes.
 */
class Terminal : public IdentifiedObject
{

public:
	Terminal();
	virtual ~Terminal();
	/**
	 * The connected status is related to a bus-branch model and the topological node
	 * to terminal relation.  True implies the terminal is connected to the related
	 * topological node and false implies it is not.
	 * In a bus-branch model, the connected status is used to tell if equipment is
	 * disconnected without having to change the connectivity described by the
	 * topological node to terminal relation. A valid case is that conducting
	 * equipment can be connected in one end and open in the other. In particular for
	 * an AC line segment, where the reactive line charging can be significant, this
	 * is a relevant case.
	 */
	Boolean connected;
	/**
	 * Represents the normal network phasing condition.
	 */
	PhaseCode phases;
	/**
	 * The orientation of the terminal connections for a multiple terminal conducting
	 * equipment.  The sequence numbering starts with 1 and additional terminals
	 * should follow in increasing order.   The first terminal is the "starting point"
	 * for a two terminal branch.
	 */
	Integer sequenceNumber;
	/**
	 * The conducting equipment of the terminal.  Conducting equipment have  terminals
	 * that may be connected to other conducting equipment terminals via connectivity
	 * nodes or topological nodes.
	 */
    ConductingEquipment *pConductingEquipment;
	/**
	 * The controls regulating this terminal.
	 */
    QList<RegulatingControl> *pRegulatingControl;
	/**
	 * The connectivity node to which this terminal connects with zero impedance.
	 */
    ConnectivityNode *pConnectivityNode;

};
#endif // !defined(EA_119AECEB_9D94_4bde_9E1A_5A2C67EEA124__INCLUDED_)
