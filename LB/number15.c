#include<stdio.h>

//factorial

long int factorial(int iNo)
{
    long int iFact=1;
    int i=1;
    while(i<=iNo)
    {
        iFact=iFact*i;
        i++;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    long int ret=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    ret=factorial(iValue);
    printf("Factorial of number  %d is %lu \n ",iValue,ret);
}