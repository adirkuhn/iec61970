///////////////////////////////////////////////////////////
//  Time.h
//  Implementation of the Class Time
//  Created on:      07-fev-2014 11:44:32
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_D8046302_C04B_4416_989F_651ED782848D__INCLUDED_)
#define EA_D8046302_C04B_4416_989F_651ED782848D__INCLUDED_

/**
 * Time as "hh:mm:ss.sss", which conforms with ISO 8601. UTC time zone is
 * specified as "hh:mm:ss.sssZ". A local timezone relative UTC is specified as "hh:
 * mm:ss.sss±hh:mm".
 */
class Time
{

public:
	Time();
	virtual ~Time();

};
#endif // !defined(EA_D8046302_C04B_4416_989F_651ED782848D__INCLUDED_)
