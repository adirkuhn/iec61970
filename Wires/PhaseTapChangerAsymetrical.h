///////////////////////////////////////////////////////////
//  PhaseTapChangerAsymetrical.h
//  Implementation of the Class PhaseTapChangerAsymetrical
//  Created on:      07-fev-2014 11:44:13
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_BD5E0D71_D827_4983_9357_7FD199655231__INCLUDED_)
#define EA_BD5E0D71_D827_4983_9357_7FD199655231__INCLUDED_

#include "AngleDegrees.h"
#include "PhaseTapChangerNonLinear.h"

/**
 * Describes the tap model for an asymmetrical phase shifting tranformer in which
 * the difference voltage vector adds to the primary side voltage. The angle
 * between the primary side voltage and the difference voltage is named the
 * winding connection angle. The phase shift depends on both the difference
 * voltage magnitude and the winding connection angle.
 */
class PhaseTapChangerAsymetrical : public PhaseTapChangerNonLinear
{

public:
	PhaseTapChangerAsymetrical();
	virtual ~PhaseTapChangerAsymetrical();
	/**
	 * The phase angle between the in-phase winding and the out-of -phase winding used
	 * for creating phase shift. The out-of-phase winding produces what is known as
	 * the difference voltage.  Setting this angle to 90 degrees is not the same as a
	 * symmemtrical transformer.
	 */
	AngleDegrees windingConnectionAngle;

};
#endif // !defined(EA_BD5E0D71_D827_4983_9357_7FD199655231__INCLUDED_)
