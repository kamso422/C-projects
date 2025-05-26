//
// Created by chikams on 16/05/25.
//
#include <stdio.h>
#define MAX_NUM 2000000

int main(void) {

    long int sum = 0;
    int numArr[MAX_NUM/2];
    int index = 0;
    for (int i = 3; i <= 2000000; i++) {
        if (i % 2 != 0) {
            numArr[index] = i;
            ++index;
        }
    }
    index = MAX_NUM/2-1;
    int primeCounter = 1;
    for (int i = 1; i <= index; i++) {
        for (int j = 0; j < i; j++) {
            if (numArr[i] % numArr[j] != 0) {
                if (j == i - 1) {
                    printf("%d\n",numArr[i]);
                    ++primeCounter;
                    sum += numArr[i];
                }
            }else
                break;
        }
    }
    printf("%ld\n",sum);
    return 0;
}