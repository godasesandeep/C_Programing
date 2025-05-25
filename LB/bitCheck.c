#include<stdio.h>

int main()
{
    //check 4 th digit is one @ 4th place in binary
    unsigned int iNo1=0;
    unsigned int iMask = 8;

    printf("Enter the  number \n");
    scanf("%u",&iNo1);

    int iRet = iNo1&iMask;

    if(iRet==8)
    printf("Forth digit is ON");
    else
    printf("Forth digit is OFF");

    return 0;

}