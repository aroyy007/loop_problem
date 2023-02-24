//C program to print strong numbers from start to end
#include<stdio.h>
int main()
{
    int num,start,end;
    printf("Enter range: ");
    scanf("%d %d",&start,&end);
    for(int j= start; j <= end; j++)
    {
    int sum=0;
    int temp = j;
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
    if(sum==j)
    {
        printf("%d, ",j);
    }
    }


}
