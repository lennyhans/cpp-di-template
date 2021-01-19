#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include <string>
#include "FuelCan.hpp"
#include "GasStation.hpp"
#include <memory>


TEST_CASE("FuelCan FuelUp")
{
    auto canService = std::unique_ptr<GasolineSource>(new FuelCan());

    SUBCASE("Emtpy Exception "){
        canService->fuel_available = 0;
        INFO("Remaining fuel in the can %d", canService->fuel_available );
        REQUIRE_THROWS_WITH(canService->FuelUp(1), FuelCan::MSG_ERR_EMPTY_CAN);

        // If assertion fails test execution continues
    }

    SUBCASE("Ok"){
        try {
            int fuel_remaining = canService->fuel_available;
            INFO("Remaining fuel in the can %d", canService->fuel_available );
            int fuel_to_fill = 1;

            int fueled_amount = canService->FuelUp(fuel_to_fill);
            CHECK(fueled_amount > fuel_remaining);

        }
        catch( const std::exception& e ) {
            INFO(e);
        }
    }
}
