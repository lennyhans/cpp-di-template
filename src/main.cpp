#include "Car.hpp"
#include "GasStation.hpp"
#include "FuelCan.hpp"
#include <iostream>
#include <memory>
/*
 * Reference code
 * https://www.codymorterud.com/design/2018/09/07/dependency-injection-cpp.html
 *
 * Useful reference as well
 * https://vladris.com/blog/2016/07/06/dependency-injection-in-c.html
*/
int main() {

    // As seen in https://github.com/lefticus/cppbestpractices/blob/master/04-Considering_Safety.md
    std::unique_ptr<GasolineSource> stationService = std::unique_ptr<GasolineSource>(new GasStation());
    auto canService = std::unique_ptr<GasolineSource>(new FuelCan());
    //GasolineSource *canService = new FuelCan();
    canService->fuel_available = 10;

    // racecar is independent from the implementation of the fuel service.
    // a gas station service is injected.
    // How to pass the cpp pointer ? https://stackoverflow.com/a/30905560
    std::unique_ptr<Car> racecar = std::unique_ptr<Car>(new Car(stationService.get()));
    racecar->getGasoline();

    // dune buggy is independent from the implementation of the fuel service.
    // a fuel can service is injected.
    std::unique_ptr<Car> duneBuggy = std::unique_ptr<Car>(new Car(canService.get()));
    duneBuggy->m_gas_needed = 5;
    duneBuggy->getGasoline();
    std::cout << "Loaded gas: " << duneBuggy->m_last_gas_amount << std::endl;
    return 0;
}

