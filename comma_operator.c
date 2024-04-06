#include<stdio.h>


int main()
{

    int a,b;
    a=6,2,3,4,5,7;
    b=(6,2,3,4,5,1); 

    /* The result of evaluation of 
    comma operator is the result of evaluation 
    of the rightmost sub-expression*/
    printf    ("Value of a=%d & b= %d ",a,b); //Value of a=6 & b= 1 

    return 0;
}