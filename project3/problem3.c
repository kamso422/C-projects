//
// Created by chikams on 15/05/25.
//
#include <stdio.h>
#define MAX_NUM 775146
#define NUM 600851475143
int main(void) {
    for (int i = 3; i < MAX_NUM; i++) {
        if (NUM % i == 0) {
            printf("%d\t",i);
        }
    }
    return 0;
}