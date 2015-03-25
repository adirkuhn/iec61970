///////////////////////////////////////////////////////////
//  ContingencyEquipment.h
//  Implementation of the Class ContingencyEquipment
//  Created on:      07-fev-2014 11:43:36
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_1C94703E_5560_4b05_BCCD_AEB92C3FFD78__INCLUDED_)
#define EA_1C94703E_5560_4b05_BCCD_AEB92C3FFD78__INCLUDED_

#include "ContingencyEquipmentStatusKind.h"
#include "ContingencyElement.h"
#include "Equipment.h"

/**
 * A equipment to which the in service status is to change such as a power
 * transformer or AC line segment.
 */
class ContingencyEquipment : public ContingencyElement
{

public:
	ContingencyEquipment();
	virtual ~ContingencyEquipment();
	/**
	 * The status for the associated equipment when in the contingency state.   This
	 * status is independent of the case to which the contingency is originally
	 * applied, but defines the equipment status when the contingency is applied.
	 */
	ContingencyEquipmentStatusKind contingentStatus;
	/**
	 * The single piece of equipment to which to apply the contingency.
	 */
    Equipment *pEquipment;

};
#endif // !defined(EA_1C94703E_5560_4b05_BCCD_AEB92C3FFD78__INCLUDED_)
