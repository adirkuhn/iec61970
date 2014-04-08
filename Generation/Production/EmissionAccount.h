///////////////////////////////////////////////////////////
//  EmissionAccount.h
//  Implementation of the Class EmissionAccount
//  Created on:      07-fev-2014 11:43:41
///////////////////////////////////////////////////////////

#if !defined(EA_F4D030FC_AE47_4f13_A12B_E03B07C04011__INCLUDED_)
#define EA_F4D030FC_AE47_4f13_A12B_E03B07C04011__INCLUDED_

#include "EmissionType.h"
#include "EmissionValueSource.h"
#include "Curve.h"

/**
 * Accounts for tracking emissions usage and credits for thermal generating units.
 * A unit may have zero or more emission accounts, and will typically have one for
 * tracking usage and one for tracking credits.
 */
class EmissionAccount : public Curve
{

public:
	EmissionAccount();
	virtual ~EmissionAccount();
	/**
	 * The type of emission, for example sulfur dioxide (SO2). The y1AxisUnits of the
	 * curve contains the unit of measure (e.g. kg) and the emissionType is the type
	 * of emission (e.g. sulfer dioxide).
	 */
	EmissionType emissionType;
	/**
	 * The source of the emission value.
	 */
	EmissionValueSource emissionValueSource;

};
#endif // !defined(EA_F4D030FC_AE47_4f13_A12B_E03B07C04011__INCLUDED_)
