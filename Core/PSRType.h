///////////////////////////////////////////////////////////
//  PSRType.h
//  Implementation of the Class PSRType
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_3864044F_F9B0_46ca_A7E1_88EFEA021833__INCLUDED_)
#define EA_3864044F_F9B0_46ca_A7E1_88EFEA021833__INCLUDED_

#include "IdentifiedObject.h"

/**
 * Classifying instances of the same class, e.g. overhead and underground
 * ACLineSegments. This classification mechanism is intended to provide
 * flexibility outside the scope of this standard, i.e. provide customisation that
 * is non standard.
 */
class PSRType : public IdentifiedObject
{

public:
	PSRType();
	virtual ~PSRType();
};
#endif // !defined(EA_3864044F_F9B0_46ca_A7E1_88EFEA021833__INCLUDED_)
