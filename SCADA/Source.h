///////////////////////////////////////////////////////////
//  Source.h
//  Implementation of the Class Source
//  Created on:      07-fev-2014 11:44:24
///////////////////////////////////////////////////////////

#if !defined(EA_AC781FF5_E9D4_452b_BD45_1B75BB0EBB47__INCLUDED_)
#define EA_AC781FF5_E9D4_452b_BD45_1B75BB0EBB47__INCLUDED_

/**
 * Source gives information related to the origin of a value.
 */
enum Source
{
	/**
	 * The value is provided by input from the process I/O or being calculated from
	 * some function.
	 */
	PROCESS,
	/**
	 * The value contains a default value.
	 */
	DEFAULTED,
	/**
	 * The value is provided by input of an operator or by an automatic source.
	 */
	SUBSTITUTED
};
#endif // !defined(EA_AC781FF5_E9D4_452b_BD45_1B75BB0EBB47__INCLUDED_)
