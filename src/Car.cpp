#include <iostream>
#include "GasolineSource.hpp"
#include "Car.hpp"



// The dependency for a source of gasoline is passed in
// through constructor injection
// as opposed to hard-coded into the class definition.
Car::Car(GasolineSource *service)
: gasolineService(service) {
    // If the dependency was not defined, throw an exception.
    if(gasolineService == nullptr){
        throw std::invalid_argument("service must not be null");
    }
}

/**
 * Fill up gasoline (could be fill up with energy?)
*/
void Car::getGasoline() {
    std::cout << "Car needs more gasoline!" << std::endl;
    // Abstract away the dependency implementation with polymorphism.
    m_last_gas_amount = gasolineService->FuelUp(m_gas_needed);
}

/**
 * Move the cars the specified meters
 * @param meters Specify the meters that should move the car.
 * @return int the amount of the gas consumed
*/
int Car::move(int meters){
    int consumed_gas = meters / m_performance;
    this->m_gasoline = this->m_gasoline - consumed_gas;
    return consumed_gas;
}

