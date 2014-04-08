///////////////////////////////////////////////////////////
//  SynchronousMotorType.h
//  Implementation of the Class SynchronousMotorType
//  Created on:      07-fev-2014 11:44:30
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_27BEEB49_216F_4e4e_8AB0_F8FB8700207F__INCLUDED_)
#define EA_27BEEB49_216F_4e4e_8AB0_F8FB8700207F__INCLUDED_

namespace SynchronousMotorTypeEnum
{
/**
 * Type of synchronous motor.
 */
enum Type
{
	/**
	 * Has alias of genrou.
	 */
	roundRotor,
	/**
	 * Has alias of gensal.
	 */
	salientPole
};
};

typedef enum SynchronousMotorTypeEnum::Type SynchronousMotorType;

#endif // !defined(EA_27BEEB49_216F_4e4e_8AB0_F8FB8700207F__INCLUDED_)
