///////////////////////////////////////////////////////////
//  DiagramObjectGluePoint.h
//  Implementation of the Class DiagramObjectGluePoint
//  Created on:      07-fev-2014 11:43:40
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_8B708EF3_6A34_459f_A677_41C8CFA10176__INCLUDED_)
#define EA_8B708EF3_6A34_459f_A677_41C8CFA10176__INCLUDED_

/**
 * This is used for grouping diagram object points from different diagram objects
 * that are considered to be glued together in a diagram even if they are not at
 * the exact same coordinates.
 */
class DiagramObjectGluePoint
{

public:
	DiagramObjectGluePoint();
	virtual ~DiagramObjectGluePoint();

};
#endif // !defined(EA_8B708EF3_6A34_459f_A677_41C8CFA10176__INCLUDED_)
