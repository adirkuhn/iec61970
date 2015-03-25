///////////////////////////////////////////////////////////
//  Diagram.h
//  Implementation of the Class Diagram
//  Created on:      07-fev-2014 11:43:40
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_342F7A58_4705_4a55_8D00_6FB98F610B5A__INCLUDED_)
#define EA_342F7A58_4705_4a55_8D00_6FB98F610B5A__INCLUDED_

#include "OrientationKind.h"
#include "lFloat.h"
#include "IdentifiedObject.h"

/**
 * The diagram being exchanged.  The coordinate system is a standard Cartesian
 * coordinate system and the orientation attribute defines the orientation.
 */
class Diagram : public IdentifiedObject
{

public:
	Diagram();
	virtual ~Diagram();
	/**
	 * Coordinate system orientation of the diagram.
	 */
	OrientationKind orientation;
	/**
	 * X coordinate of the first corner of the initial view.
	 */
	Float x1InitialView;
	/**
	 * X coordinate of the second corner of the initial view.
	 */
	Float x2InitialView;
	/**
	 * Y coordinate of the first corner of the initial view.
	 */
	Float y1InitialView;
	/**
	 * Y coordinate of the second corner of the initial view.
	 */
	Float y2InitialView;

};
#endif // !defined(EA_342F7A58_4705_4a55_8D00_6FB98F610B5A__INCLUDED_)
