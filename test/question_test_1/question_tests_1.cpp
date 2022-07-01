#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test calculate tax function")
{
	Receipt receipt(10, 0);
	REQUIRE(receipt.calculate_tax() == 0.8);

	Receipt receipt2(20, 0);
	REQUIRE(receipt2.calculate_tax() == 1.60);

	Receipt receipt3(30, 0);
	REQUIRE(receipt3.calculate_tax() == 2.40);

}

TEST_CASE("Test calculate gratuity function")
{
	Receipt receipt(10, 20);
	REQUIRE(receipt.calculate_gratuity() == 2);

	Receipt receipt2(20, 15);
	REQUIRE(receipt.calculate_gratuity() == 2);

	Receipt receipt3(30, 10);
	REQUIRE(receipt.calculate_gratuity() == 2);
}