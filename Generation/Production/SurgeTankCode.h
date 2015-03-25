///////////////////////////////////////////////////////////
//  SurgeTankCode.h
//  Implementation of the Class SurgeTankCode
//  Created on:      07-fev-2014 11:44:28
///////////////////////////////////////////////////////////

#if !defined(EA_93330AA6_CFEC_445d_8958_7E9DF726B752__INCLUDED_)
#define EA_93330AA6_CFEC_445d_8958_7E9DF726B752__INCLUDED_

namespace SurgeTankCodeEnum
{
/**
 * Type (or absence) of surge tank that is associated with the hydro power plant.
 */
enum Type
{
	/**
	 * The surge tank code is undefined.
	 */
    undefined
};
};

typedef enum SurgeTankCodeEnum::Type SurgeTankCode;

#endif // !defined(EA_93330AA6_CFEC_445d_8958_7E9DF726B752__INCLUDED_)
