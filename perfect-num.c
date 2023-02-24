//C program to check whether a number is Perfect number or not

#include <stdio.h>

int main() {
   int number,i, sum = 0;

   printf("Enter an integer: ");
   scanf("%d", &number);
    for(i = 1; i<number ; i++)
    {
      if(number % i == 0) {
         sum=sum+i;
      }
    }
    if (sum==number)
    {
      printf("%d is a perfect number.", number);
    }
   else
    {
      printf("%d is not a perfect number.", number);
    }

   return 0;
}

