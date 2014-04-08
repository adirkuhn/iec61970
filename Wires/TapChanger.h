///////////////////////////////////////////////////////////
//  TapChanger.h
//  Implementation of the Class TapChanger
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_89FCF7FF_B733_484d_B4DC_3A4C203F3745__INCLUDED_)
#define EA_89FCF7FF_B733_484d_B4DC_3A4C203F3745__INCLUDED_

#include "Integer.h"
#include "Seconds.h"
#include "Boolean.h"
#include "Voltage.h"
#include "PowerSystemResource.h"
#include "TapChangerControl.h"

/**
 * Mechanism for changing transformer winding tap positions.
 */
class TapChanger : public PowerSystemResource
{

public:
	TapChanger();
	virtual ~TapChanger();
	/**
	 * Highest possible tap step position, advance from neutral
	 */
	Integer highStep;
	/**
	 * For an LTC, the delay for initial tap changer operation (first step change)
	 */
	Seconds initialDelay;
	/**
	 * Lowest possible tap step position, retard from neutral
	 */
	Integer lowStep;
	/**
	 * Specifies whether or not a TapChanger has load tap changing capabilities.
	 */
	Boolean ltcFlag;
	/**
	 * The neutral tap step position for this winding.
	 */
	Integer neutralStep;
	/**
	 * Voltage at which the winding operates at the neutral tap setting.
	 */
	Voltage neutralU;
	/**
	 * The tap step position used in "normal" network operation for this winding. For
	 * a "Fixed" tap changer indicates the current physical tap setting.
	 */
	Integer normalStep;
	/**
	 * Specifies the default regulation status of the TapChanger.  True is regulating.
	 * False is not regulating.
	 */
	Boolean regulationStatus;
	/**
	 * For an LTC, the delay for subsequent tap changer operation (second and later
	 * step changes)
	 */
	Seconds subsequentDelay;
	/**
	 * The regulating control scheme in which this tap changer participates.
	 */
    TapChangerControl *tapChangerControl;

};
#endif // !defined(EA_89FCF7FF_B733_484d_B4DC_3A4C203F3745__INCLUDED_)
