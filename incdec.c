#include<stdio.h>

int main()
{
    int a;
    a=++2; //error: lvalue required as increment operand ==>constant has no increament value
    printf("The result of application of pre-increment operator is %d",a);

    return 0;
}