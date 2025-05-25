#include<stdio.h>

int main()
{
    //check 4 th digit is one @ 4th place in binary
    unsigned int iNo1=0;
    unsigned int iMask = 288;

    printf("Enter the  number \n");
    scanf("%u",&iNo1);

    int iRet = iNo1&iMask;

    if(iRet==iMask)
    printf("Six and Nine digit is ON");
    else
    printf("Six / Nine digit is OFF");

    return 0;

}