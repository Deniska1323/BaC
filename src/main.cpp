#include "input.hpp"
#include "logic.hpp"
#include "menu.hpp"
#include "randomizer.hpp"
#include <cstdio>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Menu();
    logic();
}
