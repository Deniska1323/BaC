#include "input.hpp"
#include "logic.hpp"
#include "menu.hpp"
#include "randomizer.hpp"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Menu();
    logic();
}
