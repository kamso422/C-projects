//
// Created by chikams on 15/05/25.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long sum = 0;
    long num  = 0;
    long preValue = 1;
    long value = 1;
    while (value <= 4000000) {
        if (value % 2 == 0)
            sum += value;

        num = value;
        value += preValue;
        preValue = num;
    }
    printf("%ld\n",sum);
    return 0;
}