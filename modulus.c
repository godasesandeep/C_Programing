#include<stdio.h>

int main()
{
    int a;
    a=4%3.0; //error: invalid operands to binary % (have 'int' and 'double')
    printf("4%%3.0 =%d",a);
    return 0;
}