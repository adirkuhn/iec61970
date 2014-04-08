///////////////////////////////////////////////////////////
//  BreakerConfiguration.h
//  Implementation of the Class BreakerConfiguration
//  Created on:      07-fev-2014 11:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_F1F33FFE_C043_4fa1_9855_E2CC5236F368__INCLUDED_)
#define EA_F1F33FFE_C043_4fa1_9855_E2CC5236F368__INCLUDED_

#include <cassert>

class BreakerConfiguration
{
public:
/**
 * Switching arrangement for bay. 
 */
typedef enum
{
	/**
	 * Single breaker.
	 */
	singleBreaker,
	/**
	 * Breaker and a half.
	 */
	breakerAndAHalf,
	/**
	 * Double breaker.
	 */
	doubleBreaker,
	/**
	 * No breaker.
	 */
	noBreaker
} enum_type;

private:
    enum_type val;

public:
    BreakerConfiguration( enum_type val = breakerAndAHalf )
        : val( val )
    {
        assert( val <= noBreaker );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_F1F33FFE_C043_4fa1_9855_E2CC5236F368__INCLUDED_)
