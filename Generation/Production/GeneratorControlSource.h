///////////////////////////////////////////////////////////
//  GeneratorControlSource.h
//  Implementation of the Class GeneratorControlSource
//  Created on:      07-fev-2014 11:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_34F66284_E443_4cf3_8A3F_AFB201E240CC__INCLUDED_)
#define EA_34F66284_E443_4cf3_8A3F_AFB201E240CC__INCLUDED_

/**
 * The source of controls for a generating unit.
 */
enum GeneratorControlSource
{
	/**
	 * Not available.
	 */
	unavailable,
	/**
	 * Off of automatic generation control (AGC).
	 */
	offAGC,
	/**
	 * On automatic generation control (AGC).
	 */
	onAGC,
	/**
	 * Plant is controlling.
	 */
	plantControl
};
#endif // !defined(EA_34F66284_E443_4cf3_8A3F_AFB201E240CC__INCLUDED_)
