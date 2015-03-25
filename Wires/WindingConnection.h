///////////////////////////////////////////////////////////
//  WindingConnection.h
//  Implementation of the Class WindingConnection
//  Created on:      07-fev-2014 11:44:36
///////////////////////////////////////////////////////////

#if !defined(EA_DD6FAD7C_86EB_4edc_AC90_415C3B72711C__INCLUDED_)
#define EA_DD6FAD7C_86EB_4edc_AC90_415C3B72711C__INCLUDED_

#include <cassert>

class WindingConnection
{
public:
/**
 * Winding connection type.
 */
typedef enum
{
	/**
	 * Delta
	 */
	D,
	/**
	 * Wye
	 */
	Y,
	/**
	 * ZigZag
	 */
	Z,
	/**
	 * Wye, with neutral brought out for grounding.
	 */
	Yn,
	/**
	 * ZigZag, with neutral brought out for grounding.
	 */
	Zn,
	/**
	 * Autotransformer common winding
	 */
	A,
	/**
	 * Independent winding, for single-phase connections
	 */
	I
} enum_type;

private:
    enum_type val;

public:
    WindingConnection( enum_type val = Y )
        : val( val )
    {
        assert( val <= I );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_DD6FAD7C_86EB_4edc_AC90_415C3B72711C__INCLUDED_)
