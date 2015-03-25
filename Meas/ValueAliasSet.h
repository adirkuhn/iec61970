///////////////////////////////////////////////////////////
//  ValueAliasSet.h
//  Implementation of the Class ValueAliasSet
//  Created on:      07-fev-2014 11:44:34
///////////////////////////////////////////////////////////

#if !defined(EA_14CCA9A7_73B8_4c9b_97CA_344F86460E6B__INCLUDED_)
#define EA_14CCA9A7_73B8_4c9b_97CA_344F86460E6B__INCLUDED_

#include "IdentifiedObject.h"
#include "ValueToAlias.h"

class Discrete;

/**
 * Describes the translation of a set of values into a name and is intendend to
 * facilitate cusom translations. Each ValueAliasSet has a name, description etc.
 * A specific Measurement may represent a discrete state like Open, Closed,
 * Intermediate etc. This requires a translation from the MeasurementValue.value
 * number to a string, e.g. 0->"Invalid", 1->"Open", 2->"Closed", 3-
 * >"Intermediate". Each ValueToAlias member in ValueAliasSet.Value describe a
 * mapping for one particular value to a name.
 */
class ValueAliasSet : public IdentifiedObject
{

public:
	ValueAliasSet();
	virtual ~ValueAliasSet();
	/**
	 * The ValueToAlias mappings included in the set.
	 */
	QList<ValueToAlias> *Values;
	/**
	 * The Measurements using the set for translation.
	 */
	QList<Discrete> *Discretes;

};
#endif // !defined(EA_14CCA9A7_73B8_4c9b_97CA_344F86460E6B__INCLUDED_)
