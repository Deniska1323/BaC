
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintMenu()
{
    std::cout << "Choose:\n\n";
    std::cout << "1. New game\n"
              << "0. Exit\n\n";
    std::cout << "> ";
}

void Menu()
{
    int variant = -1;

    while (variant == -1) {
        PrintMenu();
        std::cin >> variant;

        if (variant == 1) {
            system("clear");
            break;
        } else if (variant == 0) {
            system("clear");
            exit(EXIT_SUCCESS);
        } else {
            variant = -1;
        }
        system("clear");
    }
}
