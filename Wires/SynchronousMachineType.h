///////////////////////////////////////////////////////////
//  SynchronousMachineType.h
//  Implementation of the Class SynchronousMachineType
//  Created on:      07-fev-2014 11:44:30
///////////////////////////////////////////////////////////

#if !defined(EA_C9C1A68E_A218_4527_8CB7_635E6E9216B1__INCLUDED_)
#define EA_C9C1A68E_A218_4527_8CB7_635E6E9216B1__INCLUDED_

class SynchronousMachineType
{
public:
/**
 * Synchronous machine type.
 */
typedef enum
{
	generator,
	condenser,
	generator_or_condenser
} enum_type;

private:
    enum_type val;

public:
    SynchronousMachineType( enum_type val = generator )
        : val( val )
    {
        assert( val <= generator_or_condenser );
    }

    operator enum_type() const
    {
        return val;
    }
};

#endif // !defined(EA_C9C1A68E_A218_4527_8CB7_635E6E9216B1__INCLUDED_)
