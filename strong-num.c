//C program to check whether a number is Strong Number or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int sum=0;
    int temp = num;
    while(temp!=0)
    {
        int last = temp%10;
        int fact = 1;
        for(int i=1;i<=last;i++)
        {
            fact=fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if(sum==num)
    {
        printf("%d is strong number",num);
    }
    else{
        printf("%d is not strong number",num);
    }
}
