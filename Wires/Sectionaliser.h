///////////////////////////////////////////////////////////
//  Sectionaliser.h
//  Implementation of the Class Sectionaliser
//  Created on:      07-fev-2014 11:44:23
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_FE05D929_9EB6_443a_B5A1_5F975B5F658A__INCLUDED_)
#define EA_FE05D929_9EB6_443a_B5A1_5F975B5F658A__INCLUDED_

#include "Switch.h"

/**
 * Automatic switch that will lock open to isolate a faulted section. It may, or
 * may not, have load breaking capability. Its primary purpose is to provide fault
 * sectionalising at locations where the fault current is either too high, or too
 * low, for proper coordination of fuses.
 */
class Sectionaliser : public Switch
{

public:
	Sectionaliser();
	virtual ~Sectionaliser();

};
#endif // !defined(EA_FE05D929_9EB6_443a_B5A1_5F975B5F658A__INCLUDED_)
