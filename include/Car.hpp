#ifndef Car_H
#define Car_H

#include "GasolineSource.hpp"

class Car {
    GasolineSource *gasolineService;
public:
    // The dependency for a source of gasoline is passed in
    // through constructor injection
    // as opposed to hard-coded into the class definition.
    Car(GasolineSource *service);
    int m_last_gas_amount;
    int m_gas_needed;
    void getGasoline();
};

#endif
