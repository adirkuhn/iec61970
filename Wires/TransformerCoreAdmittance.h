///////////////////////////////////////////////////////////
//  TransformerCoreAdmittance.h
//  Implementation of the Class TransformerCoreAdmittance
//  Created on:      07-fev-2014 11:44:33
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_884A93BF_DC56_46c6_9C59_64C5F4CA9802__INCLUDED_)
#define EA_884A93BF_DC56_46c6_9C59_64C5F4CA9802__INCLUDED_

#include <QList>

#include "Susceptance.h"
#include "Conductance.h"
#include "TransformerEnd.h"
#include "IdentifiedObject.h"

/**
 * The transformer core admittance.  Used to specify the core admittance of a
 * transformer in a manner that can be shared among power transformers.
 */
class TransformerCoreAdmittance : public IdentifiedObject
{

public:
	TransformerCoreAdmittance();
	virtual ~TransformerCoreAdmittance();

	/**
	 * Magnetizing branch susceptance (B mag).  The value can be positive or negative.
	 */
	Susceptance b;

	/**
	 * Zero sequence magnetizing branch susceptance.
	 */
	Susceptance b0;

	/**
	 * Magnetizing branch conductance (G mag).
	 */
	Conductance g;

	/**
	 * Zero sequence magnetizing branch conductance.
	 */
	Conductance g0;

	/**
	 * All transformer ends having this core admittance.
	 */
    QList<TransformerEnd> transformerEnds;
};
#endif // !defined(EA_884A93BF_DC56_46c6_9C59_64C5F4CA9802__INCLUDED_)
