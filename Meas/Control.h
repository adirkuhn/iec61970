///////////////////////////////////////////////////////////
//  Control.h
//  Implementation of the Class Control
//  Created on:      07-fev-2014 11:43:36
///////////////////////////////////////////////////////////

#if !defined(EA_DA49DA28_14C6_4d97_BD6C_A81599CB7801__INCLUDED_)
#define EA_DA49DA28_14C6_4d97_BD6C_A81599CB7801__INCLUDED_

#include "Boolean.h"
#include "DateTime.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "IdentifiedObject.h"

/**
 * Control is used for supervisory/device control. It represents control outputs
 * that are used to change the state in a process, e.g. close or open breaker, a
 * set point value or a raise lower command.
 */
class Control : public IdentifiedObject
{

public:
	Control();
	virtual ~Control();
	/**
	 * Indicates that a client is currently sending control commands that has not
	 * completed.
	 */
	Boolean operationInProgress;
	/**
	 * The last time a control output was sent.
	 */
	DateTime timeStamp;
	/**
	 * The unit multiplier of the controlled quantity.
	 */
	UnitMultiplier unitMultiplier;
	/**
	 * The unit of measure of the controlled quantity.
	 */
	UnitSymbol unitSymbol;

};
#endif // !defined(EA_DA49DA28_14C6_4d97_BD6C_A81599CB7801__INCLUDED_)
