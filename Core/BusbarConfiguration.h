///////////////////////////////////////////////////////////
//  BusbarConfiguration.h
//  Implementation of the Class BusbarConfiguration
//  Created on:      07-fev-2014 11:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_3ACB0FDB_0CE8_407d_8479_6FDF7194E01D__INCLUDED_)
#define EA_3ACB0FDB_0CE8_407d_8479_6FDF7194E01D__INCLUDED_

#include <cassert>

class BusbarConfiguration
{
public:
/**
 * Busbar layout for bay.
 */
typedef enum
{
	/**
	 * Single bus.
	 */
	singleBus,
	/**
	 * Double bus.
	 */
	doubleBus,
	/**
	 * Main bus with transfer bus.
	 */
	mainWithTransfer,
	/**
	 * Ring bus.
	 */
	ringBus
} enum_type;

private:
    enum_type val;

public:
    BusbarConfiguration( enum_type val = doubleBus )
        : val( val )
    {
        assert( val <= ringBus );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_3ACB0FDB_0CE8_407d_8479_6FDF7194E01D__INCLUDED_)
