#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "utils.hpp"

TEST_CASE( "the answer of life" ) {
  REQUIRE( 42 == toto );
}
