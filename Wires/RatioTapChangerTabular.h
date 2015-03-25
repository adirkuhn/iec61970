///////////////////////////////////////////////////////////
//  RatioTapChangerTabular.h
//  Implementation of the Class RatioTapChangerTabular
//  Created on:      07-fev-2014 11:44:19
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_C4004F2E_D7BB_44e5_A1D2_B7C36F97F437__INCLUDED_)
#define EA_C4004F2E_D7BB_44e5_A1D2_B7C36F97F437__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"
#include "RatioTapChangerTabularPoint.h"

/**
 * Describes a curve for how the voltage magnitude and impdance varies with the
 * tap step. 
 */
class RatioTapChangerTabular : public IdentifiedObject
{

public:
	RatioTapChangerTabular();
	virtual ~RatioTapChangerTabular();

    QList<RatioTapChangerTabularPoint> tabularPoints;
};
#endif // !defined(EA_C4004F2E_D7BB_44e5_A1D2_B7C36F97F437__INCLUDED_)
