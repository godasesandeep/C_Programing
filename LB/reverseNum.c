#include<stdio.h>

int reverse(int num)
{
    int iRev=0;
    int r=0;
    while(num !=0)
    {
        r=num%10;
        iRev=iRev*10+r;
       num=num/10; 
       
    }
    return iRev;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number \n");
    scanf("%lu",&iValue);
    iRet=reverse(iValue);
    printf("reverse number  is : %d" ,iRet);

    return 0;
}