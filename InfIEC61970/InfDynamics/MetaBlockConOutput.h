///////////////////////////////////////////////////////////
//  MetaBlockConOutput.h
//  Implementation of the Class MetaBlockConOutput
//  Created on:      07-fev-2014 11:44:07
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_404CDAE8_7AF8_44bf_B54D_1CC10A03629A__INCLUDED_)
#define EA_404CDAE8_7AF8_44bf_B54D_1CC10A03629A__INCLUDED_

#include "IdentifiedObject.h"

/**
 * If model uses MeasurementType association, it means the output is pushed back
 * to the steady state model (if reasonable).
 */
class MetaBlockConOutput : public IdentifiedObject
{

public:
	MetaBlockConOutput();
	virtual ~MetaBlockConOutput();

};
#endif // !defined(EA_404CDAE8_7AF8_44bf_B54D_1CC10A03629A__INCLUDED_)
