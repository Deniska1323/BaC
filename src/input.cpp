#include "incorrect_input.hpp"
#include "ncurses.h"
#include "sstream"
#include <cstdio>
#include <cstdlib>
#include <iostream>

void input(int& number)
{
    int key, size = 0, test_flag;
    char num[255];
    num[0] = '\0';
    move(0, 1);
    printw("Enter your number");
    move(2, 0);
    printw(">");
    move(2, 1);
    printw("    ");
    while (1) {
        key = getch();
        if (key == 10 && size == 4) {
            break;
        }
        switch (key) {
        case KEY_BACKSPACE: {
            if (size >= 0) {
                num[size] = '\0';
                move(2, size);
                if (size != 0) {
                    printw(" ");
                    size--;
                }
            }
            break;
        }
        default: {
            if (size < 4 && (key >= 48 && key <= 57)) {
                num[size] = (char)key;
                num[size + 1] = '\0';
                move(2, 1 + size);
                printw("%c", key);
                size++;
            }
            break;
        }
        }
        refresh();
    }

    number = incorrect_input(num, &test_flag);
}
