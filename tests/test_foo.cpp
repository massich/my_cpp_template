#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <foo/foo.h>

TEST_CASE( "the answer of life" ) {
  REQUIRE( 42 == the_meaning_of_life() );
}

TEST_CASE( "we love Tau" ) {
  REQUIRE( 6.3 == 6.3 );
}
