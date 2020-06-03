
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>

int incorrect_input(char num[255], int* test_flag)
{
    int i, numCheck, intnum;
    std::stringstream ss;
    for (i = 0; i < 4; i++) {
        numCheck = num[i];

        if (numCheck < 48 || numCheck > 57) {
            *test_flag = 1;
        } else {
            ss << num;
            ss >> intnum;
        }
    }
    return intnum;
}
