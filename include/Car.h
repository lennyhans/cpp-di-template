#ifndef Car_H
#define Car_H

#include "GasolineSource.h"

class Car {
    GasolineSource *gasolineService;
public:
    // The dependency for a source of gasoline is passed in
    // through constructor injection
    // as opposed to hard-coded into the class definition.
    Car(GasolineSource *service);
    void getGasoline();
};

#endif
