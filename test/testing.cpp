#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
#include "../src/input.hpp" //Doesn't need tests
#include "../src/logic.hpp"
#include "../src/menu.hpp"
#include "../src/randomizer.hpp"
#include "../thirdparty/catch.hpp"

TEST_CASE("Testing randomizer function #1", "[rand]")
{
    int k = 0;
    int equal = 1;
    int test_size = 4;
    int test_rand_array[4];
    Randomizer(test_rand_array);
    for (int i = 0; i < 4; i++) {
        k++;
    }
    if (k == test_size)
        equal = 1;
    else
        equal = 0;
    REQUIRE(equal == 1);
}
TEST_CASE("Testing randomizer function #2", "[rand]")
{
    int count = 0;
    int equal = 1;
    int test_rand_array[4];
    while (count < 100) {
        count++;
        Randomizer(test_rand_array);
        if (test_rand_array[0] == 0) {
            equal = 0;
            break;
        }
        REQUIRE(equal == 1);
    }
}