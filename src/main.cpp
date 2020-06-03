#include "input.hpp"
#include "logic.hpp"
#include "menu.hpp"
#include "ncurses.h"
#include "randomizer.hpp"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);

    Menu();
    logic();
}
