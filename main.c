#include<stdio.h>

int x=21;
extern int no;
extern void fun();

int main()
{
    
    printf("Value of no is : %d \n",no);
    printf("Value of x is : %d \n",x);
    fun();
    return 0;
}