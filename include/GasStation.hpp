#ifndef GasStation_H
#define GasStation_H

#include "GasolineSource.hpp"

class GasStation : public GasolineSource {
public:
    int FuelUp(const int fuel_amount) override;
};

#endif
