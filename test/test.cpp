

#include "../functions.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Round to 2 digits implemented correctly. Test1", "[round_off]"){

    REQUIRE(fabs(round_off(125.123456789,2) - 125.12 ) < 0.001);

}

TEST_CASE("Round to 4 digits implemented correctly. Test2", "[round_off]"){

    REQUIRE(fabs(round_off(125.123456789,4) - 125.1235) < 0.00001);

}

TEST_CASE("Round to whole implemented correctly. Test3", "[round_off]"){

    REQUIRE(fabs(round_off(125.987654321,0) - 126.) < 0.001);

}

TEST_CASE("Round to 5 digits implemented correctly. Test4", "[round_off]"){

    REQUIRE(fabs(round_off(125.987654321, 5) - 125.98765) < 0.000001);

}
