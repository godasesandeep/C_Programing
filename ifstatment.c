#include<stdio.h>
int main()
{
int a=5, b=10;
if(a>10 && a>b)
printf("a is greater than 10"); //associated with the if header
printf("a is greater than b");  //not associated with the if header

if(a>10 && a>b)
{
printf("a is greater than 10"); //block is not executd due to false condition
printf("a is greater than b");
}
return 0;
}