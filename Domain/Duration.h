///////////////////////////////////////////////////////////
//  Duration.h
//  Implementation of the Class Duration
//  Created on:      07-fev-2014 11:43:41
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_507378D8_823F_4d81_8858_D3B220E23A9F__INCLUDED_)
#define EA_507378D8_823F_4d81_8858_D3B220E23A9F__INCLUDED_

/**
 * Duration as "PnYnMnDTnHnMnS" which conforms to ISO 8601, where nY expresses a
 * number of years, nM a number of months, nD a number of days. The letter T
 * separates the date expression from the time expression and, after it, nH
 * identifies a number of hours, nM a number of minutes and nS a number of seconds.
 * The number of seconds could be expressed as a decimal number, but all other
 * numbers are integers.
 */
class Duration
{

public:
	Duration();
	virtual ~Duration();

};
#endif // !defined(EA_507378D8_823F_4d81_8858_D3B220E23A9F__INCLUDED_)
