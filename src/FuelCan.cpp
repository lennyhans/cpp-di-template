#include <iostream>
#include "FuelCan.hpp"

/// Static messages variables
constexpr char FuelCan::MSG_ERR_EMPTY_CAN[] = "The can is empty, try filling it!";

int FuelCan::FuelUp(const int fuel_amount) {
    std::cout << "Pumping gas from fuel can" << std::endl;
    if(fuel_amount == 0)
        return 0;
    if( fuel_available == 0 )
        throw std::out_of_range(FuelCan::MSG_ERR_EMPTY_CAN);

    int loaded = fuel_available > fuel_amount ? fuel_available - fuel_amount : fuel_amount - fuel_available;
    return loaded;
}
