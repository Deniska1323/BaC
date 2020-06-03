#include "ncurses.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintMenu()
{
    move(1, 2);
    printw("Choose:");
    move(3, 1);
    printw("1. New game");
    move(4, 1);
    printw("0.   Exit");
    refresh();
}

void Menu()
{
    char variant = '3';

    while (variant == '3') {
        PrintMenu();
        variant = getch();

        if (variant == '1') {
            system("clear");
            break;
        } else if (variant == '0') {
            system("clear");
            exit(EXIT_SUCCESS);
            endwin();
        } else {
            variant = '3';
        }
        system("clear");
    }
}
