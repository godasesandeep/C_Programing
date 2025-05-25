#include<stdio.h>

int main()
{
    //check 4 th digit is ON if ON then OFF the degit i.e 12 then out 4
    unsigned int iNo1=0;
    unsigned int iMask = 0Xfffffff7;

    printf("Enter the  number \n");
    scanf("%u",&iNo1);

    int iRet = iNo1&iMask;

    
    printf("%u",iRet);

    return 0;

}