//
// Created by chikams on 15/05/25.
//
#include <stdio.h>
#define MAX_NUM 999
int checkPali(const int num) {
    int revNum = 0;
    int rem = 0;
    int theNum = num;
    while (theNum > 0) {
        rem = theNum % 10;
        theNum = theNum / 10;
        revNum = (revNum * 10) + rem;
    }
    if (num == revNum)
        return 1;
    return 0;
}

int main(void) {
    int largest = 0;
    for (int i = 900; i <= MAX_NUM; i++) {
        for (int j = 900; j <= MAX_NUM; j++) {
            const int num = i * j;
            if (checkPali(num) == 1) {
                if (num > largest)
                    largest = num;
            }
        }
    }
    printf("%d\n",largest);
    return 0;
}