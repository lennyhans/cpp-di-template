#include "Car.h"
#include "GasStation.h"
#include "FuelCan.h"

int main() {

    GasolineSource *stationService = new GasStation();
    GasolineSource *canService = new FuelCan();

    // racecar is independent from the implementation of the fuel service.
    // a gas station service is injected.
    Car racecar(stationService);
    racecar.getGasoline();

    // dune buggy is independent from the implementation of the fuel service.
    // a fuel can service is injected.
    Car duneBuggy(canService);
    duneBuggy.getGasoline();

    delete stationService;
    delete canService;
    return 0;
}

