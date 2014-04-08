///////////////////////////////////////////////////////////
//  DateTime.h
//  Implementation of the Class DateTime
//  Created on:      07-fev-2014 11:43:39
///////////////////////////////////////////////////////////

#if !defined(EA_B83057A4_8F51_4fcb_9424_AB6A1B833E7E__INCLUDED_)
#define EA_B83057A4_8F51_4fcb_9424_AB6A1B833E7E__INCLUDED_

#include <QDateTime>

/**
 * Date and time as "yyyy-mm-ddThh:mm:ss.sss", which conforms with ISO 8601. UTC
 * time zone is specified as "yyyy-mm-ddThh:mm:ss.sssZ". A local timezone relative
 * UTC is specified as "yyyy-mm-ddThh:mm:ss.sss-hh:mm".
 */
class DateTime
{
public:
    QDateTime val;

public:
	DateTime();
	virtual ~DateTime();

};
#endif // !defined(EA_B83057A4_8F51_4fcb_9424_AB6A1B833E7E__INCLUDED_)
