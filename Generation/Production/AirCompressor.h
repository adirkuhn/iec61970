///////////////////////////////////////////////////////////
//  AirCompressor.h
//  Implementation of the Class AirCompressor
//  Created on:      07-fev-2014 11:43:27
///////////////////////////////////////////////////////////

#if !defined(EA_52E5682F_4382_49d9_90CA_BF5D847BC3B6__INCLUDED_)
#define EA_52E5682F_4382_49d9_90CA_BF5D847BC3B6__INCLUDED_

#include "Float.h"
#include "PowerSystemResource.h"

/**
 * Combustion turbine air compressor which is an integral part of a compressed air
 * energy storage (CAES) plant.
 */
class AirCompressor : public PowerSystemResource
{

public:
	AirCompressor();
	virtual ~AirCompressor();
	/**
	 * Rating of the CAES air compressor.
	 */
	Float airCompressorRating;

};
#endif // !defined(EA_52E5682F_4382_49d9_90CA_BF5D847BC3B6__INCLUDED_)
