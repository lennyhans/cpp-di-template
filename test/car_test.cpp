#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include <string>
#include "Car.hpp"
#include "GasStation.hpp"
#include "FuelCan.hpp"
#include <memory>

TEST_CASE("Car Test")
{
    SUBCASE("Null pointer service"){
        CHECK_THROWS_WITH(Car _target(nullptr), "service must not be null");
    }

    SUBCASE(" with GasStation")
    {
        auto stationService = std::unique_ptr<GasolineSource>(new GasStation());

        auto target = std::unique_ptr<Car>(new Car(stationService.get()));


        SUBCASE(" move forward"){
            int gas_loaded = 1000; // Mililiters

            target->m_gasoline = gas_loaded;
            target->m_performance = 18; // Km/L
            int consumed_gas = target->move(1000); // Meters
            int expected_remaining_gas = 55; // Meters / performance
            CHECK(expected_remaining_gas == consumed_gas);
            REQUIRE(target->m_gasoline == gas_loaded - consumed_gas );
        }
        target->getGasoline();
        stationService = NULL;
        // If assertion fails test execution continues
        CHECK(stationService == nullptr);
    }

    SUBCASE("with FuelCan")
    {
        auto canService = std::unique_ptr<GasolineSource>(new FuelCan());

        auto target = std::unique_ptr<Car>(new Car(canService.get()));
        target->getGasoline();
        canService = NULL;
        // If assertion fails test execution continues
        CHECK(canService == nullptr);
    }

}


