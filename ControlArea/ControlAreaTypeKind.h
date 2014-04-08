///////////////////////////////////////////////////////////
//  ControlAreaTypeKind.h
//  Implementation of the Class ControlAreaTypeKind
//  Created on:      07-fev-2014 11:43:36
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_1861F9EA_648E_4c89_B1CD_267228125EB3__INCLUDED_)
#define EA_1861F9EA_648E_4c89_B1CD_267228125EB3__INCLUDED_

namespace ControlAreaTypeKindEnum
{
/**
 * The type of control area.
 */
enum Type
{
	/**
	 * Used for automatic generatoin control.
	 */
	AGC,
	/**
	 * Used for load forecast.
	 */
	Forecast,
	/**
	 * Used for interchange specification or control.
	 */
	Interchange
};
};

typedef enum ControlAreaTypeKindEnum::Type ControlAreaTypeKind;

#endif // !defined(EA_1861F9EA_648E_4c89_B1CD_267228125EB3__INCLUDED_)
