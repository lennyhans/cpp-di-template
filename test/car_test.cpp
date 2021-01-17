#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include <string>
#include "Car.h"
#include "GasStation.h"

TEST_CASE("New Car with null pointer")
{
    REQUIRE_THROWS_WITH(Car _target(nullptr), "service must not be null");

    // If assertion fails test execution continues
    CHECK(1 > 0);
}

TEST_CASE("New Car with GasStation")
{
    GasolineSource *stationService = new GasStation();
    
    Car _target(stationService);
    
    delete stationService;
    
    // If assertion fails test execution continues
    CHECK(stationService == nullptr);
}
