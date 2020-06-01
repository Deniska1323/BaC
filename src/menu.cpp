#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>



void PrintMenu(){
    std::cout << "Выберите вариант\n\n\n";
    std::cout << "1. New game\n\n" << "0. Exit\n\n";
    std::cout << ">>> ";
}

void Menu()
{
    int variant = -1;

    while (variant == -1){
        PrintMenu();
        std::cin>> variant;

        if(variant == 1){
            break;
        }
        else if(variant == 0){
            exit(EXIT_SUCCESS);
        }
        else{
            variant = -1;
        }
    system("clear");
    }
}
