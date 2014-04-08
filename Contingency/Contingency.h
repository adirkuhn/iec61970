///////////////////////////////////////////////////////////
//  Contingency.h
//  Implementation of the Class Contingency
//  Created on:      07-fev-2014 11:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_05C09DAA_1DB2_4ad9_AE86_FA67E685461D__INCLUDED_)
#define EA_05C09DAA_1DB2_4ad9_AE86_FA67E685461D__INCLUDED_

#include <QList>

#include "IdentifiedObject.h"

#include "Boolean.h"
#include "ContingencyElement.h"

/**
 * An event threatening system reliability, consisting of one or more contingency
 * elements.
 */
class Contingency : public IdentifiedObject
{

public:
	Contingency();
	virtual ~Contingency();

	/**
	 * Set true if must study this contingency.
	 */
	Boolean mustStudy;

    /**
	 * A contingency can have any number of contingency elements.
	 */
    QList<ContingencyElement> contingencyElement;
};
#endif // !defined(EA_05C09DAA_1DB2_4ad9_AE86_FA67E685461D__INCLUDED_)
