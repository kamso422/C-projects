//
// Created by chikams on 16/05/25.
//
#include <stdio.h>

int main(void) {
    int numArr[100];

    //fill array with num
    for (int i = 0; i <= 99; i++) {
        numArr[i] = i+1;
    }
    int square_of_sum = 0;
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i <= 99; i++) {
        sum2 += numArr[i] * numArr[i];
        sum += numArr[i];
    }
    square_of_sum = (sum * sum);
    printf("The result: %d\n",square_of_sum-sum2);
}