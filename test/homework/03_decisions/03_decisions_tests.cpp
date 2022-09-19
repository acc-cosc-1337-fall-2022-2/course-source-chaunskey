#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("if test case") {
    REQUIRE(get_letter_grade_using_if(9) == "A");
    REQUIRE(get_letter_grade_using_if(8) == "B");
    REQUIRE(get_letter_grade_using_if(7) == "C");
    REQUIRE(get_letter_grade_using_if(6) == "D");
    REQUIRE(get_letter_grade_using_if(5) == "F");
}

TEST_CASE("switch test case") {
    REQUIRE(get_letter_grade_using_switch(9) == "A");
    REQUIRE(get_letter_grade_using_switch(8) == "B");
    REQUIRE(get_letter_grade_using_switch(7) == "C");
    REQUIRE(get_letter_grade_using_switch(6) == "D");
    REQUIRE(get_letter_grade_using_switch(5) == "F");
}

