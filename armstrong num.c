//C program to check whether a number is armstrong number or not
#include <stdio.h>
#include <math.h>

int main() {
   int number, sum = 0, digit, digits, temp;

   printf("Enter an integer: ");
   scanf("%d", &number);

   temp = number;
    digits = (int) log10(temp) + 1;

   while (temp != 0) {
       digit = temp % 10;
       sum += pow(digit, digits);
       temp /= 10;
   }

   if (sum == number)
       printf("%d is an Armstrong number.", number);
   else
       printf("%d is not an Armstrong number.", number);

   return 0;
}

