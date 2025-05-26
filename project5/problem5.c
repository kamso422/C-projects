//
// Created by chikams on 15/05/25.
//
#include <stdio.h>
int checkDiv(const int *num, int theNum);
int divide(int *num, int theNum);

int main(void) {
    int nums[19] ={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int LCM = 1;
    for (int i = 2; i <= 19; i++) {
        jump_here: const int divisor = divide(nums, i);
        if (divisor)
            LCM *= i;
        if (checkDiv(nums,i) == 1)
            goto jump_here;
    }
    printf("THE LCM: %d\n",LCM);
    return 0;
}
int checkDiv(const int *num, const int theNum) {
    for (int i = 0; i < 19; i++) {
        if (num[i] % theNum == 0)
            return 1;
    }
    return 0;
}
int divide(int *num, const int theNum) {
    int divisor = 0;
    for (int i = 0; i < 19; i++) {
        if (num[i] % theNum == 0) {
            divisor = 1;
            num[i] /= theNum;
        }
    }
    return divisor;
}
