#ifndef GasStation_H
#define GasStation_H

#include "GasolineSource.h"

class GasStation : public GasolineSource {
public:
    void FuelUp();
};

#endif
