#include<stdio.h>

int digitCount(int num)
{
    int count=0;
    int r=0;
    while(num !=0)
    {
        r=num%10;
        if(r>5)
        {
        printf("%d \n",r);
        count++;
        }
       num=num/10; 
       
    }
    return count;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number \n");
    scanf("%lu",&iValue);
    iRet=digitCount(iValue);
    printf("Number of digit greated than 5 is : %d" ,iRet);

    return 0;
}