///////////////////////////////////////////////////////////
//  GeneratorOperatingMode.h
//  Implementation of the Class GeneratorOperatingMode
//  Created on:      07-fev-2014 11:43:52
///////////////////////////////////////////////////////////

#if !defined(EA_6333FABC_753F_4088_9446_D57C18764A76__INCLUDED_)
#define EA_6333FABC_753F_4088_9446_D57C18764A76__INCLUDED_

namespace GeneratorOperatingModeEnum
{
/**
 * Operating mode for secondary generator control.
 */
enum Type
{
	/**
	 * Off.
	 */
	off,
	/**
	 * Manual.
	 */
	manual,
	/**
	 * Fixed.
	 */
	fixed,
	/**
	 * Load frequency control.
	 */
	LFC,
	/**
	 * Automatic generation control (AGC).
	 */
	AGC,
	/**
	 * Economic dispatch control.
	 */
	EDC,
	/**
	 * MRN.
	 */
	MRN,
	/**
	 * REG.
	 */
	REG
};
};

typedef enum GeneratorOperatingModeEnum::Type GeneratorOperatingMode;

#endif // !defined(EA_6333FABC_753F_4088_9446_D57C18764A76__INCLUDED_)
