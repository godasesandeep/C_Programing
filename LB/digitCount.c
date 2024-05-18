#include<stdio.h>

int digitCount(long unsigned int num)
{
    long unsigned int count=0;
    while(num !=0)
    {
       num=num/10; 
       count++;
    }
    return count;
}

int main()
{
    long unsigned int iValue=0;
    long unsigned int iRet=0;
    printf("Enter the number \n");
    scanf("%lu",&iValue);
    iRet=digitCount(iValue);
    printf("Number of digit is : %lu" ,iRet);

    return 0;
}