///////////////////////////////////////////////////////////
//  RatioTapChanger.h
//  Implementation of the Class RatioTapChanger
//  Created on:      07-fev-2014 11:44:19
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_484BE8F3_A489_4fda_8949_FB4CC4998951__INCLUDED_)
#define EA_484BE8F3_A489_4fda_8949_FB4CC4998951__INCLUDED_

#include "PerCent.h"
#include "TransformerControlMode.h"
#include "TapChanger.h"
#include "RatioTapChangerTabular.h"

/**
 * A tap changer that changes the voltage ratio impacting the voltage magnitude
 * but not the phase angle across the transformer.
 */
class RatioTapChanger : public TapChanger
{

public:
	RatioTapChanger();
	virtual ~RatioTapChanger();

	/**
	 * Tap step increment, in per cent of nominal voltage, per step position.
	 */
	PerCent stepVoltageIncrement;

	/**
	 * Specifies the regulation control mode (voltage or reactive) of the
	 * RatioTapChanger.
	 */
	TransformerControlMode tculControlMode;

	/**
	 * The tap ratio table for this ratio  tap changer.
	 */
    RatioTapChangerTabular *ratioTapChangerTabular;
};
#endif // !defined(EA_484BE8F3_A489_4fda_8949_FB4CC4998951__INCLUDED_)
