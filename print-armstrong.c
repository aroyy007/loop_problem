//C program to print Armstrong numbers from start to end
#include <stdio.h>
#include <math.h>

int main() {
   int sum = 0, digit, digits, temp,start,end;

   printf("Enter start and end: ");
   scanf("%d %d", &start,&end);
    for(int i = start; i <= end; i++)
    {
    temp = i;
    digits = (int) log10(temp) + 1;

   while (temp != 0) {
       digit = temp % 10;
       sum += pow(digit, digits);
       temp /= 10;
   }
   if(sum == i)
   {
       printf("%d, ",i);
   }
    sum = 0;
    }


   return 0;
}

