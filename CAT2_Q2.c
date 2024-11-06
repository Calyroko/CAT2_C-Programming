/*question 2
author :caleb maroko
date : november 6
*/


#include <stdio.h>

int main() {
    // 1. Define an array data structure
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // 2. Print the elements of the "scores" array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}