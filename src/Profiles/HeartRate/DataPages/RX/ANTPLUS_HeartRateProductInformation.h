#ifndef ANTPLUS_HEARTRATEPRODUCTIONINFORMATION_h
#define ANTPLUS_HEARTRATEPRODUCTIONINFORMATION_h

#include <Profiles/HeartRate/DataPages/Base/ANTPLUS_HeartRateBaseMainDataPage.h>

#include "ANT.h"

class HeartRateProductionInformation : public HeartRateBaseMainDataPage {
public:
    HeartRateProductionInformation();
    uint8_t getHardwareVersion();
    uint8_t getSoftwareVersion();
    uint8_t getModelNumber();
};

#endif // ANTPLUS_HEARTRATEPRODUCTIONINFORMATION_h