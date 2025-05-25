#include<stdio.h>

int main()
{
    //check 4 th digit is one @ 4th place in binary
    unsigned int iNo1=0;
    unsigned int iMask = 0X00000008;

    printf("Enter the  number \n");
    scanf("%u",&iNo1);

    int iRet = iNo1&iMask;

    if(iRet==iMask)
    printf("Nine digit is ON");
    else
    printf("Nine digit is OFF");

    return 0;

}