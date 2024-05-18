#include<stdio.h>

void DisplayDigit(int num)
{
    int r=0;
    while(num !=0)
    {
       r=num%10;
       printf("%d \n",r);
       num=num/10; 
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    DisplayDigit(iValue);

    return 0;
}