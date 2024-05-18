#include<stdio.h>

//factorial

long int factorial(long int iNo)
{
    if(iNo==1)
    return 1;
    return factorial(iNo-1)*iNo;
    
}

int main()
{
    int iValue=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);
    printf("Factorial of number  %d is %ld \n ",iValue,factorial(iValue));
}