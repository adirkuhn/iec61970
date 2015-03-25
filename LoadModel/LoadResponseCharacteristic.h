///////////////////////////////////////////////////////////
//  LoadResponseCharacteristic.h
//  Implementation of the Class LoadResponseCharacteristic
//  Created on:      07-fev-2014 11:44:05
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_5144B6B3_F320_4982_87B2_BF78E45B9D68__INCLUDED_)
#define EA_5144B6B3_F320_4982_87B2_BF78E45B9D68__INCLUDED_

#include "Boolean.h"
#include "lFloat.h"
#include "IdentifiedObject.h"

/**
 * Models the characteristic response of the load demand due to to changes in
 * system conditions such as voltage and frequency. This is not related to demand
 * response.
 * 
 * If LoadResponseCharacteristic.exponentModel is True, the voltage exponents are
 * specified and used as to calculate:
 * 
 * Active power component = Pnominal * (Voltage/cim:BaseVoltage.nominalVoltage) **
 * cim:LoadResponseCharacteristic.pVoltageExponent
 * 
 * Reactive power component = Qnominal * (Voltage/cim:BaseVoltage.
 * nominalVoltage)** cim:LoadResponseCharacteristic.qVoltageExponent
 * 
 * Where  * means "multiply" and ** is "raised to power of".
 */
class LoadResponseCharacteristic : public IdentifiedObject
{

public:
	LoadResponseCharacteristic();
	virtual ~LoadResponseCharacteristic();

	/**
	 * Indicates the exponential voltage dependency model (pVoltateExponent and
	 * qVoltageExponent) is to be used.   If false, the coeficient model (consisting
	 * of pConstantImpedance, pConstantCurrent, pConstantPower, qConstantImpedance,
	 * qConstantCurrent, and qConstantPower) is to be used.
	 */
	Boolean exponentModel;

	/**
	 * Portion of active power load modeled as constant current. Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of pZ, pI,
	 * and pP.
	 */
	Float pConstantCurrent;

	/**
	 * Portion of active power load modeled as constant impedance.  Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of pZ, pI,
	 * and pP.
	 */
	Float pConstantImpedance;

	/**
	 * Portion of active power load modeled as constant power. Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of pZ, pI,
	 * and pP.
	 */
	Float pConstantPower;

	/**
	 * Exponent of per unit frequency effecting active power.
	 */
	Float pFrequencyExponent;

	/**
	 * Exponent of per unit voltage effecting real power.   This model used only when
	 * "useExponentModel" is true.
	 */
	Float pVoltageExponent;

	/**
	 * Portion of reactive power load modeled as constant current. Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of qZ, qI,
	 * and qP.
	 */
	Float qConstantCurrent;

	/**
	 * Portion of reactive power load modeled as constant impedance.  Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of qZ, qI,
	 * and qP.
	 */
	Float qConstantImpedance;

	/**
	 * Portion of reactive power load modeled as constant power. Used only if the
	 * useExponentModel is false.    This value is noralized against the sum of qZ, qI,
	 * and qP.
	 */
	Float qConstantPower;

	/**
	 * Exponent of per unit frequency effecting reactive power.
	 */
	Float qFrequencyExponent;

	/**
	 * Exponent of per unit voltage effecting reactive power.   This model used only
	 * when "useExponentModel" is true.
	 */
	Float qVoltageExponent;
};
#endif // !defined(EA_5144B6B3_F320_4982_87B2_BF78E45B9D68__INCLUDED_)
