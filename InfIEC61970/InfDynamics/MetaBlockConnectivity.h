///////////////////////////////////////////////////////////
//  MetaBlockConnectivity.h
//  Implementation of the Class MetaBlockConnectivity
//  Created on:      07-fev-2014 11:44:07
//  Original author: cschmid
///////////////////////////////////////////////////////////

#if !defined(EA_77DB19AC_61E7_4659_A006_1A832AC46D02__INCLUDED_)
#define EA_77DB19AC_61E7_4659_A006_1A832AC46D02__INCLUDED_

#include "MetaBlockConSignal.h"
#include "IdentifiedObject.h"
#include "MetaBlockConnection.h"

class MetaBlockConnectivity : public IdentifiedObject
{

public:
	MetaBlockConnectivity();
	virtual ~MetaBlockConnectivity();
	/**
	 * Meta block connection signal.
	 */
    QList<MetaBlockConSignal> *MetaBlockConSignals;
	/**
	 * Meta block connections.
	 */
    QList<MetaBlockConnection> *MetaBlockConnections;

};
#endif // !defined(EA_77DB19AC_61E7_4659_A006_1A832AC46D02__INCLUDED_)
