#include "logic.hpp"
#include "input.hpp"
#include "ncurses.h"
#include "randomizer.hpp"
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void logic()
{
    //	number - our number, answer - key number, ran[4] - random 4-digit
    // number, tries - attempts to give answer
    int number, digit, ran[4], answer[4], bull, cow, tries, y = 4, x = 0;

    initscr();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);

    bool f = 0;

    while (1) {
        Randomizer(ran);
        tries = 0;
        while (1) {
            bull = 0;
            cow = 0;
            // move(4, 1);
            // printw("%i - ", tries + 1);
            // cout << tries + 1 << " - ";
            tries++;

            // std::cout << "Enter your number\n"; //	0 -> Show answer
            input(number);
            if (tries % 5 == 0) {
                y = 4;
                x += 13;
            }
            y += 2;
            move(2 + y, 1 + x);
            printw("%i", number);

            if (number == 0)
                break;
            for (int i = 3; i >= 0; i--) {
                digit = number % 10;
                answer[i] = digit;
                number = (number - digit) / 10;
            }

            //	Checks if random and our number the same digits at th esame
            // places
            for (int i = 0; i < 4; i++) {
                if (answer[i] == ran[i]) {
                    bull++;
                }
            }

            //	Checks if random and our number have the same digits (also same
            // places)
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (answer[i] == ran[j]) {
                        cow++;
                    }
                }
            }

            cow -= bull;
            move(3 + y, 1 + x);
            printw("%i - ", tries);
            move(3 + y, 6 + x);
            printw("%ib %ic", bull, cow);

            // std::cout << bull << "b " << cow << "c" << endl << endl;
            if (bull == 4) {
                cout << "You win ";
                break;
            }
        }

        //	Outputs answer
        cout << "\nAnswer is ";
        for (int i = 0; i < 4; i++) {
            cout << ran[i];
        }

        //	Restart menu
        std::cout << endl << "\nRestart game? 1-yes 0 - no" << endl;
        cin >> f;
        if (f == 0) {
            clear();
            cout << "Thanks for game!\n\n";
            exit(EXIT_SUCCESS);
        }
        clear();
        f = 0;
    }
}
