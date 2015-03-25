///////////////////////////////////////////////////////////
//  PhaseTapChangerTabular.h
//  Implementation of the Class PhaseTapChangerTabular
//  Created on:      07-fev-2014 11:44:14
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_7C3F1FE0_799A_4329_9EF0_FD1F309D3BFA__INCLUDED_)
#define EA_7C3F1FE0_799A_4329_9EF0_FD1F309D3BFA__INCLUDED_

#include "PhaseTapChanger.h"
#include "IdentifiedObject.h"

/**
 * Describes a tabular curve for how the the phase angle difference and impedance
 * varies with the tap step.
 */
class PhaseTapChangerTabular : public IdentifiedObject
{

public:
	PhaseTapChangerTabular();
	virtual ~PhaseTapChangerTabular();
	/**
	 * The phase tap changers to which this phase tap table applies.
	 */
    QList<PhaseTapChanger> *PhaseTapChangers;

};
#endif // !defined(EA_7C3F1FE0_799A_4329_9EF0_FD1F309D3BFA__INCLUDED_)
