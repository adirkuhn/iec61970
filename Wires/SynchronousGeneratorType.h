///////////////////////////////////////////////////////////
//  SynchronousGeneratorType.h
//  Implementation of the Class SynchronousGeneratorType
//  Created on:      07-fev-2014 11:44:30
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_7AA5E2F6_34C1_4260_AC5E_C4EA9655FAAC__INCLUDED_)
#define EA_7AA5E2F6_34C1_4260_AC5E_C4EA9655FAAC__INCLUDED_

class SynchronousGeneratorType
{
public:
/**
 * Type of synchronous generator as used in dynamic simulation applications.
 */
typedef enum
{
	/**
	 * Also known as genrou.
	 */
	roundRotor,
	/**
	 * Also known as gensal.
	 */
	salientPole,
	/**
	 * Also known as gentra.
	 */
	transient,
	/**
	 * Also known as typeF.
	 */
	typeF,
	/**
	 * Also known as typeJ.
	 */
	typeJ
} enum_type;

private:
    enum_type val;

public:
    SynchronousGeneratorType( enum_type val = salientPole )
        : val( val )
    {
        assert( val <= typeJ );
    }

    operator enum_type() const
    {
        return val;
    }
};

#endif // !defined(EA_7AA5E2F6_34C1_4260_AC5E_C4EA9655FAAC__INCLUDED_)
