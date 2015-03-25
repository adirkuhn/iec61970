///////////////////////////////////////////////////////////
//  UnitSymbol.h
//  Implementation of the Class UnitSymbol
//  Created on:      07-fev-2014 11:44:34
///////////////////////////////////////////////////////////

#if !defined(EA_7405F99F_E6B1_46e9_84F5_6D5C92E1F2D3__INCLUDED_)
#define EA_7405F99F_E6B1_46e9_84F5_6D5C92E1F2D3__INCLUDED_

#include <cassert>

class UnitSymbol
{
public:
/**
 * The units defiend for usage in the CIM.
 */
typedef enum
{
	/**
	 * Apparent power in volt ampere.
	 */
	VA,
	/**
	 * Active power in watt.
	 */
	W,
	/**
	 * Reactive power in volt ampere reactive.
	 */
	VAr,
	/**
	 * Apparent energy in volt ampere hours.
	 */
	VAh,
	/**
	 * Real energy in what hours.
	 */
	Wh,
	/**
	 * Reactive energy in volt ampere reactive hours.
	 */
	VArh,
	/**
	 * Voltage in volt.
	 */
	V,
	/**
	 * Resistance in ohm.
	 */
	ohm,
	/**
	 * Current in ampere.
	 */
	A,
	/**
	 * Capacitance in farad.
	 */
	F,
	/**
	 * Inductance in henry.
	 */
	H,
	/**
	 * Relative temperature in degrees Celsius. In the SI unit system the symbol is ºC.
	 * Electric charge is measured in coulomb that has the unit symbol C. To
	 * destinguish degree Celsius form coulomb the symbol used in the UML is degC.
	 * Reason for not using ºC is the special character º is difficult to manage in
	 * software.
	 */
	degC,
	/**
	 * Time in seconds.
	 */
	s,
	/**
	 * Time in minutes.
	 */
	min,
	/**
	 * Time in hours.
	 */
	h,
	/**
	 * Plane angle in degrees.
	 */
	deg,
	/**
	 * Plane angle in radians.
	 */
	rad,
	/**
	 * Energy in joule.
	 */
	J,
	/**
	 * Force in newton.
	 */
	N,
	/**
	 * Conductance in siemens.
	 */
	S,
	/**
	 * Dimension less quantity, e.g. count, per unit, etc.
	 */
	none,
	/**
	 * Frequency in hertz.
	 */
	Hz,
	/**
	 * Mass in gram.
	 */
	g,
	/**
	 * Pressure in pascal (n/m2).
	 */
	Pa,
	/**
	 * Length in meter.
	 */
	m,
	/**
	 * Area in square meters.
	 */
	m2,
	/**
	 * Volume in cubic meters.
	 */
	m3
} enum_type;

private:
    enum_type val;

public:
    UnitSymbol( enum_type val = V )
        : val( val )
    {
        assert( val <= m3 );
    }

    operator enum_type() const
    {
        return val;
    }
};
#endif // !defined(EA_7405F99F_E6B1_46e9_84F5_6D5C92E1F2D3__INCLUDED_)
