///////////////////////////////////////////////////////////
//  IEC61970CIMVersion.h
//  Implementation of the Class IEC61970CIMVersion
//  Created on:      07-fev-2014 11:44:01
///////////////////////////////////////////////////////////

#if !defined(EA_577DC3EB_C0D1_4682_B5D6_D26F08CDEEEC__INCLUDED_)
#define EA_577DC3EB_C0D1_4682_B5D6_D26F08CDEEEC__INCLUDED_

#include <QDateTime>
#include <QString>

/**
 * This is the IEC 61970 CIM version number assigned to this UML model.
 */
class IEC61970CIMVersion
{

public:
	IEC61970CIMVersion();
	virtual ~IEC61970CIMVersion();
	/**
	 * Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05.
	 */
    static const QDateTime date;
	/**
	 * Form is IEC61970CIMXXvYY where XX is the major CIM package version and the YY
	 * is the minor version. For example IEC61970CIM13v18.
	 */
    static const QString version;

};
#endif // !defined(EA_577DC3EB_C0D1_4682_B5D6_D26F08CDEEEC__INCLUDED_)
