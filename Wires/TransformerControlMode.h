///////////////////////////////////////////////////////////
//  TransformerControlMode.h
//  Implementation of the Class TransformerControlMode
//  Created on:      07-fev-2014 11:44:33
///////////////////////////////////////////////////////////

#if !defined(EA_B3E0903C_17AB_4867_8E4C_0DE337A11FE3__INCLUDED_)
#define EA_B3E0903C_17AB_4867_8E4C_0DE337A11FE3__INCLUDED_

#include <cassert>

class TransformerControlMode
{
public:
/**
 * Control modes for a transformer.
 */
typedef enum
{
	/**
	 * Voltage control
	 */
	volt,
	/**
	 * Reactive power flow control
	 */
	reactive
} enum_type;

private:
    enum_type val;

public:
    TransformerControlMode( enum_type val = volt )
        : val( val )
    {
        assert( val <= reactive );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_B3E0903C_17AB_4867_8E4C_0DE337A11FE3__INCLUDED_)
