///////////////////////////////////////////////////////////
//  PssSH.h
//  Implementation of the Class PssSH
//  Created on:      07-fev-2014 11:44:18
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_73005EBC_1A4D_441f_9F3F_7A94E5426D3E__INCLUDED_)
#define EA_73005EBC_1A4D_441f_9F3F_7A94E5426D3E__INCLUDED_

#include "PowerSystemStabilizer.h"

/**
 * Siemens H infinity PSS.
 */
class PssSH : public PowerSystemStabilizer
{

public:
	PssSH();
	virtual ~PssSH();

};
#endif // !defined(EA_73005EBC_1A4D_441f_9F3F_7A94E5426D3E__INCLUDED_)
