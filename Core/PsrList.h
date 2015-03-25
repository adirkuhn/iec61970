///////////////////////////////////////////////////////////
//  PsrList.h
//  Implementation of the Class PsrList
//  Created on:      07-fev-2014 11:44:16
///////////////////////////////////////////////////////////

#if !defined(EA_C7D05E10_2BFE_47e2_81B5_BC5C85F033B1__INCLUDED_)
#define EA_C7D05E10_2BFE_47e2_81B5_BC5C85F033B1__INCLUDED_

#include "lString.h"
#include "IdentifiedObject.h"
#include "PowerSystemResource.h"

/**
 * Arbitrary list of power system resources. Can be used for various purposes,
 * including grouping for report generation.
 */
class PsrList : public IdentifiedObject
{

public:
	PsrList();
	virtual ~PsrList();
	/**
	 * Type of power system resources in this list.
	 */
	String typePSRList;
	/**
	 * The power system resources in the list.
	 */
	QList<PowerSystemResource> *PowerSystemResources;

};
#endif // !defined(EA_C7D05E10_2BFE_47e2_81B5_BC5C85F033B1__INCLUDED_)
