///////////////////////////////////////////////////////////
//  CoolantType.h
//  Implementation of the Class CoolantType
//  Created on:      07-fev-2014 11:43:37
///////////////////////////////////////////////////////////

#if !defined(EA_C5F07DF2_92FC_41e8_BD19_506E68236E91__INCLUDED_)
#define EA_C5F07DF2_92FC_41e8_BD19_506E68236E91__INCLUDED_

class CoolantType
{
public:
/**
 * Method of cooling a machine.
 */
typedef enum
{
	/**
	 * Air.
	 */
	air,
	/**
	 * Hydrogen gas.
	 */
	hydrogenGas,
	/**
	 * Water.
	 */
	water
} enum_type;

private:
    enum_type val;

public:
    CoolantType( enum_type val = water )
        : val( val )
    {
        assert( val <= water );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_C5F07DF2_92FC_41e8_BD19_506E68236E91__INCLUDED_)
