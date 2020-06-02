#include <iostream>

void input(int& number)
{
    int temp;
    while (true) {
        std::cin >> temp;
        if ((temp < 123 && temp != 0) || temp > 9876) {
            std::cout << "\n\nInput is incorrect\nTry again\n\n> ";
            continue;
        } else
            break;
    }
    number = temp;
}