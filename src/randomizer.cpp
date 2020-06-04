#include <cstdio>
#include <cstdlib>
#include <iostream>

void Randomizer(int* arr) //	Creates guessed number
{
    bool same = false; //	If we have a pair of the same digits
    int i = 0;         //	Counter
    int first = 0;
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
    while (true) {
        if (arr[first] == 0 || arr[first] == arr[1] || arr[first] == arr[2]
            || arr[first] == arr[3])
            arr[first] = rand() % 10;
        else
            break;
    }
}
