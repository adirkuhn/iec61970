///////////////////////////////////////////////////////////
//  UnitMultiplier.h
//  Implementation of the Class UnitMultiplier
//  Created on:      07-fev-2014 11:44:34
///////////////////////////////////////////////////////////

#if !defined(EA_1690A3DC_FE6E_4c7b_83EA_EE5EFB8D0938__INCLUDED_)
#define EA_1690A3DC_FE6E_4c7b_83EA_EE5EFB8D0938__INCLUDED_

#include <cassert>

class UnitMultiplier
{
public:
/**
 * The unit multipliers defined for the CIM.
 */
typedef enum
{
	/**
	 * Pico 10**-12.
	 */
	p,
	/**
	 * Nano 10**-9.
	 */
	n,
	/**
	 * Micro 10**-6.
	 */
	micro,
	/**
	 * Milli 10**-3.
	 */
	m,
	/**
	 * Centi 10**-2.
	 */
	c,
	/**
	 * Deci 10**-1.
	 */
	d,
	/**
	 * Kilo 10**3.
	 */
	k,
	/**
	 * Mega 10**6.
	 */
	M,
	/**
	 * Giga 10**9.
	 */
	G,
	/**
	 * Tera 10**12.
	 */
	T,
	/**
	 * No multiplier or equivalently multiply by 1.
	 */
	none
} enum_type;

private:
    enum_type val;

public:
    UnitMultiplier( enum_type val = k )
        : val( val )
    {
        assert( val <= none );
    }

    operator enum_type() const
    {
        return val;
    }
};

#endif // !defined(EA_1690A3DC_FE6E_4c7b_83EA_EE5EFB8D0938__INCLUDED_)
