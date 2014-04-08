///////////////////////////////////////////////////////////
//  SteamTurbine.h
//  Implementation of the Class SteamTurbine
//  Created on:      07-fev-2014 11:44:26
///////////////////////////////////////////////////////////

#if !defined(EA_EE6F8CCC_EA35_48f8_915A_980CC498DDEB__INCLUDED_)
#define EA_EE6F8CCC_EA35_48f8_915A_980CC498DDEB__INCLUDED_

#include "Seconds.h"
#include "Float.h"
#include "PrimeMover.h"

/**
 * Steam turbine.
 */
class SteamTurbine : public PrimeMover
{

public:
	SteamTurbine();
	virtual ~SteamTurbine();
	/**
	 * Crossover time constant.
	 */
	Seconds crossoverTC;
	/**
	 * First reheater time constant.
	 */
	Seconds reheater1TC;
	/**
	 * Second reheater time constant.
	 */
	Seconds reheater2TC;
	/**
	 * Fraction of power from shaft 1 high pressure turbine output.
	 */
	Float shaft1PowerHP;
	/**
	 * Fraction of power from shaft 1 intermediate pressure turbine output.
	 */
	Float shaft1PowerIP;
	/**
	 * Fraction of power from shaft 1 first low pressure turbine output.
	 */
	Float shaft1PowerLP1;
	/**
	 * Fraction of power from shaft 1 second low pressure turbine output.
	 */
	Float shaft1PowerLP2;
	/**
	 * Fraction of power from shaft 2 high pressure turbine output.
	 */
	Float shaft2PowerHP;
	/**
	 * Fraction of power from shaft 2 intermediate pressure turbine output.
	 */
	Float shaft2PowerIP;
	/**
	 * Fraction of power from shaft 2 first low pressure turbine output.
	 */
	Float shaft2PowerLP1;
	/**
	 * Fraction of power from shaft 2 second low pressure turbine output.
	 */
	Float shaft2PowerLP2;
	/**
	 * Steam chest time constant.
	 */
	Seconds steamChestTC;

};
#endif // !defined(EA_EE6F8CCC_EA35_48f8_915A_980CC498DDEB__INCLUDED_)
