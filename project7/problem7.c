//
// Created by chikams on 16/05/25.
//
#include <stdio.h>
#define MAX_NUM 60000

int main(void) {
    int numArr[MAX_NUM];
    int index = 0;
    for (int i = 3; i <= 120000; i++) {
        if (i % 2 != 0) {
            numArr[index] = i;
            ++index;
        }
    }
    index = MAX_NUM-1;
    int primeCounter = 1;
   for (int i = 1; i <= index; i++) {
       for (int j = 0; j < i; j++) {
           if (numArr[i] % numArr[j] != 0) {
               if (j == i - 1) {
                   ++primeCounter;
                   if (primeCounter == 10000)
                       printf("%d\n",numArr[i]);
               }
           }else
               break;
       }
   }
    return 0;
}