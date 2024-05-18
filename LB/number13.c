#include<stdio.h>

//factorial

unsigned long int factorial(int iNo)
{
    unsigned long int iFact=1;
    int i=1;
    for(i=1;i<=iNo;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    unsigned long int ret=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    ret=factorial(iValue);
    printf("Factorial of number  %d is %lu \n ",iValue,ret);
}