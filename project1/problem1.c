//
// Created by chikams on 15/05/25.
//
#include <stdio.h>
#include <stdlib.h>
int findSum(int num1,int num2);

int main(void) {
   const int num1 = 0;
   const int num2 = 0;
   printf("Enter two numbers: \n");
   scanf("%d %d",&num1,&num2);
   const int sum = findSum(num1, num2);
   printf("The sum: %d\n",sum);

   return 0;
}

int findSum(const int num1, const int num2) {
   int sum = 0;
   for (int i = 1; i < 1000; i++) {
      if ((i % num1 == 0) || (i % num2 == 0)) {
         sum += i;
      }
   }
   return sum;
}