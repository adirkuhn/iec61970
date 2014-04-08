///////////////////////////////////////////////////////////
//  LoadStatic.h
//  Implementation of the Class LoadStatic
//  Created on:      07-fev-2014 11:44:05
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_810079A7_462D_4cdf_8127_3F0E04293A19__INCLUDED_)
#define EA_810079A7_462D_4cdf_8127_3F0E04293A19__INCLUDED_

#include "Float.h"
#include "StaticLoadType.h"
#include "AggregateLoad.h"

/**
 * General Static Load Model. A static load model represents the sensitivity of
 * the real and reactive power consumed by the load to the amplitude and frequency
 * of the bus voltage.
 */
class LoadStatic : public AggregateLoad
{

public:
	LoadStatic();
	virtual ~LoadStatic();
	Float ep1;
	Float ep2;
	Float ep3;
	Float eq1;
	Float eq2;
	Float eq3;
	Float kp1;
	Float kp2;
	Float kp3;
	Float kp4;
	Float kpf;
	Float kq1;
	Float kq2;
	Float kq3;
	Float kq4;
	Float kqf;
	/**
	 * Type of static load model
	 */
	StaticLoadType staticLoadType;

};
#endif // !defined(EA_810079A7_462D_4cdf_8127_3F0E04293A19__INCLUDED_)
