#include <cstdio>
#include <iostream>

void Randomizer(int* arr) //	Creates guessed number
{
    bool same = false; //	If we have a pair of the same digits
    int i = 0;         //	Counter

    while (i < 4) {
        arr[i] = rand() % 10;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                same = true;
                break;
            }
        }
        if (!same)
            i++;

        same = false;
    }
}
