///////////////////////////////////////////////////////////
//  DiagramObjectPoint.h
//  Implementation of the Class DiagramObjectPoint
//  Created on:      07-fev-2014 11:43:40
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_BD0C4C32_BF9C_4ab9_AD88_2E80FCE13CE7__INCLUDED_)
#define EA_BD0C4C32_BF9C_4ab9_AD88_2E80FCE13CE7__INCLUDED_

#include "Integer.h"
#include "lFloat.h"
#include "DiagramObjectGluePoint.h"

/**
 * A point in a given space defined by 3 coordinates and associated to a diagram
 * object.  The coordinates may be positive or negative as the origin does not
 * have to be in the corner of a diagram.  
 */
class DiagramObjectPoint
{

public:
	DiagramObjectPoint();
	virtual ~DiagramObjectPoint();
	/**
	 * The sequence position of the point, used for defining the order of points for
	 * diagram objects acting as a polyline or polygon with more than one point.
	 */
	Integer sequenceNumber;
	/**
	 * The X coordinate of this point.
	 */
	Float xPosition;
	/**
	 * The Y coordinate of this point.
	 */
	Float yPosition;
	/**
	 * The Z coordinate of this point.
	 */
	Float zPosition;
	/**
	 * The 'glue' point to which this point is associated.
	 */
    DiagramObjectGluePoint *pDiagramObjectGluePoint;

};
#endif // !defined(EA_BD0C4C32_BF9C_4ab9_AD88_2E80FCE13CE7__INCLUDED_)
