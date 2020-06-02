#include "input.hpp"
#include "logic.hpp"
#include "menu.hpp"
#include "randomizer.hpp"
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));

    Menu();
    logic();
}