///////////////////////////////////////////////////////////
//  lFloat.h
//  Implementation of the Class Float
//  Created on:      07-fev-2014 11:43:50
///////////////////////////////////////////////////////////

#if !defined(EA_15C2FDC7_D187_4d10_B67D_6AE03A8E59BB__INCLUDED_)
#define EA_15C2FDC7_D187_4d10_B67D_6AE03A8E59BB__INCLUDED_

/**
 * A floating point number. The range is unspecified and not limited.
 */
class Float
{
public:
    float val;

public:
	Float();
    Float( float v );
	virtual ~Float();

};
#endif // !defined(EA_15C2FDC7_D187_4d10_B67D_6AE03A8E59BB__INCLUDED_)
