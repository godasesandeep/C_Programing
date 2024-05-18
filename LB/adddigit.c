#include<stdio.h>

int digitCount(int num)
{
    int sum=0;
    int r=0;
    while(num !=0)
    {
        r=num%10;
        sum=sum+r;
       num=num/10; 
       
    }
    return sum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number \n");
    scanf("%lu",&iValue);
    iRet=digitCount(iValue);
    printf("sum of digit is : %d" ,iRet);

    return 0;
}