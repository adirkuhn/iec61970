///////////////////////////////////////////////////////////
//  MetaBlockConnection.h
//  Implementation of the Class MetaBlockConnection
//  Created on:      07-fev-2014 11:44:07
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_A4E6ABF1_C419_47d8_AAE7_6DBECDC6B9BE__INCLUDED_)
#define EA_A4E6ABF1_C419_47d8_AAE7_6DBECDC6B9BE__INCLUDED_

#include "String.h"
#include "MetaBlockConInput.h"
#include "MetaBlockConOutput.h"
#include "IdentifiedObject.h"

class MetaBlockConnection : public IdentifiedObject
{

public:
	MetaBlockConnection();
	virtual ~MetaBlockConnection();
	/**
	 * Used for standard connection situations where multiple blocks of same class or
	 * same MetaBlock::blockkind have to be connected. The slotnames used are defined
	 * in the Reference Manual for Exchanging Standard Power System Dynamic Models.
	 * Application: Cross-compound or Combined Cycle connections.
	 */
	String slotname;
	/**
	 * The meta block connection inputs of the meta block connection.
	 */
    QList<MetaBlockConInput> *MetaBlockConInputs;
	/**
	 * Meta block connection outputs.
	 */
    QList<MetaBlockConOutput> *MetaBlockConOutputs;

};
#endif // !defined(EA_A4E6ABF1_C419_47d8_AAE7_6DBECDC6B9BE__INCLUDED_)
