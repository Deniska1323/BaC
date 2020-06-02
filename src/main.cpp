#include "input.hpp"
#include "logic.hpp"
#include "menu.hpp"
#include "randomizer.hpp"
#include <time.h>
#include <cstlib>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Menu();
    logic();
}
