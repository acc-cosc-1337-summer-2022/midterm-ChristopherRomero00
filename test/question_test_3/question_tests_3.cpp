#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_sales_commission function")
{
	REQUIRE(get_sales_commission(100) == 5);
	REQUIRE(get_sales_commission(750) == 45);
	REQUIRE(abs(get_sales_commission(1100)) == abs(77));
	REQUIRE(get_sales_commission(1750) == 140); 
}