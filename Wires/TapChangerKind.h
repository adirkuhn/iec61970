///////////////////////////////////////////////////////////
//  TapChangerKind.h
//  Implementation of the Class TapChangerKind
//  Created on:      07-fev-2014 11:44:31
///////////////////////////////////////////////////////////

#if !defined(EA_94F131F1_0FFB_464f_9AF3_8F542FC630DA__INCLUDED_)
#define EA_94F131F1_0FFB_464f_9AF3_8F542FC630DA__INCLUDED_

/**
 * Transformer tap changer type. Indicates the capabilities of the tap changer
 * independent of the operating mode.
 */
enum TapChangerKind
{
	/**
	 * Not capable of control.   This is also indicated by by no association of
	 * TapChanger to a RegulatingControl.
	 */
	fixed,
	/**
	 * Capable of voltage control.
	 */
	voltageControl,
	/**
	 * Capable of phase control.
	 */
	phaseControl,
	/**
	 * Capable of voltage and phase control.
	 */
	voltageAndPhaseControl
};
#endif // !defined(EA_94F131F1_0FFB_464f_9AF3_8F542FC630DA__INCLUDED_)
