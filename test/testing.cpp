#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
#include "../src/input.hpp" //Doesn't need tests
#include "../src/logic.hpp"
#include "../src/menu.hpp"
#include "../src/randomizer.hpp"
#include "../thirdparty/catch.h"

TEST_CASE("Testing randomizer function", "[rand]")
{
    int k = 0;
    int equal = 1;
    int test_size = 4;
    int rand_array[4];
    Randomizer(rand_array);
    for (int i = 0; i < 4; i++) {
        k++;
    }
    if (k == test_size)
        equal = 1;
    else
        equal = 0;
    REQUIRE(equal == 1);
}